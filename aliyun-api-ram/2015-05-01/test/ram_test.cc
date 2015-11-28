#include "ali_ram.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_activate_service_response = "{}";
static int test_activate_service() {
  RamActivateServiceRequestType req;
  RamActivateServiceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_activate_service_response);
  listener->Start();
  req.account_id = "AccountId";
  int ret = ram->ActivateService(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_add_user_to_group_response = "{}";
static int test_add_user_to_group() {
  RamAddUserToGroupRequestType req;
  RamAddUserToGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_user_to_group_response);
  listener->Start();
  req.user_name = "UserName";
  req.group_name = "GroupName";
  int ret = ram->AddUserToGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_attach_policy_to_group_response = "{}";
static int test_attach_policy_to_group() {
  RamAttachPolicyToGroupRequestType req;
  RamAttachPolicyToGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_attach_policy_to_group_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.group_name = "GroupName";
  int ret = ram->AttachPolicyToGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_attach_policy_to_role_response = "{}";
static int test_attach_policy_to_role() {
  RamAttachPolicyToRoleRequestType req;
  RamAttachPolicyToRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_attach_policy_to_role_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.role_name = "RoleName";
  int ret = ram->AttachPolicyToRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_attach_policy_to_user_response = "{}";
static int test_attach_policy_to_user() {
  RamAttachPolicyToUserRequestType req;
  RamAttachPolicyToUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_attach_policy_to_user_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.user_name = "UserName";
  int ret = ram->AttachPolicyToUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_bind_mf_adevice_response = "{}";
static int test_bind_mf_adevice() {
  RamBindMFADeviceRequestType req;
  RamBindMFADeviceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_bind_mf_adevice_response);
  listener->Start();
  req.serial_number = "SerialNumber";
  req.user_name = "UserName";
  req.authentication_code1 = "AuthenticationCode1";
  req.authentication_code2 = "AuthenticationCode2";
  int ret = ram->BindMFADevice(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_clear_account_alias_response = "{}";
static int test_clear_account_alias() {
  RamClearAccountAliasResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_clear_account_alias_response);
  listener->Start();
  int ret = ram->ClearAccountAlias(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_access_key_response = "{"
"  \"AccessKey\": {"
"    \"AccessKeyId\": \"AccessKeyId\","
"    \"AccessKeySecret\": \"AccessKeySecret\","
"    \"Status\": \"Status\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_access_key() {
  RamCreateAccessKeyRequestType req;
  RamCreateAccessKeyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_access_key_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->CreateAccessKey(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_group_response = "{"
"  \"Group\": {"
"    \"GroupName\": \"GroupName\","
"    \"Comments\": \"Comments\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_group() {
  RamCreateGroupRequestType req;
  RamCreateGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_group_response);
  listener->Start();
  req.group_name = "GroupName";
  req.comments = "Comments";
  int ret = ram->CreateGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_login_profile_response = "{"
"  \"LoginProfile\": {"
"    \"UserName\": \"UserName\","
"    \"PasswordResetRequired\": 0,"
"    \"MFABindRequired\": 0,"
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_login_profile() {
  RamCreateLoginProfileRequestType req;
  RamCreateLoginProfileResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_login_profile_response);
  listener->Start();
  req.user_name = "UserName";
  req.password = "Password";
  req.password_reset_required = "PasswordResetRequired";
  req.mf_abind_required = "MFABindRequired";
  int ret = ram->CreateLoginProfile(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_policy_response = "{"
"  \"Policy\": {"
"    \"PolicyName\": \"PolicyName\","
"    \"PolicyType\": \"PolicyType\","
"    \"Description\": \"Description\","
"    \"DefaultVersion\": \"DefaultVersion\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_policy() {
  RamCreatePolicyRequestType req;
  RamCreatePolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_policy_response);
  listener->Start();
  req.policy_name = "PolicyName";
  req.description = "Description";
  req.policy_document = "PolicyDocument";
  int ret = ram->CreatePolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_policy_version_response = "{"
"  \"PolicyVersion\": {"
"    \"VersionId\": \"VersionId\","
"    \"IsDefaultVersion\": 0,"
"    \"PolicyDocument\": \"PolicyDocument\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_policy_version() {
  RamCreatePolicyVersionRequestType req;
  RamCreatePolicyVersionResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_policy_version_response);
  listener->Start();
  req.policy_name = "PolicyName";
  req.policy_document = "PolicyDocument";
  req.set_as_default = "SetAsDefault";
  int ret = ram->CreatePolicyVersion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_role_response = "{"
"  \"Role\": {"
"    \"RoleId\": \"RoleId\","
"    \"RoleName\": \"RoleName\","
"    \"Arn\": \"Arn\","
"    \"Description\": \"Description\","
"    \"AssumeRolePolicyDocument\": \"AssumeRolePolicyDocument\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_role() {
  RamCreateRoleRequestType req;
  RamCreateRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_role_response);
  listener->Start();
  req.role_name = "RoleName";
  req.description = "Description";
  req.assume_role_policy_document = "AssumeRolePolicyDocument";
  int ret = ram->CreateRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_user_response = "{"
"  \"User\": {"
"    \"UserId\": \"UserId\","
"    \"UserName\": \"UserName\","
"    \"DisplayName\": \"DisplayName\","
"    \"MobilePhone\": \"MobilePhone\","
"    \"Email\": \"Email\","
"    \"Comments\": \"Comments\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_create_user() {
  RamCreateUserRequestType req;
  RamCreateUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_user_response);
  listener->Start();
  req.user_name = "UserName";
  req.display_name = "DisplayName";
  req.mobile_phone = "MobilePhone";
  req.email = "Email";
  req.comments = "Comments";
  int ret = ram->CreateUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_create_virtual_mf_adevice_response = "{"
"  \"VirtualMFADevice\": {"
"    \"SerialNumber\": \"SerialNumber\","
"    \"Base32StringSeed\": \"Base32StringSeed\","
"    \"QRCodePNG\": \"QRCodePNG\""
"  }"
"}";
static int test_create_virtual_mf_adevice() {
  RamCreateVirtualMFADeviceRequestType req;
  RamCreateVirtualMFADeviceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_virtual_mf_adevice_response);
  listener->Start();
  req.virtual_mf_adevice_name = "VirtualMFADeviceName";
  int ret = ram->CreateVirtualMFADevice(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_deactivate_service_response = "{}";
static int test_deactivate_service() {
  RamDeactivateServiceRequestType req;
  RamDeactivateServiceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_deactivate_service_response);
  listener->Start();
  req.account_id = "AccountId";
  int ret = ram->DeactivateService(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_access_key_response = "{}";
static int test_delete_access_key() {
  RamDeleteAccessKeyRequestType req;
  RamDeleteAccessKeyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_access_key_response);
  listener->Start();
  req.user_name = "UserName";
  req.user_access_key_id = "UserAccessKeyId";
  int ret = ram->DeleteAccessKey(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_group_response = "{}";
static int test_delete_group() {
  RamDeleteGroupRequestType req;
  RamDeleteGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_group_response);
  listener->Start();
  req.group_name = "GroupName";
  int ret = ram->DeleteGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_login_profile_response = "{}";
static int test_delete_login_profile() {
  RamDeleteLoginProfileRequestType req;
  RamDeleteLoginProfileResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_login_profile_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->DeleteLoginProfile(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_policy_response = "{}";
static int test_delete_policy() {
  RamDeletePolicyRequestType req;
  RamDeletePolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_policy_response);
  listener->Start();
  req.policy_name = "PolicyName";
  int ret = ram->DeletePolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_policy_version_response = "{}";
static int test_delete_policy_version() {
  RamDeletePolicyVersionRequestType req;
  RamDeletePolicyVersionResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_policy_version_response);
  listener->Start();
  req.policy_name = "PolicyName";
  req.version_id = "VersionId";
  int ret = ram->DeletePolicyVersion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_role_response = "{}";
static int test_delete_role() {
  RamDeleteRoleRequestType req;
  RamDeleteRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_role_response);
  listener->Start();
  req.role_name = "RoleName";
  int ret = ram->DeleteRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_user_response = "{}";
static int test_delete_user() {
  RamDeleteUserRequestType req;
  RamDeleteUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_user_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->DeleteUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_delete_virtual_mf_adevice_response = "{}";
static int test_delete_virtual_mf_adevice() {
  RamDeleteVirtualMFADeviceRequestType req;
  RamDeleteVirtualMFADeviceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_virtual_mf_adevice_response);
  listener->Start();
  req.serial_number = "SerialNumber";
  int ret = ram->DeleteVirtualMFADevice(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_detach_policy_from_group_response = "{}";
static int test_detach_policy_from_group() {
  RamDetachPolicyFromGroupRequestType req;
  RamDetachPolicyFromGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detach_policy_from_group_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.group_name = "GroupName";
  int ret = ram->DetachPolicyFromGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_detach_policy_from_role_response = "{}";
static int test_detach_policy_from_role() {
  RamDetachPolicyFromRoleRequestType req;
  RamDetachPolicyFromRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detach_policy_from_role_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.role_name = "RoleName";
  int ret = ram->DetachPolicyFromRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_detach_policy_from_user_response = "{}";
static int test_detach_policy_from_user() {
  RamDetachPolicyFromUserRequestType req;
  RamDetachPolicyFromUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detach_policy_from_user_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.user_name = "UserName";
  int ret = ram->DetachPolicyFromUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_account_alias_response = "{"
"  \"AccountAlias\": \"AccountAlias\""
"}";
static int test_get_account_alias() {
  RamGetAccountAliasResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_account_alias_response);
  listener->Start();
  int ret = ram->GetAccountAlias(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_account_summary_response = "{"
"  \"SummaryMap\": {"
"    \"UsersQuota\": 0,"
"    \"Users\": 0,"
"    \"AccessKeysPerUserQuota\": 0,"
"    \"VirtualMFADevicesQuota\": 0,"
"    \"MFADevices\": 0,"
"    \"MFADevicesInUse\": 0,"
"    \"GroupsQuota\": 0,"
"    \"Groups\": 0,"
"    \"GroupsPerUserQuota\": 0,"
"    \"RolesQuota\": 0,"
"    \"Roles\": 0,"
"    \"PoliciesQuota\": 0,"
"    \"Policies\": 0,"
"    \"PolicySizeQuota\": 0,"
"    \"VersionsPerPolicyQuota\": 0,"
"    \"AttachedPoliciesPerUserQuota\": 0,"
"    \"AttachedPoliciesPerGroupQuota\": 0,"
"    \"AttachedPoliciesPerRoleQuota\": 0"
"  }"
"}";
static int test_get_account_summary() {
  RamGetAccountSummaryResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_account_summary_response);
  listener->Start();
  int ret = ram->GetAccountSummary(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_group_response = "{"
"  \"Group\": {"
"    \"GroupName\": \"GroupName\","
"    \"Comments\": \"Comments\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\""
"  }"
"}";
static int test_get_group() {
  RamGetGroupRequestType req;
  RamGetGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_group_response);
  listener->Start();
  req.group_name = "GroupName";
  int ret = ram->GetGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_login_profile_response = "{"
"  \"LoginProfile\": {"
"    \"UserName\": \"UserName\","
"    \"PasswordResetRequired\": 0,"
"    \"MFABindRequired\": 0,"
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_get_login_profile() {
  RamGetLoginProfileRequestType req;
  RamGetLoginProfileResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_login_profile_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->GetLoginProfile(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_password_policy_response = "{"
"  \"PasswordPolicy\": {"
"    \"MinimumPasswordLength\": 0,"
"    \"RequireLowercaseCharacters\": 0,"
"    \"RequireUppercaseCharacters\": 0,"
"    \"RequireNumbers\": 0,"
"    \"RequireSymbols\": 0"
"  }"
"}";
static int test_get_password_policy() {
  RamGetPasswordPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_password_policy_response);
  listener->Start();
  int ret = ram->GetPasswordPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_policy_response = "{"
"  \"Policy\": {"
"    \"PolicyName\": \"PolicyName\","
"    \"PolicyType\": \"PolicyType\","
"    \"Description\": \"Description\","
"    \"DefaultVersion\": \"DefaultVersion\","
"    \"PolicyDocument\": \"PolicyDocument\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\","
"    \"AttachmentCount\": 0"
"  }"
"}";
static int test_get_policy() {
  RamGetPolicyRequestType req;
  RamGetPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_policy_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  int ret = ram->GetPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_policy_version_response = "{"
"  \"PolicyVersion\": {"
"    \"VersionId\": \"VersionId\","
"    \"IsDefaultVersion\": 0,"
"    \"PolicyDocument\": \"PolicyDocument\","
"    \"CreateDate\": \"CreateDate\""
"  }"
"}";
static int test_get_policy_version() {
  RamGetPolicyVersionRequestType req;
  RamGetPolicyVersionResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_policy_version_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  req.version_id = "VersionId";
  int ret = ram->GetPolicyVersion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_role_response = "{"
"  \"Role\": {"
"    \"RoleId\": \"RoleId\","
"    \"RoleName\": \"RoleName\","
"    \"Arn\": \"Arn\","
"    \"Description\": \"Description\","
"    \"AssumeRolePolicyDocument\": \"AssumeRolePolicyDocument\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\""
"  }"
"}";
static int test_get_role() {
  RamGetRoleRequestType req;
  RamGetRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_role_response);
  listener->Start();
  req.role_name = "RoleName";
  int ret = ram->GetRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_security_preference_response = "{"
"  \"SecurityPreference\": {"
"    \"LoginProfilePreference\": {"
"      \"EnableSaveMFATicket\": 0"
"    }"
"  }"
"}";
static int test_get_security_preference() {
  RamGetSecurityPreferenceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_security_preference_response);
  listener->Start();
  int ret = ram->GetSecurityPreference(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_service_status_response = "{"
"  \"Status\": \"Status\""
"}";
static int test_get_service_status() {
  RamGetServiceStatusRequestType req;
  RamGetServiceStatusResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_service_status_response);
  listener->Start();
  req.account_id = "AccountId";
  int ret = ram->GetServiceStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_get_user_response = "{"
"  \"User\": {"
"    \"UserId\": \"UserId\","
"    \"UserName\": \"UserName\","
"    \"DisplayName\": \"DisplayName\","
"    \"MobilePhone\": \"MobilePhone\","
"    \"Email\": \"Email\","
"    \"Comments\": \"Comments\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\","
"    \"LastLoginDate\": \"LastLoginDate\""
"  }"
"}";
static int test_get_user() {
  RamGetUserRequestType req;
  RamGetUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
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
static const char* test_get_user_mf_ainfo_response = "{"
"  \"MFADevice\": {"
"    \"SerialNumber\": \"SerialNumber\""
"  }"
"}";
static int test_get_user_mf_ainfo() {
  RamGetUserMFAInfoRequestType req;
  RamGetUserMFAInfoResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_user_mf_ainfo_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->GetUserMFAInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_access_keys_response = "{"
"  \"AccessKeys\": {"
"    \"AccessKey\": ["
"      {"
"        \"AccessKeyId\": \"AccessKeyId\","
"        \"Status\": \"Status\","
"        \"CreateDate\": \"CreateDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_access_keys() {
  RamListAccessKeysRequestType req;
  RamListAccessKeysResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_access_keys_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->ListAccessKeys(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_entities_for_policy_response = "{"
"  \"Groups\": {"
"    \"Group\": ["
"      {"
"        \"GroupName\": \"GroupName\","
"        \"Comments\": \"Comments\","
"        \"AttachDate\": \"AttachDate\""
"      }"
"    ]"
"  },"
"  \"Users\": {"
"    \"User\": ["
"      {"
"        \"UserId\": \"UserId\","
"        \"UserName\": \"UserName\","
"        \"DisplayName\": \"DisplayName\","
"        \"AttachDate\": \"AttachDate\""
"      }"
"    ]"
"  },"
"  \"Roles\": {"
"    \"Role\": ["
"      {"
"        \"RoleId\": \"RoleId\","
"        \"RoleName\": \"RoleName\","
"        \"Arn\": \"Arn\","
"        \"Description\": \"Description\","
"        \"AttachDate\": \"AttachDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_entities_for_policy() {
  RamListEntitiesForPolicyRequestType req;
  RamListEntitiesForPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_entities_for_policy_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  int ret = ram->ListEntitiesForPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_groups_response = "{"
"  \"Groups\": {"
"    \"Group\": ["
"      {"
"        \"GroupName\": \"GroupName\","
"        \"Comments\": \"Comments\","
"        \"CreateDate\": \"CreateDate\","
"        \"UpdateDate\": \"UpdateDate\""
"      }"
"    ]"
"  },"
"  \"IsTruncated\": 0,"
"  \"Marker\": \"Marker\""
"}";
static int test_list_groups() {
  RamListGroupsRequestType req;
  RamListGroupsResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_groups_response);
  listener->Start();
  req.marker = "Marker";
  req.max_items = "MaxItems";
  int ret = ram->ListGroups(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_groups_for_user_response = "{"
"  \"Groups\": {"
"    \"Group\": ["
"      {"
"        \"GroupName\": \"GroupName\","
"        \"Comments\": \"Comments\","
"        \"JoinDate\": \"JoinDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_groups_for_user() {
  RamListGroupsForUserRequestType req;
  RamListGroupsForUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_groups_for_user_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->ListGroupsForUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_policies_response = "{"
"  \"Policies\": {"
"    \"Policy\": ["
"      {"
"        \"PolicyName\": \"PolicyName\","
"        \"PolicyType\": \"PolicyType\","
"        \"Description\": \"Description\","
"        \"DefaultVersion\": \"DefaultVersion\","
"        \"CreateDate\": \"CreateDate\","
"        \"UpdateDate\": \"UpdateDate\","
"        \"AttachmentCount\": 0"
"      }"
"    ]"
"  },"
"  \"IsTruncated\": 0,"
"  \"Marker\": \"Marker\""
"}";
static int test_list_policies() {
  RamListPoliciesRequestType req;
  RamListPoliciesResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_policies_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.marker = "Marker";
  req.max_items = "MaxItems";
  int ret = ram->ListPolicies(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_policies_for_group_response = "{"
"  \"Policies\": {"
"    \"Policy\": ["
"      {"
"        \"PolicyName\": \"PolicyName\","
"        \"PolicyType\": \"PolicyType\","
"        \"Description\": \"Description\","
"        \"DefaultVersion\": \"DefaultVersion\","
"        \"AttachDate\": \"AttachDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_policies_for_group() {
  RamListPoliciesForGroupRequestType req;
  RamListPoliciesForGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_policies_for_group_response);
  listener->Start();
  req.group_name = "GroupName";
  int ret = ram->ListPoliciesForGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_policies_for_role_response = "{"
"  \"Policies\": {"
"    \"Policy\": ["
"      {"
"        \"PolicyName\": \"PolicyName\","
"        \"PolicyType\": \"PolicyType\","
"        \"Description\": \"Description\","
"        \"DefaultVersion\": \"DefaultVersion\","
"        \"AttachDate\": \"AttachDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_policies_for_role() {
  RamListPoliciesForRoleRequestType req;
  RamListPoliciesForRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_policies_for_role_response);
  listener->Start();
  req.role_name = "RoleName";
  int ret = ram->ListPoliciesForRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_policies_for_user_response = "{"
"  \"Policies\": {"
"    \"Policy\": ["
"      {"
"        \"PolicyName\": \"PolicyName\","
"        \"PolicyType\": \"PolicyType\","
"        \"Description\": \"Description\","
"        \"DefaultVersion\": \"DefaultVersion\","
"        \"AttachDate\": \"AttachDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_policies_for_user() {
  RamListPoliciesForUserRequestType req;
  RamListPoliciesForUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_policies_for_user_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->ListPoliciesForUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_policy_versions_response = "{"
"  \"PolicyVersions\": {"
"    \"PolicyVersion\": ["
"      {"
"        \"VersionId\": \"VersionId\","
"        \"IsDefaultVersion\": 0,"
"        \"PolicyDocument\": \"PolicyDocument\","
"        \"CreateDate\": \"CreateDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_policy_versions() {
  RamListPolicyVersionsRequestType req;
  RamListPolicyVersionsResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_policy_versions_response);
  listener->Start();
  req.policy_type = "PolicyType";
  req.policy_name = "PolicyName";
  int ret = ram->ListPolicyVersions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_roles_response = "{"
"  \"Roles\": {"
"    \"Role\": ["
"      {"
"        \"RoleId\": \"RoleId\","
"        \"RoleName\": \"RoleName\","
"        \"Arn\": \"Arn\","
"        \"Description\": \"Description\","
"        \"CreateDate\": \"CreateDate\","
"        \"UpdateDate\": \"UpdateDate\""
"      }"
"    ]"
"  },"
"  \"IsTruncated\": 0,"
"  \"Marker\": \"Marker\""
"}";
static int test_list_roles() {
  RamListRolesRequestType req;
  RamListRolesResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_roles_response);
  listener->Start();
  req.marker = "Marker";
  req.max_items = "MaxItems";
  int ret = ram->ListRoles(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_users_response = "{"
"  \"Users\": {"
"    \"User\": ["
"      {"
"        \"UserId\": \"UserId\","
"        \"UserName\": \"UserName\","
"        \"DisplayName\": \"DisplayName\","
"        \"MobilePhone\": \"MobilePhone\","
"        \"Email\": \"Email\","
"        \"Comments\": \"Comments\","
"        \"CreateDate\": \"CreateDate\","
"        \"UpdateDate\": \"UpdateDate\""
"      }"
"    ]"
"  },"
"  \"IsTruncated\": 0,"
"  \"Marker\": \"Marker\""
"}";
static int test_list_users() {
  RamListUsersRequestType req;
  RamListUsersResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_users_response);
  listener->Start();
  req.marker = "Marker";
  req.max_items = "MaxItems";
  int ret = ram->ListUsers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_users_for_group_response = "{"
"  \"Users\": {"
"    \"User\": ["
"      {"
"        \"UserName\": \"UserName\","
"        \"DisplayName\": \"DisplayName\","
"        \"JoinDate\": \"JoinDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_users_for_group() {
  RamListUsersForGroupRequestType req;
  RamListUsersForGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_users_for_group_response);
  listener->Start();
  req.group_name = "GroupName";
  int ret = ram->ListUsersForGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_list_virtual_mf_adevices_response = "{"
"  \"VirtualMFADevices\": {"
"    \"VirtualMFADevice\": ["
"      {"
"        \"User\": {"
"          \"UserId\": \"UserId\","
"          \"UserName\": \"UserName\","
"          \"DisplayName\": \"DisplayName\""
"        },"
"        \"SerialNumber\": \"SerialNumber\","
"        \"ActivateDate\": \"ActivateDate\""
"      }"
"    ]"
"  }"
"}";
static int test_list_virtual_mf_adevices() {
  RamListVirtualMFADevicesResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_virtual_mf_adevices_response);
  listener->Start();
  int ret = ram->ListVirtualMFADevices(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_remove_user_from_group_response = "{}";
static int test_remove_user_from_group() {
  RamRemoveUserFromGroupRequestType req;
  RamRemoveUserFromGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_user_from_group_response);
  listener->Start();
  req.user_name = "UserName";
  req.group_name = "GroupName";
  int ret = ram->RemoveUserFromGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_set_account_alias_response = "{}";
static int test_set_account_alias() {
  RamSetAccountAliasRequestType req;
  RamSetAccountAliasResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_account_alias_response);
  listener->Start();
  req.account_alias = "AccountAlias";
  int ret = ram->SetAccountAlias(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_set_default_policy_version_response = "{}";
static int test_set_default_policy_version() {
  RamSetDefaultPolicyVersionRequestType req;
  RamSetDefaultPolicyVersionResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_default_policy_version_response);
  listener->Start();
  req.policy_name = "PolicyName";
  req.version_id = "VersionId";
  int ret = ram->SetDefaultPolicyVersion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_set_password_policy_response = "{"
"  \"PasswordPolicy\": {"
"    \"MinimumPasswordLength\": 0,"
"    \"RequireLowercaseCharacters\": 0,"
"    \"RequireUppercaseCharacters\": 0,"
"    \"RequireNumbers\": 0,"
"    \"RequireSymbols\": 0"
"  }"
"}";
static int test_set_password_policy() {
  RamSetPasswordPolicyRequestType req;
  RamSetPasswordPolicyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_password_policy_response);
  listener->Start();
  req.minimum_password_length = "MinimumPasswordLength";
  req.require_lowercase_characters = "RequireLowercaseCharacters";
  req.require_uppercase_characters = "RequireUppercaseCharacters";
  req.require_numbers = "RequireNumbers";
  req.require_symbols = "RequireSymbols";
  int ret = ram->SetPasswordPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_set_security_preference_response = "{"
"  \"SecurityPreference\": {"
"    \"LoginProfilePreference\": {"
"      \"EnableSaveMFATicket\": 0"
"    }"
"  }"
"}";
static int test_set_security_preference() {
  RamSetSecurityPreferenceRequestType req;
  RamSetSecurityPreferenceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_security_preference_response);
  listener->Start();
  req.enable_save_mf_aticket = "EnableSaveMFATicket";
  int ret = ram->SetSecurityPreference(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_unbind_mf_adevice_response = "{}";
static int test_unbind_mf_adevice() {
  RamUnbindMFADeviceRequestType req;
  RamUnbindMFADeviceResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_unbind_mf_adevice_response);
  listener->Start();
  req.user_name = "UserName";
  int ret = ram->UnbindMFADevice(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_update_access_key_response = "{}";
static int test_update_access_key() {
  RamUpdateAccessKeyRequestType req;
  RamUpdateAccessKeyResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_access_key_response);
  listener->Start();
  req.user_name = "UserName";
  req.user_access_key_id = "UserAccessKeyId";
  req.status = "Status";
  int ret = ram->UpdateAccessKey(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_update_group_response = "{"
"  \"Group\": {"
"    \"GroupName\": \"GroupName\","
"    \"Comments\": \"Comments\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\""
"  }"
"}";
static int test_update_group() {
  RamUpdateGroupRequestType req;
  RamUpdateGroupResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_group_response);
  listener->Start();
  req.group_name = "GroupName";
  req.new_group_name = "NewGroupName";
  req.new_comments = "NewComments";
  int ret = ram->UpdateGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_update_login_profile_response = "{}";
static int test_update_login_profile() {
  RamUpdateLoginProfileRequestType req;
  RamUpdateLoginProfileResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_login_profile_response);
  listener->Start();
  req.user_name = "UserName";
  req.password = "Password";
  req.password_reset_required = "PasswordResetRequired";
  req.mf_abind_required = "MFABindRequired";
  int ret = ram->UpdateLoginProfile(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_update_role_response = "{"
"  \"Role\": {"
"    \"RoleId\": \"RoleId\","
"    \"RoleName\": \"RoleName\","
"    \"Arn\": \"Arn\","
"    \"Description\": \"Description\","
"    \"AssumeRolePolicyDocument\": \"AssumeRolePolicyDocument\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\""
"  }"
"}";
static int test_update_role() {
  RamUpdateRoleRequestType req;
  RamUpdateRoleResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_role_response);
  listener->Start();
  req.role_name = "RoleName";
  req.new_assume_role_policy_document = "NewAssumeRolePolicyDocument";
  int ret = ram->UpdateRole(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
static const char* test_update_user_response = "{"
"  \"User\": {"
"    \"UserId\": \"UserId\","
"    \"UserName\": \"UserName\","
"    \"DisplayName\": \"DisplayName\","
"    \"MobilePhone\": \"MobilePhone\","
"    \"Email\": \"Email\","
"    \"Comments\": \"Comments\","
"    \"CreateDate\": \"CreateDate\","
"    \"UpdateDate\": \"UpdateDate\""
"  }"
"}";
static int test_update_user() {
  RamUpdateUserRequestType req;
  RamUpdateUserResponseType resp;
  Ram* ram = Ram::CreateRamClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  ram->SetProxyHost("127.0.0.1:12234");
  ram->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_user_response);
  listener->Start();
  req.user_name = "UserName";
  req.new_user_name = "NewUserName";
  req.new_display_name = "NewDisplayName";
  req.new_mobile_phone = "NewMobilePhone";
  req.new_email = "NewEmail";
  req.new_comments = "NewComments";
  int ret = ram->UpdateUser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ram;
}
int main() {
  test_activate_service();
  test_add_user_to_group();
  test_attach_policy_to_group();
  test_attach_policy_to_role();
  test_attach_policy_to_user();
  test_bind_mf_adevice();
  test_clear_account_alias();
  test_create_access_key();
  test_create_group();
  test_create_login_profile();
  test_create_policy();
  test_create_policy_version();
  test_create_role();
  test_create_user();
  test_create_virtual_mf_adevice();
  test_deactivate_service();
  test_delete_access_key();
  test_delete_group();
  test_delete_login_profile();
  test_delete_policy();
  test_delete_policy_version();
  test_delete_role();
  test_delete_user();
  test_delete_virtual_mf_adevice();
  test_detach_policy_from_group();
  test_detach_policy_from_role();
  test_detach_policy_from_user();
  test_get_account_alias();
  test_get_account_summary();
  test_get_group();
  test_get_login_profile();
  test_get_password_policy();
  test_get_policy();
  test_get_policy_version();
  test_get_role();
  test_get_security_preference();
  test_get_service_status();
  test_get_user();
  test_get_user_mf_ainfo();
  test_list_access_keys();
  test_list_entities_for_policy();
  test_list_groups();
  test_list_groups_for_user();
  test_list_policies();
  test_list_policies_for_group();
  test_list_policies_for_role();
  test_list_policies_for_user();
  test_list_policy_versions();
  test_list_roles();
  test_list_users();
  test_list_users_for_group();
  test_list_virtual_mf_adevices();
  test_remove_user_from_group();
  test_set_account_alias();
  test_set_default_policy_version();
  test_set_password_policy();
  test_set_security_preference();
  test_unbind_mf_adevice();
  test_update_access_key();
  test_update_group();
  test_update_login_profile();
  test_update_role();
  test_update_user();
}
