#include "ali_otsfinance.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_delete_instance_response = "{}";
static int test_delete_instance() {
  OtsFinanceDeleteInstanceRequestType req;
  OtsFinanceDeleteInstanceResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  int ret = otsfinance->DeleteInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_delete_user_response = "{}";
static int test_delete_user() {
  OtsFinanceDeleteUserResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_user_response);
  listener->Start();
  int ret = otsfinance->DeleteUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_get_instance_response = "{"
"  \"InstanceInfo\": {"
"    \"Quota\": {"
"      \"EntityQuota\": 0"
"    },"
"    \"InstanceName\": \"InstanceName\","
"    \"UserId\": \"UserId\","
"    \"ClusterName\": \"ClusterName\","
"    \"Status\": 0,"
"    \"WriteCapacity\": 0,"
"    \"ReadCapacity\": 0,"
"    \"Description\": \"Description\","
"    \"CreateTime\": \"CreateTime\""
"  }"
"}";
static int test_get_instance() {
  OtsFinanceGetInstanceRequestType req;
  OtsFinanceGetInstanceResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  int ret = otsfinance->GetInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_get_user_response = "{"
"  \"UserInfo\": {"
"    \"Quota\": {"
"      \"InstanceQuota\": 0"
"    },"
"    \"UserId\": \"UserId\","
"    \"Description\": \"Description\","
"    \"CreateTime\": \"CreateTime\""
"  }"
"}";
static int test_get_user() {
  OtsFinanceGetUserResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_user_response);
  listener->Start();
  int ret = otsfinance->GetUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_insert_instance_response = "{}";
static int test_insert_instance() {
  OtsFinanceInsertInstanceRequestType req;
  OtsFinanceInsertInstanceResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_insert_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  req.cluster_name = "ClusterName";
  req.write_capacity = "WriteCapacity";
  req.read_capacity = "ReadCapacity";
  req.entity_quota = "EntityQuota";
  req.description = "Description";
  int ret = otsfinance->InsertInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_insert_user_response = "{}";
static int test_insert_user() {
  OtsFinanceInsertUserRequestType req;
  OtsFinanceInsertUserResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_insert_user_response);
  listener->Start();
  req.instance_quota = "InstanceQuota";
  req.description = "Description";
  int ret = otsfinance->InsertUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_list_instance_response = "{"
"  \"InstanceInfos\": {"
"    \"InstanceInfo\": ["
"      {"
"        \"InstanceName\": \"InstanceName\","
"        \"InstanceId\": \"InstanceId\","
"        \"Version\": \"Version\","
"        \"Timestamp\": \"Timestamp\""
"      }"
"    ]"
"  }"
"}";
static int test_list_instance() {
  OtsFinanceListInstanceResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_instance_response);
  listener->Start();
  int ret = otsfinance->ListInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_update_instance_response = "{}";
static int test_update_instance() {
  OtsFinanceUpdateInstanceRequestType req;
  OtsFinanceUpdateInstanceResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  req.write_capacity = "WriteCapacity";
  req.read_capacity = "ReadCapacity";
  req.entity_quota = "EntityQuota";
  req.description = "Description";
  int ret = otsfinance->UpdateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
static const char* test_update_user_response = "{}";
static int test_update_user() {
  OtsFinanceUpdateUserRequestType req;
  OtsFinanceUpdateUserResponseType resp;
  OtsFinance* otsfinance = OtsFinance::CreateOtsFinanceClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  otsfinance->SetProxyHost("127.0.0.1:12234");
  otsfinance->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_user_response);
  listener->Start();
  req.instance_quota = "InstanceQuota";
  req.description = "Description";
  int ret = otsfinance->UpdateUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsfinance;
}
int main() {
  test_delete_instance();
  test_delete_user();
  test_get_instance();
  test_get_user();
  test_insert_instance();
  test_insert_user();
  test_list_instance();
  test_update_instance();
  test_update_user();
}
