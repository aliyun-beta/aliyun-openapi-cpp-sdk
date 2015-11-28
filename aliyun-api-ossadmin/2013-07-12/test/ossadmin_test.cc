#include "ali_ossadmin.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_create_oss_instance_response = "{"
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
static int test_create_oss_instance() {
  OssAdmincreateOssInstanceRequestType req;
  OssAdmincreateOssInstanceResponseType resp;
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
  req.ali_uid = "aliUid";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->createOssInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_get_bucket_policy_response = "{"
"  \"WhiteReferList\": {"
"    \"ReferList\": {"
"      \"string\": ["
"        \"string\""
"      ]"
"    }"
"  },"
"  \"DisallowEmptyRefer\": 0,"
"  \"EnableDualCluster\": 0,"
"  \"ErrorFile\": \"ErrorFile\","
"  \"IndexFile\": \"IndexFile\","
"  \"Location\": \"Location\","
"  \"LogBucket\": \"LogBucket\","
"  \"LogPrefix\": \"LogPrefix\","
"  \"IamPolicy\": \"IamPolicy\""
"}";
static int test_get_bucket_policy() {
  OssAdminGetBucketPolicyRequestType req;
  OssAdminGetBucketPolicyResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_bucket_policy_response);
  listener->Start();
  req.uid = "uid";
  req.bid = "bid";
  req.bucket_name = "BucketName";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->GetBucketPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_put_bucket_limit_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": 0"
"}";
static int test_put_bucket_limit() {
  OssAdminPutBucketLimitRequestType req;
  OssAdminPutBucketLimitResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_put_bucket_limit_response);
  listener->Start();
  req.uid = "uid";
  req.bid = "bid";
  req.bucket_limit = "BucketLimit";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->PutBucketLimit(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_put_bucket_policy_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": 0"
"}";
static int test_put_bucket_policy() {
  OssAdminPutBucketPolicyRequestType req;
  OssAdminPutBucketPolicyResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_put_bucket_policy_response);
  listener->Start();
  req.uid = "uid";
  req.bid = "bid";
  req.bucket_name = "BucketName";
  req.iam_policy = "IamPolicy";
  req.disallow_empty_refer = "DisallowEmptyRefer";
  req.enable_dual_cluster = "EnableDualCluster";
  req.error_file = "ErrorFile";
  req.index_file = "IndexFile";
  req.location = "Location";
  req.log_bucket = "LogBucket";
  req.log_prefix = "LogPrefix";
  req.white_refer_list = "WhiteReferList";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->PutBucketPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
static const char* test_put_bucket_status_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": 0"
"}";
static int test_put_bucket_status() {
  OssAdminPutBucketStatusRequestType req;
  OssAdminPutBucketStatusResponseType resp;
  OssAdmin* ossadmin = OssAdmin::CreateOssAdminClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ossadmin->SetProxyHost("127.0.0.1:12234");
  ossadmin->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_put_bucket_status_response);
  listener->Start();
  req.uid = "uid";
  req.bid = "bid";
  req.bucket = "Bucket";
  req.status = "Status";
  req.owner_account = "OwnerAccount";
  int ret = ossadmin->PutBucketStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ossadmin;
}
int main() {
  test_create_oss_instance();
  test_get_bucket_policy();
  test_put_bucket_limit();
  test_put_bucket_policy();
  test_put_bucket_status();
}
