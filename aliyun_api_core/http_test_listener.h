#include <map>
#include <string>
#include <pthread.h>
struct http_parser;
class HttpTestListener {
public:
  HttpTestListener(int port);
  ~HttpTestListener();
  std::string GetRequestUrl();
  std::string GetRequestMethod();
  std::string GetRequestPath();
  std::map<std::string,std::string>& GetAllRequestQuery();
  std::map<std::string,std::string>& GetAllRequestHeader();
  std::string GetRequestQuery(std::string query_name);
  std::string GetRequestHeader(std::string field);
  std::string GetRequestBody();
  void SetResponseStatus(int status);
  void AddResponseHeader(std::string field, std::string value);
  void SetResponseBody(std::string body);
  int Start();
  void WaitComplete();
private:
  bool is_request_complete_;
  pthread_t thread_;
  int fd_;
  int local_port_;
  int response_status_code_;
  std::string request_url_;
  std::string request_body_;
  std::string response_body_;
  std::string request_method_;
  std::map<std::string,std::string> map_request_query_;
  std::map<std::string,std::string> map_request_header_;
  std::map<std::string,std::string> map_response_header_;
  std::string last_request_field_;
  std::string last_request_value_;
  bool is_last_value_;
  http_parser* parser_;
  friend void ResponseHandleParserEvent(HttpTestListener* listener, int type, char* buf, int len);
  friend void * ResponseHandleRun(void*);
};