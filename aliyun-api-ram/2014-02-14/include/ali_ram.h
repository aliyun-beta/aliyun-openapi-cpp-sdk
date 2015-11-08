#ifndef ALI_RAMH
#define ALI_RAMH
#include <string>
#include "ali_add_user_types.h"
#include "ali_delete_user_policy_types.h"
#include "ali_get_user_types.h"
#include "ali_get_user_policy_types.h"
#include "ali_list_user_policies_types.h"
#include "ali_list_users_types.h"
#include "ali_put_user_policy_types.h"
#include "ali_remove_user_types.h"
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
  version_("2014-02-14"),
  host_(host) {}
public:
  int AddUser(const AddUserRequestType& req,
          AddUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int DeleteUserPolicy(const DeleteUserPolicyRequestType& req,
          DeleteUserPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetUser(const GetUserRequestType& req,
          GetUserResponseType* resp,
          AliRamErrorInfo* error_info);

  int GetUserPolicy(const GetUserPolicyRequestType& req,
          GetUserPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListUserPolicies(const ListUserPoliciesRequestType& req,
          ListUserPoliciesResponseType* resp,
          AliRamErrorInfo* error_info);

  int ListUsers(const ListUsersRequestType& req,
          ListUsersResponseType* resp,
          AliRamErrorInfo* error_info);

  int PutUserPolicy(const PutUserPolicyRequestType& req,
          PutUserPolicyResponseType* resp,
          AliRamErrorInfo* error_info);

  int RemoveUser(const RemoveUserRequestType& req,
          RemoveUserResponseType* resp,
          AliRamErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
