#ifndef ALI_OSS_ADMINH
#define ALI_OSS_ADMINH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_ossadmin_restart_oss_types.h"
#include "ali_ossadmin_stop_oss_types.h"
#ifdef WIN32
 #ifdef aliyun_api_ossadmin_2014_03_26_EXPORTS
 #define ALIYUN_API_OSSADMIN_2014_03_26_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_OSSADMIN_2014_03_26_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_OSSADMIN_2014_03_26_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct OssAdminErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_OSSADMIN_2014_03_26_DLL_EXPORT_IMPORT OssAdmin {
public:
  static OssAdmin* CreateOssAdminClient(std::string endpoint, std::string appid, std::string secret);
  ~OssAdmin();
private:
  OssAdmin(std::string host, std::string appid, std::string secret);
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
  int restartOss(const OssAdminrestartOssRequestType& req,
          OssAdminrestartOssResponseType* resp,
          OssAdminErrorInfo* error_info);

  int stopOss(const OssAdminstopOssRequestType& req,
          OssAdminstopOssResponseType* resp,
          OssAdminErrorInfo* error_info);

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
