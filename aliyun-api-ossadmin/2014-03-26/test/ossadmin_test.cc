#include "ali_ossadmin.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_restart_oss_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": 0,"
"  \"aliUid\": 0,"
"  \"instanceId\": \"instanceId\","
"  \"instacneStatus\": \"instacneStatus\","
"  \"instanceName\": \"instanceName\","
"  \"startTime\": \"startTime\","
"  \"endTime\": \"endTime\""
"}";
static int test_restart_oss() {
  OssAdminrestartOssRequestType req;
  OssAdminrestartOssResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_restart_oss_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.region = "region";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->restartOss(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_stop_oss_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": 0,"
"  \"aliUid\": 0,"
"  \"instanceId\": \"instanceId\","
"  \"instacneStatus\": \"instacneStatus\","
"  \"instanceName\": \"instanceName\","
"  \"startTime\": \"startTime\","
"  \"endTime\": \"endTime\""
"}";
static int test_stop_oss() {
  OssAdminstopOssRequestType req;
  OssAdminstopOssResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_oss_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.region = "region";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->stopOss(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
int main() {
  test_restart_oss();
  test_stop_oss();
}
