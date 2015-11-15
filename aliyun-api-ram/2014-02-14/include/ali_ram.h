#ifndef ALI_RAMH
#define ALI_RAMH
#include <string>
#include "ali_ram_add_user_types.h"
#include "ali_ram_delete_user_policy_types.h"
#include "ali_ram_get_user_types.h"
#include "ali_ram_get_user_policy_types.h"
#include "ali_ram_list_user_policies_types.h"
#include "ali_ram_list_users_types.h"
#include "ali_ram_put_user_policy_types.h"
#include "ali_ram_remove_user_types.h"
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
  version_("2014-02-14"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int AddUser(const RamAddUserRequestType& req,
          RamAddUserResponseType* resp,
          RamErrorInfo* error_info);

  int DeleteUserPolicy(const RamDeleteUserPolicyRequestType& req,
          RamDeleteUserPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int GetUser(const RamGetUserRequestType& req,
          RamGetUserResponseType* resp,
          RamErrorInfo* error_info);

  int GetUserPolicy(const RamGetUserPolicyRequestType& req,
          RamGetUserPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int ListUserPolicies(const RamListUserPoliciesRequestType& req,
          RamListUserPoliciesResponseType* resp,
          RamErrorInfo* error_info);

  int ListUsers(RamListUsersResponseType* resp,
          RamErrorInfo* error_info);

  int PutUserPolicy(const RamPutUserPolicyRequestType& req,
          RamPutUserPolicyResponseType* resp,
          RamErrorInfo* error_info);

  int RemoveUser(const RamRemoveUserRequestType& req,
          RamRemoveUserResponseType* resp,
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
