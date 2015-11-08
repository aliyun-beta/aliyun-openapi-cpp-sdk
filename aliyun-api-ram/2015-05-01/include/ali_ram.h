#ifndef ALI_RAMH
#define ALI_RAMH
#include <string>
#include "ali_activate_service_types.h"
#include "ali_add_user_to_group_types.h"
#include "ali_attach_policy_to_group_types.h"
#include "ali_attach_policy_to_role_types.h"
#include "ali_attach_policy_to_user_types.h"
#include "ali_bind_mf_adevice_types.h"
#include "ali_clear_account_alias_types.h"
#include "ali_create_access_key_types.h"
#include "ali_create_group_types.h"
#include "ali_create_login_profile_types.h"
#include "ali_create_policy_types.h"
#include "ali_create_policy_version_types.h"
#include "ali_create_role_types.h"
#include "ali_create_user_types.h"
#include "ali_create_virtual_mf_adevice_types.h"
#include "ali_deactivate_service_types.h"
#include "ali_delete_access_key_types.h"
#include "ali_delete_group_types.h"
#include "ali_delete_login_profile_types.h"
#include "ali_delete_policy_types.h"
#include "ali_delete_policy_version_types.h"
#include "ali_delete_role_types.h"
#include "ali_delete_user_types.h"
#include "ali_delete_virtual_mf_adevice_types.h"
#include "ali_detach_policy_from_group_types.h"
#include "ali_detach_policy_from_role_types.h"
#include "ali_detach_policy_from_user_types.h"
#include "ali_get_account_alias_types.h"
#include "ali_get_account_summary_types.h"
#include "ali_get_group_types.h"
#include "ali_get_login_profile_types.h"
#include "ali_get_password_policy_types.h"
#include "ali_get_policy_types.h"
#include "ali_get_policy_version_types.h"
#include "ali_get_role_types.h"
#include "ali_get_security_preference_types.h"
#include "ali_get_service_status_types.h"
#include "ali_get_user_types.h"
#include "ali_get_user_mf_ainfo_types.h"
#include "ali_list_access_keys_types.h"
#include "ali_list_entities_for_policy_types.h"
#include "ali_list_groups_types.h"
#include "ali_list_groups_for_user_types.h"
#include "ali_list_policies_types.h"
#include "ali_list_policies_for_group_types.h"
#include "ali_list_policies_for_role_types.h"
#include "ali_list_policies_for_user_types.h"
#include "ali_list_policy_versions_types.h"
#include "ali_list_roles_types.h"
#include "ali_list_users_types.h"
#include "ali_list_users_for_group_types.h"
#include "ali_list_virtual_mf_adevices_types.h"
#include "ali_remove_user_from_group_types.h"
#include "ali_set_account_alias_types.h"
#include "ali_set_default_policy_version_types.h"
#include "ali_set_password_policy_types.h"
#include "ali_set_security_preference_types.h"
#include "ali_unbind_mf_adevice_types.h"
#include "ali_update_access_key_types.h"
#include "ali_update_group_types.h"
#include "ali_update_login_profile_types.h"
#include "ali_update_role_types.h"
#include "ali_update_user_types.h"
namespace aliyun {
struct AliRamErrorInfo {
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
  host_(host) {}
public:
  int ActivateService(const ActivateServiceRequestType& req,
          ActivateServiceResponseType* resp,
          AliRamErrorInfo* error_info);

  int AddUserToGroup(const AddUserToGroupRequestType& req,
          AddUserToGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int AttachPolicyToGroup(const AttachPolicyToGroupRequestType& req,
          AttachPolicyToGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int AttachPolicyToRole(const AttachPolicyToRoleRequestType& req,
          AttachPolicyToRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int AttachPolicyToUser(const AttachPolicyToUserRequestType& req,
          AttachPolicyToUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int BindMFADevice(const BindMFADeviceRequestType& req,
          BindMFADeviceResponseType* resp,
          AliRamErrorInfo* error_info);

  int ClearAccountAlias(const ClearAccountAliasRequestType& req,
          ClearAccountAliasResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreateAccessKey(const CreateAccessKeyRequestType& req,
          CreateAccessKeyResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreateGroup(const CreateGroupRequestType& req,
          CreateGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreateLoginProfile(const CreateLoginProfileRequestType& req,
          CreateLoginProfileResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreatePolicy(const CreatePolicyRequestType& req,
          CreatePolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreatePolicyVersion(const CreatePolicyVersionRequestType& req,
          CreatePolicyVersionResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreateRole(const CreateRoleRequestType& req,
          CreateRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreateUser(const CreateUserRequestType& req,
          CreateUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int CreateVirtualMFADevice(const CreateVirtualMFADeviceRequestType& req,
          CreateVirtualMFADeviceResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeactivateService(const DeactivateServiceRequestType& req,
          DeactivateServiceResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteAccessKey(const DeleteAccessKeyRequestType& req,
          DeleteAccessKeyResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteGroup(const DeleteGroupRequestType& req,
          DeleteGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteLoginProfile(const DeleteLoginProfileRequestType& req,
          DeleteLoginProfileResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeletePolicy(const DeletePolicyRequestType& req,
          DeletePolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeletePolicyVersion(const DeletePolicyVersionRequestType& req,
          DeletePolicyVersionResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteRole(const DeleteRoleRequestType& req,
          DeleteRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteUser(const DeleteUserRequestType& req,
          DeleteUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteVirtualMFADevice(const DeleteVirtualMFADeviceRequestType& req,
          DeleteVirtualMFADeviceResponseType* resp,
          AliRamErrorInfo* error_info);

  int DetachPolicyFromGroup(const DetachPolicyFromGroupRequestType& req,
          DetachPolicyFromGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int DetachPolicyFromRole(const DetachPolicyFromRoleRequestType& req,
          DetachPolicyFromRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int DetachPolicyFromUser(const DetachPolicyFromUserRequestType& req,
          DetachPolicyFromUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetAccountAlias(const GetAccountAliasRequestType& req,
          GetAccountAliasResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetAccountSummary(const GetAccountSummaryRequestType& req,
          GetAccountSummaryResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetGroup(const GetGroupRequestType& req,
          GetGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetLoginProfile(const GetLoginProfileRequestType& req,
          GetLoginProfileResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetPasswordPolicy(const GetPasswordPolicyRequestType& req,
          GetPasswordPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetPolicy(const GetPolicyRequestType& req,
          GetPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetPolicyVersion(const GetPolicyVersionRequestType& req,
          GetPolicyVersionResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetRole(const GetRoleRequestType& req,
          GetRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetSecurityPreference(const GetSecurityPreferenceRequestType& req,
          GetSecurityPreferenceResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetServiceStatus(const GetServiceStatusRequestType& req,
          GetServiceStatusResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetUser(const GetUserRequestType& req,
          GetUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetUserMFAInfo(const GetUserMFAInfoRequestType& req,
          GetUserMFAInfoResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListAccessKeys(const ListAccessKeysRequestType& req,
          ListAccessKeysResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListEntitiesForPolicy(const ListEntitiesForPolicyRequestType& req,
          ListEntitiesForPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListGroups(const ListGroupsRequestType& req,
          ListGroupsResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListGroupsForUser(const ListGroupsForUserRequestType& req,
          ListGroupsForUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListPolicies(const ListPoliciesRequestType& req,
          ListPoliciesResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListPoliciesForGroup(const ListPoliciesForGroupRequestType& req,
          ListPoliciesForGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListPoliciesForRole(const ListPoliciesForRoleRequestType& req,
          ListPoliciesForRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListPoliciesForUser(const ListPoliciesForUserRequestType& req,
          ListPoliciesForUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListPolicyVersions(const ListPolicyVersionsRequestType& req,
          ListPolicyVersionsResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListRoles(const ListRolesRequestType& req,
          ListRolesResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListUsers(const ListUsersRequestType& req,
          ListUsersResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListUsersForGroup(const ListUsersForGroupRequestType& req,
          ListUsersForGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListVirtualMFADevices(const ListVirtualMFADevicesRequestType& req,
          ListVirtualMFADevicesResponseType* resp,
          AliRamErrorInfo* error_info);

  int RemoveUserFromGroup(const RemoveUserFromGroupRequestType& req,
          RemoveUserFromGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int SetAccountAlias(const SetAccountAliasRequestType& req,
          SetAccountAliasResponseType* resp,
          AliRamErrorInfo* error_info);

  int SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequestType& req,
          SetDefaultPolicyVersionResponseType* resp,
          AliRamErrorInfo* error_info);

  int SetPasswordPolicy(const SetPasswordPolicyRequestType& req,
          SetPasswordPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int SetSecurityPreference(const SetSecurityPreferenceRequestType& req,
          SetSecurityPreferenceResponseType* resp,
          AliRamErrorInfo* error_info);

  int UnbindMFADevice(const UnbindMFADeviceRequestType& req,
          UnbindMFADeviceResponseType* resp,
          AliRamErrorInfo* error_info);

  int UpdateAccessKey(const UpdateAccessKeyRequestType& req,
          UpdateAccessKeyResponseType* resp,
          AliRamErrorInfo* error_info);

  int UpdateGroup(const UpdateGroupRequestType& req,
          UpdateGroupResponseType* resp,
          AliRamErrorInfo* error_info);

  int UpdateLoginProfile(const UpdateLoginProfileRequestType& req,
          UpdateLoginProfileResponseType* resp,
          AliRamErrorInfo* error_info);

  int UpdateRole(const UpdateRoleRequestType& req,
          UpdateRoleResponseType* resp,
          AliRamErrorInfo* error_info);

  int UpdateUser(const UpdateUserRequestType& req,
          UpdateUserResponseType* resp,
          AliRamErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
