#ifndef ALI_UBSMSH
#define ALI_UBSMSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_ubsms_describe_business_status_types.h"
#include "ali_ubsms_notify_user_business_command_types.h"
#include "ali_ubsms_set_user_business_status_types.h"
#include "ali_ubsms_set_user_business_statuses_types.h"
#ifdef WIN32
 #ifdef aliyun_api_ubsms_2015_06_23_EXPORTS
 #define ALIYUN_API_UBSMS_2015_06_23_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_UBSMS_2015_06_23_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_UBSMS_2015_06_23_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct UbsmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_UBSMS_2015_06_23_DLL_EXPORT_IMPORT Ubsms {
public:
  static Ubsms* CreateUbsmsClient(std::string endpoint, std::string appid, std::string secret);
  ~Ubsms();
private:
  Ubsms(std::string host, std::string appid, std::string secret);
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
  int DescribeBusinessStatus(const UbsmsDescribeBusinessStatusRequestType& req,
          UbsmsDescribeBusinessStatusResponseType* resp,
          UbsmsErrorInfo* error_info);

  int NotifyUserBusinessCommand(const UbsmsNotifyUserBusinessCommandRequestType& req,
          UbsmsNotifyUserBusinessCommandResponseType* resp,
          UbsmsErrorInfo* error_info);

  int SetUserBusinessStatus(const UbsmsSetUserBusinessStatusRequestType& req,
          UbsmsSetUserBusinessStatusResponseType* resp,
          UbsmsErrorInfo* error_info);

  int SetUserBusinessStatuses(const UbsmsSetUserBusinessStatusesRequestType& req,
          UbsmsSetUserBusinessStatusesResponseType* resp,
          UbsmsErrorInfo* error_info);

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
