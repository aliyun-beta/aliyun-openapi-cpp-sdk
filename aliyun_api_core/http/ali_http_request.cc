#include "ali_http_request.h"
#include "ali_tcp_connection.h"
#include "ali_tls_connection.h"
#include "ali_string_utils.h"
#include "ali_urlencode.h"
#include "http_parser.h"
#include "ali_log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum {
  PARSER_EVENT_MSG_BEGIN,
  PARSER_EVENT_STATUS,
  PARSER_EVENT_URL,
  PARSER_EVENT_FIELD,
  PARSER_EVENT_VALUE,
  PARSER_EVENT_HEADER_COMPLETE,
  PARSER_EVENT_BODY,
  PARSER_EVENT_MSG_COMPLETE
};
void RequestHandleParserEvent(AliHttpRequest* req, int type, char* buf, int len);
static int relay_message_begincb(http_parser *parser) {
    AliHttpRequest* req = (AliHttpRequest*)parser->data;
    RequestHandleParserEvent(req, PARSER_EVENT_MSG_BEGIN, NULL, 0);
   return 0;
}

static int relay_status_completecb(http_parser *parser) {
    AliHttpRequest* req = (AliHttpRequest*)parser->data;
    RequestHandleParserEvent(req, PARSER_EVENT_STATUS, NULL, 0);
   return 0;
}

static int relay_url_complete(http_parser* parser, const char *data, size_t len)
{
  AliHttpRequest* req = (AliHttpRequest*)parser->data;
  RequestHandleParserEvent(req, PARSER_EVENT_URL, (char*)data, len);
  return 0;
}

static int relay_header_fieldcb(http_parser *parser, const char *data, size_t len) 
{
  AliHttpRequest* req = (AliHttpRequest*)parser->data;
  RequestHandleParserEvent(req, PARSER_EVENT_FIELD, (char*)data, len);
  return 0;
}

static int relay_header_valuecb(http_parser *parser, const char *data, size_t len)
{ 
  AliHttpRequest* req = (AliHttpRequest*)parser->data;
  RequestHandleParserEvent(req, PARSER_EVENT_VALUE, (char*)data, len);
  return 0;
}

static int relay_headers_completecb(http_parser *parser)
{
  AliHttpRequest* req = (AliHttpRequest*)parser->data;
  RequestHandleParserEvent(req, PARSER_EVENT_HEADER_COMPLETE, NULL, 0);
  return 0;
}

static int relay_bodycb(http_parser *parser, const char *data, size_t len) {
  AliHttpRequest* req = (AliHttpRequest*)parser->data;
  RequestHandleParserEvent(req, PARSER_EVENT_BODY, (char*)data, len);
  return 0;
}

static int relay_message_completecb(http_parser *parser)
{
  AliHttpRequest* req = (AliHttpRequest*)parser->data;
  RequestHandleParserEvent(req, PARSER_EVENT_MSG_COMPLETE, NULL, 0);
  return 0;
}

static http_parser_settings htp_hooks = {
  relay_message_begincb,                     //http_cb      on_message_begin
  relay_url_complete,       //http_data_cb on_url;
  relay_status_completecb,  //http_cb on_status_complete 
  relay_header_fieldcb,     //http_data_cb on_header_field;
  relay_header_valuecb,     //http_data_cb on_header_value;
  relay_headers_completecb, //http_cb      on_headers_complete;
  relay_bodycb,             //http_data_cb on_body;*/
  relay_message_completecb  //http_cb      on_message_complete;
};


AliHttpRequest::AliHttpRequest(std::string url) {
  this->method_ = "GET";
  this->port_ = "80";
  this->url_ = url;
  this->is_tls = false;
  this->is_last_value_ = false;
  this->is_response_complete = false;
  this->is_response_header_complete = false;
  this->connection_ = NULL;
  parser_ = (http_parser*)calloc(1, sizeof(http_parser));
  this->ParseUrl();
}

AliHttpRequest::~AliHttpRequest() {
  if(this->connection_) {
    this->connection_->Close();
  }
  free(parser_);
}

AliHttpRequest& AliHttpRequest::setRequestMethod(std::string method) {
  this->method_ = method;
  return *this;
}

int AliHttpRequest::CommitRequest() {
  bool with_query = true;
  
  if(this->method_ == "POST") {
    with_query = false;
    this->map_request_headers_["Content-Length"] = get_format_string("%d", this->query_.size());
  }
  std::string path = GetPath(with_query); 

  std::string req = get_format_string("%s %s HTTP/1.1\r\n", this->method_.c_str(),  path.c_str());
  for(std::map<std::string, std::string>::iterator it = map_request_headers_.begin();
      it != map_request_headers_.end(); it++) {
    append_format_string(req, "%s: %s\r\n", it->first.c_str(), it->second.c_str());
  }
  req.append("\r\n");

  ALI_LOG("request=\n%s", req.c_str());

  if(this->is_tls) {
    connection_ = new AliTlsConnection(this->host_, atoi(this->port_.c_str()));
  } else {
    connection_ = new AliTcpConnection(this->host_, atoi(this->port_.c_str()));
  }

  if(connection_->Connect() != 0) {
    return -1;
  }

  if(connection_->Send((char*)req.c_str(), req.size()) <= 0) {
    return -1;
  }
  if(this->method_ == "POST" && this->query_.size() > 0) {
     if(connection_->Send((char*)this->query_.c_str(), this->query_.size()) <= 0) {
      return -1;
    }
  }
  return 0;
}

int AliHttpRequest::ParseUrl() {
  http_parser_url parser_url;
  if(http_parser_parse_url_(url_.c_str(), url_.size(), false, &parser_url) != 0) {
    return -1;
  }
  if(parser_url.field_set &  (1 << UF_PATH)) {
    int len = parser_url.field_data[UF_PATH].len;
    path_.resize(len);
    strncpy((char*)path_.c_str(), url_.c_str() + parser_url.field_data[UF_PATH].off, len);
  }

  if(parser_url.field_set &  (1 << UF_SCHEMA)) {
    int len = parser_url.field_data[UF_SCHEMA].len;
    sechema_.resize(len);
    strncpy((char*)sechema_.c_str(), url_.c_str() + parser_url.field_data[UF_SCHEMA].off, len);
  }

  if(parser_url.field_set & (1 << UF_HOST)) {
    int len = parser_url.field_data[UF_HOST].len;
    host_.resize(len);
    strncpy((char*)host_.c_str(), url_.c_str() + parser_url.field_data[UF_HOST].off, len);
    this->map_request_headers_["Host"] = host_;
  }

  if(parser_url.field_set & (1 << UF_QUERY)) {
    int len = parser_url.field_data[UF_QUERY].len;
    query_.resize(len);
    strncpy((char*)query_.c_str(), url_.c_str() + parser_url.field_data[UF_QUERY].off, len);
  }

  if(parser_url.field_set & (1 << UF_FRAGMENT)) {
    int len = parser_url.field_data[UF_FRAGMENT].len;
    flagment_.resize(len);
    strncpy((char*)flagment_.c_str(), url_.c_str() + parser_url.field_data[UF_FRAGMENT].off, len);
  }

  if(parser_url.field_set & (1 << UF_PORT)) {
    int len = parser_url.field_data[UF_PORT].len;
    port_.resize(len);
    strncpy((char*)port_.c_str(), url_.c_str() + parser_url.field_data[UF_PORT].off, len);
  } else if(sechema_ == "https") {
    port_ = "443";
    this->is_tls = true;
  }

  return 0;
}

AliHttpRequest& AliHttpRequest::AddRequestHeader(std::string field, std::string value) {
  map_request_headers_[field] = value;
  return *this;
}

AliHttpRequest& AliHttpRequest::AddRequestQuery(std::string field, std::string value) {
  if(!this->query_.empty()) {
    query_.append("&");
  }
  append_format_string(query_, "%s=%s", urlencode(field).c_str(),  urlencode(value).c_str());
  return *this;
}

int AliHttpRequest::AppendBody(std::string& body) {
  return this->connection_->Send((char*)body.c_str(), body.size());
}

int AliHttpRequest::CommitRequestWithBody(const std::string& body) {
  // todo:check body size
  int ret = 0;
  bool do_write = false;
  if(this->method_ == "POST" || this->method_ == "PUT") {
    do_write = true;
  }

  if(do_write) {
    this->AddRequestHeader("Content-Length", get_format_string("%d", body.size()));
  }
  
  ret = this->CommitRequest();

  if(do_write && body.size()) {
    this->connection_->Send((char*)body.c_str(), body.size());
  }
  
  return 0;
}

int AliHttpRequest::WaitResponseHeaderComplete() {
  char Read_buf[4096] = {};
  int last_Read = 0;
  http_parser_init_(parser_, HTTP_RESPONSE);
  parser_->data = this;

  do{
    bzero(Read_buf, sizeof(Read_buf));
    last_Read = this->connection_->Read(Read_buf, sizeof(Read_buf));
    if(last_Read < 0) {
      break;
    }
    http_parser_execute_(parser_, &htp_hooks, Read_buf, last_Read);
  } while(!is_response_header_complete);
  
  if(last_Read < 0) {
    return -1;
  }

  return this->response_status_code_;
}

std::string AliHttpRequest::GetPath(bool with_query) {
  std::string path = this->path_;

  if(path.empty()) {
    path = "/";
  }
  
  if(with_query) {
    if(!this->query_.empty()) {
      path.append("?").append(query_);
    }
    if(!this->flagment_.empty()) {
      path.append("#").append(flagment_);
    }
  }

  return path;
}

int AliHttpRequest::ReadResponseBody(std::string& body) {
  char read_buf[4096] = {};
  int last_Read = 0;
  while(!this->is_response_complete && parser_->http_errno == 0) {
    last_Read = this->connection_->Read(read_buf, sizeof(read_buf));
    if(last_Read <= 0) {
      goto out;
    }
    http_parser_execute_(parser_, &htp_hooks, read_buf, last_Read);
  } 
  
out:
  body = this->resposne_body_;
  ALI_LOG("read result:\n%s", body.c_str());
  this->resposne_body_.clear();
  return body.size();
}

void RequestHandleParserEvent(AliHttpRequest* req, int type, char* buf, int len) {
  switch(type) {
    case PARSER_EVENT_STATUS: {
      ALI_LOG("status = %d",  req->parser_->status_code);
      req->response_status_code_ = req->parser_->status_code;
      break;
    }
    case PARSER_EVENT_FIELD: {
      if(req->is_last_value_) {
        req->map_reponse_headers_[req->last_response_field_] = req->last_response_value_;
        req->last_response_field_ = "";
        req->last_response_value_ = "";
      }
       req->last_response_field_.append(buf, len);
       req->is_last_value_ = false;
    }
     break;
    case PARSER_EVENT_VALUE: {
      req->is_last_value_ = true;
      req->last_response_value_.append(buf, len);
      break;
    }

    case PARSER_EVENT_HEADER_COMPLETE: {
      if(req->last_response_field_.size() > 0) {
        req->map_reponse_headers_[req->last_response_field_] = req->last_response_value_;
        req->last_response_field_ = "";
        req->last_response_value_ = "";
      }
      req->is_response_header_complete = true;
      break;
    }
    case PARSER_EVENT_BODY: {
      req->resposne_body_.append(buf, len);
      break;
    }

    case PARSER_EVENT_MSG_COMPLETE: {
      req->is_response_complete = true;
      break;
    }

  }
}
