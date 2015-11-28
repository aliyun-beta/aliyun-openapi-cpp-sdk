#ifndef ALI_CDNH
#define ALI_CDNH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_cdn_add_cdn_domain_types.h"
#include "ali_cdn_delete_cdn_domain_types.h"
#include "ali_cdn_describe_cdn_domain_base_detail_types.h"
#include "ali_cdn_describe_cdn_domain_detail_types.h"
#include "ali_cdn_describe_cdn_domain_logs_types.h"
#include "ali_cdn_describe_cdn_monitor_data_types.h"
#include "ali_cdn_describe_cdn_service_types.h"
#include "ali_cdn_describe_one_minute_data_types.h"
#include "ali_cdn_describe_refresh_tasks_types.h"
#include "ali_cdn_describe_user_domains_types.h"
#include "ali_cdn_modify_cdn_service_types.h"
#include "ali_cdn_open_cdn_service_types.h"
#include "ali_cdn_push_object_cache_types.h"
#include "ali_cdn_refresh_object_caches_types.h"
#include "ali_cdn_start_cdn_domain_types.h"
#include "ali_cdn_stop_cdn_domain_types.h"
#ifdef WIN32
 #ifdef aliyun_api_cdn_2014_11_11_EXPORTS
 #define ALIYUN_API_CDN_2014_11_11_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_CDN_2014_11_11_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_CDN_2014_11_11_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct CdnErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_CDN_2014_11_11_DLL_EXPORT_IMPORT Cdn {
public:
  static Cdn* CreateCdnClient(std::string endpoint, std::string appid, std::string secret);
  ~Cdn();
private:
  Cdn(std::string host, std::string appid, std::string secret);
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
  int AddCdnDomain(const CdnAddCdnDomainRequestType& req,
          CdnAddCdnDomainResponseType* resp,
          CdnErrorInfo* error_info);

  int DeleteCdnDomain(const CdnDeleteCdnDomainRequestType& req,
          CdnDeleteCdnDomainResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeCdnDomainBaseDetail(const CdnDescribeCdnDomainBaseDetailRequestType& req,
          CdnDescribeCdnDomainBaseDetailResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeCdnDomainDetail(const CdnDescribeCdnDomainDetailRequestType& req,
          CdnDescribeCdnDomainDetailResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeCdnDomainLogs(const CdnDescribeCdnDomainLogsRequestType& req,
          CdnDescribeCdnDomainLogsResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeCdnMonitorData(const CdnDescribeCdnMonitorDataRequestType& req,
          CdnDescribeCdnMonitorDataResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeCdnService(const CdnDescribeCdnServiceRequestType& req,
          CdnDescribeCdnServiceResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeOneMinuteData(const CdnDescribeOneMinuteDataRequestType& req,
          CdnDescribeOneMinuteDataResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeRefreshTasks(const CdnDescribeRefreshTasksRequestType& req,
          CdnDescribeRefreshTasksResponseType* resp,
          CdnErrorInfo* error_info);

  int DescribeUserDomains(const CdnDescribeUserDomainsRequestType& req,
          CdnDescribeUserDomainsResponseType* resp,
          CdnErrorInfo* error_info);

  int ModifyCdnService(const CdnModifyCdnServiceRequestType& req,
          CdnModifyCdnServiceResponseType* resp,
          CdnErrorInfo* error_info);

  int OpenCdnService(const CdnOpenCdnServiceRequestType& req,
          CdnOpenCdnServiceResponseType* resp,
          CdnErrorInfo* error_info);

  int PushObjectCache(const CdnPushObjectCacheRequestType& req,
          CdnPushObjectCacheResponseType* resp,
          CdnErrorInfo* error_info);

  int RefreshObjectCaches(const CdnRefreshObjectCachesRequestType& req,
          CdnRefreshObjectCachesResponseType* resp,
          CdnErrorInfo* error_info);

  int StartCdnDomain(const CdnStartCdnDomainRequestType& req,
          CdnStartCdnDomainResponseType* resp,
          CdnErrorInfo* error_info);

  int StopCdnDomain(const CdnStopCdnDomainRequestType& req,
          CdnStopCdnDomainResponseType* resp,
          CdnErrorInfo* error_info);

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
