#include "http_test_listener.h"
#include "ali_sys_network.h"
#include "http_parser.h"
#include "ali_string_utils.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <vector>
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

static const char* get_status_string(int status_code, int upgrade)
{
  switch(status_code) {
  case 100: return "100 Continue";
  case 101: return "101 Switching Protocols";
  case 200: return (upgrade?"200 Connection established":"200 OK");
  case 201: return "201 Created";
  case 202: return "202 Accepted";
  case 203: return "203 Non-Authoritative Information";
  case 204: return "204 No Content";
  case 205: return "205 Reset Content";
  case 206: return "206 Partial Content";
  case 300: return "300 Multiple Choices";
  case 301: return "301 Moved Permanently";
  case 302: return "302 Found";
  case 303: return "303 See Other";
  case 304: return "304 Not Modified";
  case 305: return "305 Use Proxy";
  case 306: return "306 (Unused)";
  case 307: return "307 Temporary Redirect";
  case 400: return "400 Bad Request";
  case 401: return "401 Unauthorized";
  case 402: return "402 Payment Required";
  case 403: return "403 Forbidden";
  case 404: return "404 Not Found";
  case 405: return "405 Method Not Allowed";
  case 406: return "406 Not Acceptable";
  case 407: return "407 Proxy Authentication Required";
  case 408: return "408 Request Timeout";
  case 409: return "409 Conflict";
  case 410: return "410 Gone";
  case 411: return "411 Length Required";
  case 412: return "412 Precondition Failed";
  case 413: return "413 Request Entity Too Large";
  case 414: return "414 Request-URI Too Long";
  case 415: return "415 Unsupported Media Type";
  case 416: return "416 Requested Range Not Satisfiable";
  case 417: return "417 Expectation Failed";
  case 500: return "500 Internal Server Error";
  case 501: return "501 Not Implemented";
  case 502: return "502 Bad Gateway";
  case 503: return "503 Service Unavailable";
  case 504: return "504 Gateway Timeout";
  case 505: return "505 HTTP Version Not Supported";
  default: return "";
  }
}

void ResponseHandleParserEvent(HttpTestListener* req, int type, char* buf, int len) {
  switch(type) {
  case PARSER_EVENT_URL: {
    req->request_url_.assign(buf, len);
    http_parser_url url;
    http_parser_parse_url_(buf, len, 0, &url);
    if(url.field_set & 1 << (UF_QUERY)) {
      std::string query;
      query.assign(&buf[url.field_data[UF_QUERY].off], url.field_data[UF_QUERY].len);
      std::vector<std::string> vec_query_pair;
      strsplit(query, vec_query_pair, "&");
      for(int i = 0; i < vec_query_pair.size(); i++) {
        std::string str_pair = vec_query_pair[i];
        int pos = str_pair.find("=");
        req->map_request_query_[str_pair.substr(0, pos)] = str_pair.substr(pos + 1, str_pair.size() - pos - 1);
      }
    }
    
    break;
  }
  case PARSER_EVENT_FIELD: {
    if(req->is_last_value_) {
      req->map_request_header_[req->last_request_field_] = req->last_request_value_;
      req->last_request_field_ = "";
      req->last_request_value_ = "";
    }
     req->last_request_field_.append(buf, len);
     req->is_last_value_ = false;
  }
    break;

  case PARSER_EVENT_VALUE: {
    req->is_last_value_ = true;
    req->last_request_value_.append(buf, len);
    break;
  }

  case PARSER_EVENT_HEADER_COMPLETE: {
    if(req->last_request_field_.size() > 0) {
      req->map_request_header_[req->last_request_field_] = req->last_request_value_;
      req->last_request_field_ = "";
      req->last_request_value_ = "";
    }

    req->request_method_ = http_method_str_((http_method)req->parser_->method);
    break;
  }
  case PARSER_EVENT_BODY: {
    req->request_body_.append(buf, len);
    break;
  }

  case PARSER_EVENT_MSG_COMPLETE: {
    req->is_request_complete_ = true;
    break;
  }
}

}

int relay_message_begincb(http_parser *parser) {
    HttpTestListener* req = (HttpTestListener*)parser->data;
    ResponseHandleParserEvent(req, PARSER_EVENT_MSG_BEGIN, NULL, 0);
   return 0;
}

static int relay_status_completecb(http_parser *parser) {
    HttpTestListener* req = (HttpTestListener*)parser->data;
    ResponseHandleParserEvent(req, PARSER_EVENT_STATUS, NULL, 0);
   return 0;
}

static int relay_url_complete(http_parser* parser, const char *data, size_t len)
{
  HttpTestListener* req = (HttpTestListener*)parser->data;

  ResponseHandleParserEvent(req, PARSER_EVENT_URL, (char*)data, len);
  return 0;
}

static int relay_header_fieldcb(http_parser *parser, const char *data, size_t len) 
{
  HttpTestListener* req = (HttpTestListener*)parser->data;
  ResponseHandleParserEvent(req, PARSER_EVENT_FIELD, (char*)data, len);
  return 0;
}

static int relay_header_valuecb(http_parser *parser, const char *data, size_t len)
{ 
  HttpTestListener* req = (HttpTestListener*)parser->data;
  ResponseHandleParserEvent(req, PARSER_EVENT_VALUE, (char*)data, len);
  return 0;
}

static int relay_headers_completecb(http_parser *parser)
{
  HttpTestListener* req = (HttpTestListener*)parser->data;
  ResponseHandleParserEvent(req, PARSER_EVENT_HEADER_COMPLETE, NULL, 0);
  return 0;
}

static int relay_bodycb(http_parser *parser, const char *data, size_t len) {
  HttpTestListener* req = (HttpTestListener*)parser->data;
  ResponseHandleParserEvent(req, PARSER_EVENT_BODY, (char*)data, len);
  return 0;
}

static int relay_message_completecb(http_parser *parser)
{
  HttpTestListener* req = (HttpTestListener*)parser->data;
  ResponseHandleParserEvent(req, PARSER_EVENT_MSG_COMPLETE, NULL, 0);
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

 void * ResponseHandleRun(void* args) {
  printf("ResponseHandleRun\n");
  HttpTestListener* client = (HttpTestListener*)args;
  char buf[4096] = {};
  HttpTestListener* handler = (HttpTestListener*)args;
  int fd_client = 0;
  socklen_t len_client = sizeof(sockaddr_in);  
  sockaddr_in addr_client = {};
  fd_client = accept(handler->fd_, (sockaddr*)&addr_client, &len_client);
  printf("accept\n");
  http_parser_init_(handler->parser_, HTTP_REQUEST);
  handler->parser_->data = client;
  for(;;) {
    int len = recv(fd_client, buf, sizeof(buf), 0);
    if(len <= 0) {
      printf("recv:%d\n", len);
      break;
    }
    printf("recv:%d\n", len);
    http_parser_execute_(client->parser_, &htp_hooks, buf, len);

    if(handler->parser_->http_errno != 0 || handler->is_request_complete_) {
      printf("handler->http_errno\n");
      break;
    }
  }
  printf("handler->is_request_complete_\n");
  if(handler->is_request_complete_) {

    char write_buf[4096];
    snprintf(write_buf, sizeof(write_buf), "HTTP/1.1 %s\r\n", get_status_string(handler->response_status_code_, 0));
    write(fd_client, write_buf, strlen(write_buf));
    for(std::map<std::string, std::string>::iterator it = handler->map_response_header_.begin();
        it !=  handler->map_response_header_.end(); it++) {
      snprintf(write_buf, sizeof(write_buf), "%s: %s\r\n", it->first.c_str(), it->second.c_str());
      write(fd_client, write_buf, strlen(write_buf));
    }
    write(fd_client, "\r\n", 2);

    if(client->response_body_.size() > 0) {
      printf("writting response body\n");
      write(fd_client, client->response_body_.c_str(), client->response_body_.size());
    }

  }
out:
  close(handler->fd_);
  close(fd_client);
  return NULL;
}
HttpTestListener::HttpTestListener(int port) {
  response_status_code_ = 200;
  is_request_complete_ = false;
  is_last_value_ = false;
  this->local_port_ = port;
  this->parser_ = (http_parser*)calloc(1, sizeof(http_parser));
}

HttpTestListener::~HttpTestListener() {
  free(this->parser_);
}

std::string HttpTestListener::GetRequestUrl() {
  return this->request_url_;
}
std::string HttpTestListener::GetRequestMethod() {
  return this->request_method_;
}

std::string HttpTestListener::GetRequestBody() {
  return this->request_body_;
}

std::string HttpTestListener::GetRequestPath() {

}
std::map<std::string,std::string>& HttpTestListener::GetAllRequestQuery() {
  return this->map_request_query_;
}
std::map<std::string,std::string>& HttpTestListener::GetAllRequestHeader() {
  return this->map_request_header_;
}

std::string HttpTestListener::GetRequestQuery(std::string query_name) {
  std::map<std::string, std::string>::iterator it = this->map_request_query_.find(query_name);
  if(it == this->map_request_query_.end()) {
    return "";
  } else {
    return it->second;
  }
}
std::string HttpTestListener::GetRequestHeader(std::string field) {
  std::map<std::string, std::string>::iterator it = this->map_request_header_.find(field);
  if(it == this->map_request_header_.end()) {
    return "";
  } else {
    return it->second;
  }
}
void HttpTestListener::SetResponseStatus(int status) {

}
void HttpTestListener::AddResponseHeader(std::string field, std::string value) {
  this->map_response_header_[field] = value;
}
void HttpTestListener::SetResponseBody(std::string body) {
  this->response_body_ = body;
}
int HttpTestListener::Start() {
  sockaddr_in addr = {};
  fd_ = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  addr.sin_addr.s_addr = inet_addr("127.0.0.1");
  addr.sin_port = htons(local_port_);
  addr.sin_family = AF_INET;
  int opt=1;
  setsockopt(fd_,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt));
  if(bind(fd_, (struct sockaddr *)&addr, sizeof(sockaddr_in)) != 0) {
    return -1;
  }
  if(listen(fd_, 5) != 0) {
    return -1;
  }

  pthread_create(&thread_, NULL, ResponseHandleRun, this);

  return 0;
}
void HttpTestListener::WaitComplete() {
  pthread_join(thread_, NULL);
}

 