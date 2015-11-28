#include "ali_ossadmin.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_create_oss_instance_response = "{"
"  \"AliUid\": 0,"
"  \"InstanceId\": \"InstanceId\","
"  \"InstacneStatus\": \"InstacneStatus\","
"  \"InstanceName\": \"InstanceName\","
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\""
"}";
static int test_create_oss_instance() {
  OssAdminCreateOssInstanceRequestType req;
  OssAdminCreateOssInstanceResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_oss_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.region = "region";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->CreateOssInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_release_oss_instance_response = "{}";
static int test_release_oss_instance() {
  OssAdminReleaseOssInstanceRequestType req;
  OssAdminReleaseOssInstanceResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_release_oss_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.region = "region";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->ReleaseOssInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_restart_oss_instance_response = "{}";
static int test_restart_oss_instance() {
  OssAdminRestartOssInstanceRequestType req;
  OssAdminRestartOssInstanceResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_restart_oss_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.region = "region";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->RestartOssInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_stop_oss_instance_response = "{}";
static int test_stop_oss_instance() {
  OssAdminStopOssInstanceRequestType req;
  OssAdminStopOssInstanceResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_oss_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.region = "region";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->StopOssInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
int main() {
  test_create_oss_instance();
  test_release_oss_instance();
  test_restart_oss_instance();
  test_stop_oss_instance();
}
