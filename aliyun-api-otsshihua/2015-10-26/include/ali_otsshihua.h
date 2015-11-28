#ifndef ALI_OTS_SHIHUAH
#define ALI_OTS_SHIHUAH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_otsshihua_delete_instance_types.h"
#include "ali_otsshihua_get_instance_types.h"
#include "ali_otsshihua_insert_instance_types.h"
#include "ali_otsshihua_list_instance_types.h"
#ifdef WIN32
 #ifdef aliyun_api_otsshihua_2015_10_26_EXPORTS
 #define ALIYUN_API_OTSSHIHUA_2015_10_26_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_OTSSHIHUA_2015_10_26_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_OTSSHIHUA_2015_10_26_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct OtsShihuaErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_OTSSHIHUA_2015_10_26_DLL_EXPORT_IMPORT OtsShihua {
public:
  static OtsShihua* CreateOtsShihuaClient(std::string endpoint, std::string appid, std::string secret);
  ~OtsShihua();
private:
  OtsShihua(std::string host, std::string appid, std::string secret);
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
  int DeleteInstance(const OtsShihuaDeleteInstanceRequestType& req,
          OtsShihuaDeleteInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

  int GetInstance(const OtsShihuaGetInstanceRequestType& req,
          OtsShihuaGetInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

  int InsertInstance(const OtsShihuaInsertInstanceRequestType& req,
          OtsShihuaInsertInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

  int ListInstance(OtsShihuaListInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

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
