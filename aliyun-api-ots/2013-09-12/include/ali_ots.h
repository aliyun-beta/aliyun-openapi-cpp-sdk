#ifndef ALI_OTSH
#define ALI_OTSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_ots_delete_instance_types.h"
#include "ali_ots_delete_user_types.h"
#include "ali_ots_get_instance_types.h"
#include "ali_ots_get_user_types.h"
#include "ali_ots_insert_instance_types.h"
#include "ali_ots_insert_user_types.h"
#include "ali_ots_list_instance_types.h"
#include "ali_ots_update_instance_types.h"
#include "ali_ots_update_user_types.h"
#ifdef WIN32
 #ifdef aliyun_api_ots_2013_09_12_EXPORTS
 #define ALIYUN_API_OTS_2013_09_12_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_OTS_2013_09_12_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_OTS_2013_09_12_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct OtsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_OTS_2013_09_12_DLL_EXPORT_IMPORT Ots {
public:
  static Ots* CreateOtsClient(std::string endpoint, std::string appid, std::string secret);
  ~Ots();
private:
  Ots(std::string host, std::string appid, std::string secret);
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
  int DeleteInstance(const OtsDeleteInstanceRequestType& req,
          OtsDeleteInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int DeleteUser(OtsDeleteUserResponseType* resp,
          OtsErrorInfo* error_info);

  int GetInstance(const OtsGetInstanceRequestType& req,
          OtsGetInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int GetUser(OtsGetUserResponseType* resp,
          OtsErrorInfo* error_info);

  int InsertInstance(const OtsInsertInstanceRequestType& req,
          OtsInsertInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int InsertUser(const OtsInsertUserRequestType& req,
          OtsInsertUserResponseType* resp,
          OtsErrorInfo* error_info);

  int ListInstance(OtsListInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int UpdateInstance(const OtsUpdateInstanceRequestType& req,
          OtsUpdateInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int UpdateUser(const OtsUpdateUserRequestType& req,
          OtsUpdateUserResponseType* resp,
          OtsErrorInfo* error_info);

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
