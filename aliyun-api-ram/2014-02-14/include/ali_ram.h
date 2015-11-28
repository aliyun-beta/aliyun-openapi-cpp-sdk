#ifndef ALI_RAMH
#define ALI_RAMH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_ram_add_user_types.h"
#include "ali_ram_delete_user_policy_types.h"
#include "ali_ram_get_user_types.h"
#include "ali_ram_get_user_policy_types.h"
#include "ali_ram_list_user_policies_types.h"
#include "ali_ram_list_users_types.h"
#include "ali_ram_put_user_policy_types.h"
#include "ali_ram_remove_user_types.h"
#ifdef WIN32
 #ifdef aliyun_api_ram_2014_02_14_EXPORTS
 #define ALIYUN_API_RAM_2014_02_14_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_RAM_2014_02_14_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_RAM_2014_02_14_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct RamErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_RAM_2014_02_14_DLL_EXPORT_IMPORT Ram {
public:
  static Ram* CreateRamClient(std::string endpoint, std::string appid, std::string secret);
  ~Ram();
private:
  Ram(std::string host, std::string appid, std::string secret);
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetProxyHost(std::string proxy_host) {
    if(this->proxy_host_) {
      free(this->proxy_host_);
    }
    this->proxy_host_ = strdup(proxy_host.c_str());
  }
  std::string GetProxyHost() {  return this->proxy_host_;  }
  void SetRegionId(std::string region_id) {
    if(this->region_id_) {
      free(this->region_id_);
    }
    this->region_id_ = strdup(region_id.c_str());
  }
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
  char* appid_;
  char* secret_;
  char* version_;
  char* host_;
  char* proxy_host_;
  bool support_tls_;
  bool use_tls_;
  char* region_id_;
};  //end class
} // end namespace
#endif
