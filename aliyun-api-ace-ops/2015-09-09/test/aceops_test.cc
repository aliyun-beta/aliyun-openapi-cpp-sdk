#include "ali_aceops.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_query_response = "{"
"  \"url\": \"url\","
"  \"softversion\": \"softversion\""
"}";
static int test_query() {
  AceopsqueryRequestType req;
  AceopsqueryResponseType resp;
  Aceops* aceops = Aceops::CreateAceopsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aceops->SetProxyHost("127.0.0.1:12234");
  aceops->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_response);
  listener->Start();
  req.group = "group";
  req.name = "name";
  req.ip = "ip";
  req.softversion = "softversion";
  int ret = aceops->query(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aceops;
}
static const char* test_report_response = "{}";
static int test_report() {
  AceopsreportRequestType req;
  AceopsreportResponseType resp;
  Aceops* aceops = Aceops::CreateAceopsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aceops->SetProxyHost("127.0.0.1:12234");
  aceops->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_report_response);
  listener->Start();
  req.group = "group";
  req.name = "name";
  req.ip = "ip";
  req.type = "type";
  req.softversion = "softversion";
  req.config = "config";
  int ret = aceops->report(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aceops;
}
int main() {
  test_query();
  test_report();
}
