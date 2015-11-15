#ifndef ALI_RAMH
#define ALI_RAMH
#include <string>
#include "ali_ram_activate_service_types.h"
#include "ali_ram_add_user_to_group_types.h"
#include "ali_ram_attach_policy_to_group_types.h"
#include "ali_ram_attach_policy_to_role_types.h"
#include "ali_ram_attach_policy_to_user_types.h"
#include "ali_ram_bind_mf_adevice_types.h"
#include "ali_ram_clear_account_alias_types.h"
#include "ali_ram_create_access_key_types.h"
#include "ali_ram_create_group_types.h"
#include "ali_ram_create_login_profile_types.h"
#include "ali_ram_create_policy_types.h"
#include "ali_ram_create_policy_version_types.h"
#include "ali_ram_create_role_types.h"
#include "ali_ram_create_user_types.h"
#include "ali_ram_create_virtual_mf_adevice_types.h"
#include "ali_ram_deactivate_service_types.h"
#include "ali_ram_delete_access_key_types.h"
#include "ali_ram_delete_group_types.h"
#include "ali_ram_delete_login_profile_types.h"
#include "ali_ram_delete_policy_types.h"
#include "ali_ram_delete_policy_version_types.h"
#include "ali_ram_delete_role_types.h"
#include "ali_ram_delete_user_types.h"
#include "ali_ram_delete_virtual_mf_adevice_types.h"
#include "ali_ram_detach_policy_from_group_types.h"
#include "ali_ram_detach_policy_from_role_types.h"
#include "ali_ram_detach_policy_from_user_types.h"
#include "ali_ram_get_account_alias_types.h"
#include "ali_ram_get_account_summary_types.h"
#include "ali_ram_get_group_types.h"
#include "ali_ram_get_login_profile_types.h"
#include "ali_ram_get_password_policy_types.h"
#include "ali_ram_get_policy_types.h"
#include "ali_ram_get_policy_version_types.h"
#include "ali_ram_get_role_types.h"
#include "ali_ram_get_security_preference_types.h"
#include "ali_ram_get_service_status_types.h"
#include "ali_ram_get_user_types.h"
#include "ali_ram_get_user_mf_ainfo_types.h"
#include "ali_ram_list_access_keys_types.h"
#include "ali_ram_list_entities_for_policy_types.h"
#include "ali_ram_list_groups_types.h"
#include "ali_ram_list_groups_for_user_types.h"
#include "ali_ram_list_policies_types.h"
#include "ali_ram_list_policies_for_group_types.h"
#include "ali_ram_list_policies_for_role_types.h"
#include "ali_ram_list_policies_for_user_types.h"
#include "ali_ram_list_policy_versions_types.h"
#include "ali_ram_list_roles_types.h"
#include "ali_ram_list_users_types.h"
#include "ali_ram_list_users_for_group_types.h"
#include "ali_ram_list_virtual_mf_adevices_types.h"
#include "ali_ram_remove_user_from_group_types.h"
#include "ali_ram_set_account_alias_types.h"
#include "ali_ram_set_default_policy_version_types.h"
#include "ali_ram_set_password_policy_types.h"
#include "ali_ram_set_security_preference_types.h"
#include "ali_ram_unbind_mf_adevice_types.h"
#include "ali_ram_update_access_key_types.h"
#include "ali_ram_update_group_types.h"
#include "ali_ram_update_login_profile_types.h"
#include "ali_ram_update_role_types.h"
#include "ali_ram_update_user_types.h"
namespace aliyun {
struct RamErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ram {
public:
  static Ram* CreateRamClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ram(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-05-01"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int ActivateService(const RamActivateServiceRequestType& req,
          RamActivateServiceResponseType* resp,
          RamErrorInfo* error_info);

  int AddUserToGroup(const RamAddUserToGroupRequestType& req,
          RamAddUserToGroupResponseType* resp,
          RamErrorInfo* error_info);

  int AttachPolicyToGroup(const RamAttachPolicyToGroupRequestType& req,
          RamAttachPolicyToGroupResponseType* resp,
          RamErrorInfo* error_info);

  int AttachPolicyToRole(const RamAttachPolicyToRoleRequestType& req,
          RamAttachPolicyToRoleResponseType* resp,
          RamErrorInfo* error_info);

  int AttachPolicyToUser(const RamAttachPolicyToUserRequestType& req,
          RamAttachPolicyToUserResponseType* resp,
          RamErrorInfo* error_info);

  int BindMFADevice(const RamBindMFADeviceRequestType& req,
          RamBindMFADeviceResponseType* resp,
          RamErrorInfo* error_info);

  int ClearAccountAlias(RamClearAccountAliasResponseType* resp,
          RamErrorInfo* error_info);

  int CreateAccessKey(const RamCreateAccessKeyRequestType& req,
          RamCreateAccessKeyResponseType* resp,
          RamErrorInfo* error_info);

  int CreateGroup(const RamCreateGroupRequestType& req,
          RamCreateGroupResponseType* resp,
          RamErrorInfo* error_info);

  int CreateLoginProfile(const RamCreateLoginProfileRequestType& req,
          RamCreateLoginProfileResponseType* resp,
          RamErrorInfo* error_info);

  int CreatePolicy(const RamCreatePolicyRequestType& req,
          RamCreatePolicyResponseType* resp,
          RamErrorInfo* error_info);

  int CreatePolicyVersion(const RamCreatePolicyVersionRequestType& req,
          RamCreatePolicyVersionResponseType* resp,
          RamErrorInfo* error_info);

  int CreateRole(const RamCreateRoleRequestType& req,
          RamCreateRoleResponseType* resp,
          RamErrorInfo* error_info);

  int CreateUser(const RamCreateUserRequestType& req,
          RamCreateUserResponseType* resp,
          RamErrorInfo* error_info);

  int CreateVirtualMFADevice(const RamCreateVirtualMFADeviceRequestType& req,
          RamCreateVirtualMFADeviceResponseType* resp,
          RamErrorInfo* error_info);

  int DeactivateService(const RamDeactivateServiceRequestType& req,
          RamDeactivateServiceResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteAccessKey(const RamDeleteAccessKeyRequestType& req,
          RamDeleteAccessKeyResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteGroup(const RamDeleteGroupRequestType& req,
          RamDeleteGroupResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteLoginProfile(const RamDeleteLoginProfileRequestType& req,
          RamDeleteLoginProfileResponseType* resp,
          RamErrorInfo* error_info);

  int DeletePolicy(const RamDeletePolicyRequestType& req,
          RamDeletePolicyResponseType* resp,
          RamErrorInfo* error_info);

  int DeletePolicyVersion(const RamDeletePolicyVersionRequestType& req,
          RamDeletePolicyVersionResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteRole(const RamDeleteRoleRequestType& req,
          RamDeleteRoleResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteUser(const RamDeleteUserRequestType& req,
          RamDeleteUserResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteVirtualMFADevice(const RamDeleteVirtualMFADeviceRequestType& req,
          RamDeleteVirtualMFADeviceResponseType* resp,
          RamErrorInfo* error_info);

  int DetachPolicyFromGroup(const RamDetachPolicyFromGroupRequestType& req,
          RamDetachPolicyFromGroupResponseType* resp,
          RamErrorInfo* error_info);

  int DetachPolicyFromRole(const RamDetachPolicyFromRoleRequestType& req,
          RamDetachPolicyFromRoleResponseType* resp,
          RamErrorInfo* error_info);

  int DetachPolicyFromUser(const RamDetachPolicyFromUserRequestType& req,
          RamDetachPolicyFromUserResponseType* resp,
          RamErrorInfo* error_info);

  int GetAccountAlias(RamGetAccountAliasResponseType* resp,
          RamErrorInfo* error_info);

  int GetAccountSummary(RamGetAccountSummaryResponseType* resp,
          RamErrorInfo* error_info);

  int GetGroup(const RamGetGroupRequestType& req,
          RamGetGroupResponseType* resp,
          RamErrorInfo* error_info);

  int GetLoginProfile(const RamGetLoginProfileRequestType& req,
          RamGetLoginProfileResponseType* resp,
          RamErrorInfo* error_info);

  int GetPasswordPolicy(RamGetPasswordPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int GetPolicy(const RamGetPolicyRequestType& req,
          RamGetPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int GetPolicyVersion(const RamGetPolicyVersionRequestType& req,
          RamGetPolicyVersionResponseType* resp,
          RamErrorInfo* error_info);

  int GetRole(const RamGetRoleRequestType& req,
          RamGetRoleResponseType* resp,
          RamErrorInfo* error_info);

  int GetSecurityPreference(RamGetSecurityPreferenceResponseType* resp,
          RamErrorInfo* error_info);

  int GetServiceStatus(const RamGetServiceStatusRequestType& req,
          RamGetServiceStatusResponseType* resp,
          RamErrorInfo* error_info);

  int GetUser(const RamGetUserRequestType& req,
          RamGetUserResponseType* resp,
          RamErrorInfo* error_info);

  int GetUserMFAInfo(const RamGetUserMFAInfoRequestType& req,
          RamGetUserMFAInfoResponseType* resp,
          RamErrorInfo* error_info);

  int ListAccessKeys(const RamListAccessKeysRequestType& req,
          RamListAccessKeysResponseType* resp,
          RamErrorInfo* error_info);

  int ListEntitiesForPolicy(const RamListEntitiesForPolicyRequestType& req,
          RamListEntitiesForPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int ListGroups(const RamListGroupsRequestType& req,
          RamListGroupsResponseType* resp,
          RamErrorInfo* error_info);

  int ListGroupsForUser(const RamListGroupsForUserRequestType& req,
          RamListGroupsForUserResponseType* resp,
          RamErrorInfo* error_info);

  int ListPolicies(const RamListPoliciesRequestType& req,
          RamListPoliciesResponseType* resp,
          RamErrorInfo* error_info);

  int ListPoliciesForGroup(const RamListPoliciesForGroupRequestType& req,
          RamListPoliciesForGroupResponseType* resp,
          RamErrorInfo* error_info);

  int ListPoliciesForRole(const RamListPoliciesForRoleRequestType& req,
          RamListPoliciesForRoleResponseType* resp,
          RamErrorInfo* error_info);

  int ListPoliciesForUser(const RamListPoliciesForUserRequestType& req,
          RamListPoliciesForUserResponseType* resp,
          RamErrorInfo* error_info);

  int ListPolicyVersions(const RamListPolicyVersionsRequestType& req,
          RamListPolicyVersionsResponseType* resp,
          RamErrorInfo* error_info);

  int ListRoles(const RamListRolesRequestType& req,
          RamListRolesResponseType* resp,
          RamErrorInfo* error_info);

  int ListUsers(const RamListUsersRequestType& req,
          RamListUsersResponseType* resp,
          RamErrorInfo* error_info);

  int ListUsersForGroup(const RamListUsersForGroupRequestType& req,
          RamListUsersForGroupResponseType* resp,
          RamErrorInfo* error_info);

  int ListVirtualMFADevices(RamListVirtualMFADevicesResponseType* resp,
          RamErrorInfo* error_info);

  int RemoveUserFromGroup(const RamRemoveUserFromGroupRequestType& req,
          RamRemoveUserFromGroupResponseType* resp,
          RamErrorInfo* error_info);

  int SetAccountAlias(const RamSetAccountAliasRequestType& req,
          RamSetAccountAliasResponseType* resp,
          RamErrorInfo* error_info);

  int SetDefaultPolicyVersion(const RamSetDefaultPolicyVersionRequestType& req,
          RamSetDefaultPolicyVersionResponseType* resp,
          RamErrorInfo* error_info);

  int SetPasswordPolicy(const RamSetPasswordPolicyRequestType& req,
          RamSetPasswordPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int SetSecurityPreference(const RamSetSecurityPreferenceRequestType& req,
          RamSetSecurityPreferenceResponseType* resp,
          RamErrorInfo* error_info);

  int UnbindMFADevice(const RamUnbindMFADeviceRequestType& req,
          RamUnbindMFADeviceResponseType* resp,
          RamErrorInfo* error_info);

  int UpdateAccessKey(const RamUpdateAccessKeyRequestType& req,
          RamUpdateAccessKeyResponseType* resp,
          RamErrorInfo* error_info);

  int UpdateGroup(const RamUpdateGroupRequestType& req,
          RamUpdateGroupResponseType* resp,
          RamErrorInfo* error_info);

  int UpdateLoginProfile(const RamUpdateLoginProfileRequestType& req,
          RamUpdateLoginProfileResponseType* resp,
          RamErrorInfo* error_info);

  int UpdateRole(const RamUpdateRoleRequestType& req,
          RamUpdateRoleResponseType* resp,
          RamErrorInfo* error_info);

  int UpdateUser(const RamUpdateUserRequestType& req,
          RamUpdateUserResponseType* resp,
          RamErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
