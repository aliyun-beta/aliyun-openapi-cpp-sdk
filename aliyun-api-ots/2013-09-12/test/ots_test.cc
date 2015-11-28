#include "ali_ots.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_delete_instance_response = "{}";
static int test_delete_instance() {
  OtsDeleteInstanceRequestType req;
  OtsDeleteInstanceResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  int ret = ots->DeleteInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
}
static const char* test_delete_user_response = "{}";
static int test_delete_user() {
  OtsDeleteUserResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_user_response);
  listener->Start();
  int ret = ots->DeleteUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
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
  OtsGetInstanceRequestType req;
  OtsGetInstanceResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  int ret = ots->GetInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
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
  OtsGetUserResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_user_response);
  listener->Start();
  int ret = ots->GetUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
}
static const char* test_insert_instance_response = "{}";
static int test_insert_instance() {
  OtsInsertInstanceRequestType req;
  OtsInsertInstanceResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_insert_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  req.cluster_name = "ClusterName";
  req.write_capacity = "WriteCapacity";
  req.read_capacity = "ReadCapacity";
  req.entity_quota = "EntityQuota";
  req.description = "Description";
  int ret = ots->InsertInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
}
static const char* test_insert_user_response = "{}";
static int test_insert_user() {
  OtsInsertUserRequestType req;
  OtsInsertUserResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_insert_user_response);
  listener->Start();
  req.instance_quota = "InstanceQuota";
  req.description = "Description";
  int ret = ots->InsertUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
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
  OtsListInstanceResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_instance_response);
  listener->Start();
  int ret = ots->ListInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
}
static const char* test_update_instance_response = "{}";
static int test_update_instance() {
  OtsUpdateInstanceRequestType req;
  OtsUpdateInstanceResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  req.write_capacity = "WriteCapacity";
  req.read_capacity = "ReadCapacity";
  req.entity_quota = "EntityQuota";
  req.description = "Description";
  int ret = ots->UpdateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
}
static const char* test_update_user_response = "{}";
static int test_update_user() {
  OtsUpdateUserRequestType req;
  OtsUpdateUserResponseType resp;
  Ots* ots = Ots::CreateOtsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ots) return 0;
  ots->SetProxyHost("127.0.0.1:12234");
  ots->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_user_response);
  listener->Start();
  req.instance_quota = "InstanceQuota";
  req.description = "Description";
  int ret = ots->UpdateUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ots;
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
