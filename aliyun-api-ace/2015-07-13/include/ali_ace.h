#ifndef ALI_ACEH
#define ALI_ACEH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_ace_describe_app_logs_types.h"
#include "ali_ace_get_monitor_data_types.h"
#ifdef WIN32
 #ifdef aliyun_api_ace_2015_07_13_EXPORTS
 #define ALIYUN_API_ACE_2015_07_13_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_ACE_2015_07_13_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_ACE_2015_07_13_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct AceErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_ACE_2015_07_13_DLL_EXPORT_IMPORT Ace {
public:
  static Ace* CreateAceClient(std::string endpoint, std::string appid, std::string secret);
  ~Ace();
private:
  Ace(std::string host, std::string appid, std::string secret);
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
  int DescribeAppLogs(const AceDescribeAppLogsRequestType& req,
          AceDescribeAppLogsResponseType* resp,
          AceErrorInfo* error_info);

  int GetMonitorData(const AceGetMonitorDataRequestType& req,
          AceGetMonitorDataResponseType* resp,
          AceErrorInfo* error_info);

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
