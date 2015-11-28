#ifndef ALIYUNAPICORE_HTTP_ALIHTTPREQUEST_HPP
#define ALIYUNAPICORE_HTTP_ALIHTTPREQUEST_HPP
#include <string>
#include <map>
#include <vector>

class AliHttpRequest;
class AliHttpResponse;
class AliConnection;
struct http_parser;
class AliHttpRequest {
public:
  AliHttpRequest(std::string url);
  ~AliHttpRequest();
  AliHttpRequest& setRequestMethod(std::string method);
  AliHttpRequest& AddRequestHeader(std::string field, std::string value);
  AliHttpRequest& AddRequestQuery(std::string field, std::string value);
  virtual int CommitRequest();
  int CommitRequestWithBody(const std::string& body);
  int WaitResponseHeaderComplete();
  int GetResponseStatusCode();
  int ReadResponseBody(std::string& body);
  int AppendBody(std::string& body);
  void SetHttpProxy(std::string proxy_host);
  std::string GetPath(bool with_query = true);

private:  
  int ParseUrl();
protected:
  
protected:
  AliConnection* connection_;
  std::map<std::string, std::string> map_request_headers_;
  std::map<std::string, std::string> map_reponse_headers_;
  std::string method_;
  std::string url_;
  std::string query_;
  std::string flagment_;
  std::string host_;
  std::string port_;
  std::string path_;
  std::string sechema_;
  std::string resposne_body_;
  std::string proxy_host_;
  int response_status_code_;

  bool is_response_header_complete;
  bool is_response_complete;
  bool is_tls;

  std::string last_response_field_;
  std::string last_response_value_;
  bool is_last_value_;
  http_parser* parser_;

  friend void RequestHandleParserEvent(AliHttpRequest* req, int type, char* buf, int len);
};
#endif

