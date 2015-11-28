#include "ali_ram.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_user_response = "{}";
static int test_add_user() {
  RamAddUserRequestType req;
  RamAddUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_user_response);
  listener->Start();
  req.user_name = "UserName";
  req.comments = "Comments";
  int ret = ram->AddUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_user_policy_response = "{}";
static int test_delete_user_policy() {
  RamDeleteUserPolicyRequestType req;
  RamDeleteUserPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_user_policy_response);
  listener->Start();
  req.user_name = "UserName";
  req.policy_name = "PolicyName";
  int ret = ram->DeleteUserPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_user_response = "{"
"  \"UserName\": \"UserName\","
"  \"Comments\": \"Comments\""
"}";
static int test_get_user() {
  RamGetUserRequestType req;
  RamGetUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_user_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->GetUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_user_policy_response = "{"
"  \"UserName\": \"UserName\","
"  \"PolicyName\": \"PolicyName\","
"  \"PolicyDocument\": \"PolicyDocument\""
"}";
static int test_get_user_policy() {
  RamGetUserPolicyRequestType req;
  RamGetUserPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_user_policy_response);
  listener->Start();
  req.user_name = "UserName";
  req.policy_name = "PolicyName";
  int ret = ram->GetUserPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_user_policies_response = "{"
"  \"Policies\": {"
"    \"Policy\": ["
"      \"Policy\""
"    ]"
"  }"
"}";
static int test_list_user_policies() {
  RamListUserPoliciesRequestType req;
  RamListUserPoliciesResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_user_policies_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->ListUserPolicies(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_users_response = "{"
"  \"Users\": {"
"    \"User\": ["
"      {"
"        \"UserName\": \"UserName\","
"        \"Comments\": \"Comments\""
"      }"
"    ]"
"  }"
"}";
static int test_list_users() {
  RamListUsersResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_users_response);
  listener->Start();
  int ret = ram->ListUsers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_put_user_policy_response = "{}";
static int test_put_user_policy() {
  RamPutUserPolicyRequestType req;
  RamPutUserPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_put_user_policy_response);
  listener->Start();
  req.user_name = "UserName";
  req.policy_name = "PolicyName";
  req.policy_document = "PolicyDocument";
  int ret = ram->PutUserPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_remove_user_response = "{}";
static int test_remove_user() {
  RamRemoveUserRequestType req;
  RamRemoveUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ram) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_user_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->RemoveUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
int main() {
  test_add_user();
  test_delete_user_policy();
  test_get_user();
  test_get_user_policy();
  test_list_user_policies();
  test_list_users();
  test_put_user_policy();
  test_remove_user();
}
