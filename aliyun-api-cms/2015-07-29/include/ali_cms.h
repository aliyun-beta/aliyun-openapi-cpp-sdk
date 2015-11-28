#ifndef ALI_CMSH
#define ALI_CMSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_cms_describe_metric_datum_types.h"
#include "ali_cms_put_metric_datum_types.h"
#ifdef WIN32
 #ifdef aliyun_api_cms_2015_07_29_EXPORTS
 #define ALIYUN_API_CMS_2015_07_29_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_CMS_2015_07_29_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_CMS_2015_07_29_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct CmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_CMS_2015_07_29_DLL_EXPORT_IMPORT Cms {
public:
  static Cms* CreateCmsClient(std::string endpoint, std::string appid, std::string secret);
  ~Cms();
private:
  Cms(std::string host, std::string appid, std::string secret);
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
  int DescribeMetricDatum(const CmsDescribeMetricDatumRequestType& req,
          CmsDescribeMetricDatumResponseType* resp,
          CmsErrorInfo* error_info);

  int PutMetricDatum(const CmsPutMetricDatumRequestType& req,
          CmsPutMetricDatumResponseType* resp,
          CmsErrorInfo* error_info);

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
