#ifndef ALI_OTS_FINANCEH
#define ALI_OTS_FINANCEH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_otsfinance_delete_instance_types.h"
#include "ali_otsfinance_delete_user_types.h"
#include "ali_otsfinance_get_instance_types.h"
#include "ali_otsfinance_get_user_types.h"
#include "ali_otsfinance_insert_instance_types.h"
#include "ali_otsfinance_insert_user_types.h"
#include "ali_otsfinance_list_instance_types.h"
#include "ali_otsfinance_update_instance_types.h"
#include "ali_otsfinance_update_user_types.h"
#ifdef WIN32
 #ifdef aliyun_api_otsfinance_2013_09_12_EXPORTS
 #define ALIYUN_API_OTSFINANCE_2013_09_12_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_OTSFINANCE_2013_09_12_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_OTSFINANCE_2013_09_12_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct OtsFinanceErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_OTSFINANCE_2013_09_12_DLL_EXPORT_IMPORT OtsFinance {
public:
  static OtsFinance* CreateOtsFinanceClient(std::string endpoint, std::string appid, std::string secret);
  ~OtsFinance();
private:
  OtsFinance(std::string host, std::string appid, std::string secret);
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
  int DeleteInstance(const OtsFinanceDeleteInstanceRequestType& req,
          OtsFinanceDeleteInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int DeleteUser(OtsFinanceDeleteUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int GetInstance(const OtsFinanceGetInstanceRequestType& req,
          OtsFinanceGetInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int GetUser(OtsFinanceGetUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int InsertInstance(const OtsFinanceInsertInstanceRequestType& req,
          OtsFinanceInsertInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int InsertUser(const OtsFinanceInsertUserRequestType& req,
          OtsFinanceInsertUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int ListInstance(OtsFinanceListInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int UpdateInstance(const OtsFinanceUpdateInstanceRequestType& req,
          OtsFinanceUpdateInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int UpdateUser(const OtsFinanceUpdateUserRequestType& req,
          OtsFinanceUpdateUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

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
