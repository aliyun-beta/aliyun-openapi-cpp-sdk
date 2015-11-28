#ifndef ALI_AASH
#define ALI_AASH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_aas_create_access_key_for_account_types.h"
#include "ali_aas_create_aliyun_account_types.h"
#include "ali_aas_delete_access_key_for_account_types.h"
#include "ali_aas_get_basic_info_for_account_types.h"
#include "ali_aas_list_access_keys_for_account_types.h"
#include "ali_aas_update_access_key_status_for_account_types.h"
#ifdef WIN32
 #ifdef aliyun_api_aas_2015_07_01_EXPORTS
 #define ALIYUN_API_AAS_2015_07_01_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_AAS_2015_07_01_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_AAS_2015_07_01_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct AasErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_AAS_2015_07_01_DLL_EXPORT_IMPORT Aas {
public:
  static Aas* CreateAasClient(std::string endpoint, std::string appid, std::string secret);
  ~Aas();
private:
  Aas(std::string host, std::string appid, std::string secret);
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
  int CreateAccessKeyForAccount(const AasCreateAccessKeyForAccountRequestType& req,
          AasCreateAccessKeyForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int CreateAliyunAccount(const AasCreateAliyunAccountRequestType& req,
          AasCreateAliyunAccountResponseType* resp,
          AasErrorInfo* error_info);

  int DeleteAccessKeyForAccount(const AasDeleteAccessKeyForAccountRequestType& req,
          AasDeleteAccessKeyForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int GetBasicInfoForAccount(const AasGetBasicInfoForAccountRequestType& req,
          AasGetBasicInfoForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int ListAccessKeysForAccount(const AasListAccessKeysForAccountRequestType& req,
          AasListAccessKeysForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int UpdateAccessKeyStatusForAccount(const AasUpdateAccessKeyStatusForAccountRequestType& req,
          AasUpdateAccessKeyStatusForAccountResponseType* resp,
          AasErrorInfo* error_info);

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
