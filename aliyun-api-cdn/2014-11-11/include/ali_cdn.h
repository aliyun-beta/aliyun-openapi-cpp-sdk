#ifndef ALI_CDNH
#define ALI_CDNH
#include <string>
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
namespace aliyun {
struct CdnErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Cdn {
public:
  static Cdn* CreateCdnClient(std::string endpoint, std::string appid, std::string secret);
private:
  Cdn(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-11-11"),
  host_(host) {}
public:
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
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
