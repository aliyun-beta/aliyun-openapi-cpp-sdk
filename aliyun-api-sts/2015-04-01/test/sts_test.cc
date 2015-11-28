#include "ali_sts.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_assume_role_response = "{"
"  \"Credentials\": {"
"    \"SecurityToken\": \"SecurityToken\","
"    \"AccessKeySecret\": \"AccessKeySecret\","
"    \"AccessKeyId\": \"AccessKeyId\","
"    \"Expiration\": \"Expiration\""
"  },"
"  \"AssumedRoleUser\": {"
"    \"Arn\": \"Arn\","
"    \"AssumedRoleId\": \"AssumedRoleId\""
"  }"
"}";
static int test_assume_role() {
  StsAssumeRoleRequestType req;
  StsAssumeRoleResponseType resp;
  Sts* sts = Sts::CreateStsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!sts) return 0;
  sts->SetProxyHost("127.0.0.1:12234");
  sts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_assume_role_response);
  listener->Start();
  req.duration_seconds = "DurationSeconds";
  req.policy = "Policy";
  req.role_arn = "RoleArn";
  req.role_session_name = "RoleSessionName";
  int ret = sts->AssumeRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete sts;
}
static const char* test_assume_role_with_service_identity_response = "{"
"  \"Credentials\": {"
"    \"SecurityToken\": \"SecurityToken\","
"    \"AccessKeySecret\": \"AccessKeySecret\","
"    \"AccessKeyId\": \"AccessKeyId\","
"    \"Expiration\": \"Expiration\""
"  },"
"  \"AssumedRoleUser\": {"
"    \"Arn\": \"Arn\","
"    \"AssumedRoleId\": \"AssumedRoleId\""
"  }"
"}";
static int test_assume_role_with_service_identity() {
  StsAssumeRoleWithServiceIdentityRequestType req;
  StsAssumeRoleWithServiceIdentityResponseType resp;
  Sts* sts = Sts::CreateStsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!sts) return 0;
  sts->SetProxyHost("127.0.0.1:12234");
  sts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_assume_role_with_service_identity_response);
  listener->Start();
  req.duration_seconds = "DurationSeconds";
  req.policy = "Policy";
  req.role_arn = "RoleArn";
  req.role_session_name = "RoleSessionName";
  req.assume_role_for = "AssumeRoleFor";
  int ret = sts->AssumeRoleWithServiceIdentity(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete sts;
}
int main() {
  test_assume_role();
  test_assume_role_with_service_identity();
}
