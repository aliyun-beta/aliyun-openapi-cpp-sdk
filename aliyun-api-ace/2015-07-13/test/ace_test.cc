#include "ali_ace.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_describe_app_logs_response = "{"
"  \"Items\": {"
"    \"AppLog\": ["
"      {"
"        \"LogTime\": \"LogTime\","
"        \"LogContent\": \"LogContent\""
"      }"
"    ]"
"  },"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_app_logs() {
  AceDescribeAppLogsRequestType req;
  AceDescribeAppLogsResponseType resp;
  Ace* ace = Ace::CreateAceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ace->SetProxyHost("127.0.0.1:12234");
  ace->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_app_logs_response);
  listener->Start();
  req.app_id = "AppId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  int ret = ace->DescribeAppLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ace;
}
static const char* test_get_monitor_data_response = "{"
"  \"Data\": {"
"    \"Item\": ["
"      {"
"        \"Timestamp\": 0,"
"        \"Value\": 0"
"      }"
"    ]"
"  },"
"  \"NextPageNum\": \"NextPageNum\""
"}";
static int test_get_monitor_data() {
  AceGetMonitorDataRequestType req;
  AceGetMonitorDataResponseType resp;
  Ace* ace = Ace::CreateAceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ace->SetProxyHost("127.0.0.1:12234");
  ace->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_monitor_data_response);
  listener->Start();
  req.app_id = "AppId";
  req.item = "Item";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.cur_page = "CurPage";
  req.page_size = "PageSize";
  int ret = ace->GetMonitorData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ace;
}
int main() {
  test_describe_app_logs();
  test_get_monitor_data();
}
