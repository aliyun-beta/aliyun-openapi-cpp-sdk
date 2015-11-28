#include "ali_ubsms.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_describe_business_status_response = "{"
"  \"UserBusinessStatusList\": {"
"    \"UserBusinessStatus\": ["
"      {"
"        \"Statuses\": {"
"          \"Status\": ["
"            {"
"              \"StatusKey\": \"StatusKey\","
"              \"StatusValue\": \"StatusValue\""
"            }"
"          ]"
"        },"
"        \"Uid\": \"Uid\","
"        \"ServiceCode\": \"ServiceCode\""
"      }"
"    ]"
"  },"
"  \"Success\": 0"
"}";
static int test_describe_business_status() {
  UbsmsDescribeBusinessStatusRequestType req;
  UbsmsDescribeBusinessStatusResponseType resp;
  Ubsms* ubsms = Ubsms::CreateUbsmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ubsms->SetProxyHost("127.0.0.1:12234");
  ubsms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_business_status_response);
  listener->Start();
  req.caller_bid = "callerBid";
  req.password = "Password";
  int ret = ubsms->DescribeBusinessStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ubsms;
}
static const char* test_notify_user_business_command_response = "{"
"  \"Success\": 0"
"}";
static int test_notify_user_business_command() {
  UbsmsNotifyUserBusinessCommandRequestType req;
  UbsmsNotifyUserBusinessCommandResponseType resp;
  Ubsms* ubsms = Ubsms::CreateUbsmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ubsms->SetProxyHost("127.0.0.1:12234");
  ubsms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_notify_user_business_command_response);
  listener->Start();
  req.uid = "Uid";
  req.service_code = "ServiceCode";
  req.cmd = "Cmd";
  req.region = "Region";
  req.instance_id = "InstanceId";
  req.client_token = "ClientToken";
  req.password = "Password";
  int ret = ubsms->NotifyUserBusinessCommand(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ubsms;
}
static const char* test_set_user_business_status_response = "{"
"  \"Success\": 0"
"}";
static int test_set_user_business_status() {
  UbsmsSetUserBusinessStatusRequestType req;
  UbsmsSetUserBusinessStatusResponseType resp;
  Ubsms* ubsms = Ubsms::CreateUbsmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ubsms->SetProxyHost("127.0.0.1:12234");
  ubsms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_user_business_status_response);
  listener->Start();
  req.uid = "Uid";
  req.service = "Service";
  req.status_key = "StatusKey";
  req.status_value = "StatusValue";
  int ret = ubsms->SetUserBusinessStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ubsms;
}
static const char* test_set_user_business_statuses_response = "{"
"  \"Success\": 0"
"}";
static int test_set_user_business_statuses() {
  UbsmsSetUserBusinessStatusesRequestType req;
  UbsmsSetUserBusinessStatusesResponseType resp;
  Ubsms* ubsms = Ubsms::CreateUbsmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ubsms->SetProxyHost("127.0.0.1:12234");
  ubsms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_user_business_statuses_response);
  listener->Start();
  req.uid = "Uid";
  req.service_code = "ServiceCode";
  req.status_key1 = "StatusKey1";
  req.status_value1 = "StatusValue1";
  req.status_key2 = "StatusKey2";
  req.status_value2 = "StatusValue2";
  req.status_key3 = "StatusKey3";
  req.status_value3 = "StatusValue3";
  req.status_key4 = "StatusKey4";
  req.status_value4 = "StatusValue4";
  req.status_key5 = "StatusKey5";
  req.status_value5 = "StatusValue5";
  req.status_key6 = "StatusKey6";
  req.status_value6 = "StatusValue6";
  req.status_key7 = "StatusKey7";
  req.status_value7 = "StatusValue7";
  req.status_key8 = "StatusKey8";
  req.status_value8 = "StatusValue8";
  req.status_key9 = "StatusKey9";
  req.status_value9 = "StatusValue9";
  req.status_key10 = "StatusKey10";
  req.status_value10 = "StatusValue10";
  req.password = "Password";
  int ret = ubsms->SetUserBusinessStatuses(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ubsms;
}
int main() {
  test_describe_business_status();
  test_notify_user_business_command();
  test_set_user_business_status();
  test_set_user_business_statuses();
}
