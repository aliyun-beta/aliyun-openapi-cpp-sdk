#include "ali_otsshihua.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_delete_instance_response = "{}";
static int test_delete_instance() {
  OtsShihuaDeleteInstanceRequestType req;
  OtsShihuaDeleteInstanceResponseType resp;
  OtsShihua* otsshihua = OtsShihua::CreateOtsShihuaClient("cn-hangzhou", "my_appid", "my_secret");
  if(!otsshihua) return 0;
  otsshihua->SetProxyHost("127.0.0.1:12234");
  otsshihua->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  int ret = otsshihua->DeleteInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsshihua;
}
static const char* test_get_instance_response = "{"
"  \"InstanceInfo\": {"
"    \"InstanceName\": \"InstanceName\","
"    \"Status\": 0,"
"    \"Description\": \"Description\","
"    \"Timestamp\": \"Timestamp\""
"  }"
"}";
static int test_get_instance() {
  OtsShihuaGetInstanceRequestType req;
  OtsShihuaGetInstanceResponseType resp;
  OtsShihua* otsshihua = OtsShihua::CreateOtsShihuaClient("cn-hangzhou", "my_appid", "my_secret");
  if(!otsshihua) return 0;
  otsshihua->SetProxyHost("127.0.0.1:12234");
  otsshihua->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  int ret = otsshihua->GetInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsshihua;
}
static const char* test_insert_instance_response = "{}";
static int test_insert_instance() {
  OtsShihuaInsertInstanceRequestType req;
  OtsShihuaInsertInstanceResponseType resp;
  OtsShihua* otsshihua = OtsShihua::CreateOtsShihuaClient("cn-hangzhou", "my_appid", "my_secret");
  if(!otsshihua) return 0;
  otsshihua->SetProxyHost("127.0.0.1:12234");
  otsshihua->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_insert_instance_response);
  listener->Start();
  req.instance_name = "InstanceName";
  req.cluster_type = "ClusterType";
  req.description = "Description";
  int ret = otsshihua->InsertInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsshihua;
}
static const char* test_list_instance_response = "{"
"  \"InstanceInfos\": {"
"    \"InstanceInfo\": ["
"      {"
"        \"InstanceName\": \"InstanceName\","
"        \"Timestamp\": \"Timestamp\""
"      }"
"    ]"
"  }"
"}";
static int test_list_instance() {
  OtsShihuaListInstanceResponseType resp;
  OtsShihua* otsshihua = OtsShihua::CreateOtsShihuaClient("cn-hangzhou", "my_appid", "my_secret");
  if(!otsshihua) return 0;
  otsshihua->SetProxyHost("127.0.0.1:12234");
  otsshihua->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_instance_response);
  listener->Start();
  int ret = otsshihua->ListInstance(&resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete otsshihua;
}
int main() {
  test_delete_instance();
  test_get_instance();
  test_insert_instance();
  test_list_instance();
}
