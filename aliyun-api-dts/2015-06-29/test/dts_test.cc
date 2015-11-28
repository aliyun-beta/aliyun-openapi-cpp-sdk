#include "ali_dts.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_drc_guid_route_api_response = "{"
"  \"success\": 0,"
"  \"data\": \"data\""
"}";
static int test_drc_guid_route_api() {
  DtsdrcGuidRouteApiRequestType req;
  DtsdrcGuidRouteApiResponseType resp;
  Dts* dts = Dts::CreateDtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  dts->SetProxyHost("127.0.0.1:12234");
  dts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_drc_guid_route_api_response);
  listener->Start();
  req.guid = "guid";
  int ret = dts->drcGuidRouteApi(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete dts;
}
int main() {
  test_drc_guid_route_api();
}
