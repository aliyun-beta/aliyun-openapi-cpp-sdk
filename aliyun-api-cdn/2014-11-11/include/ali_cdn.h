#ifndef ALI_CDNH
#define ALI_CDNH
#include <string>
#include "ali_add_cdn_domain_types.h"
#include "ali_delete_cdn_domain_types.h"
#include "ali_describe_cdn_domain_base_detail_types.h"
#include "ali_describe_cdn_domain_detail_types.h"
#include "ali_describe_cdn_domain_logs_types.h"
#include "ali_describe_cdn_monitor_data_types.h"
#include "ali_describe_cdn_service_types.h"
#include "ali_describe_one_minute_data_types.h"
#include "ali_describe_refresh_tasks_types.h"
#include "ali_describe_user_domains_types.h"
#include "ali_modify_cdn_service_types.h"
#include "ali_open_cdn_service_types.h"
#include "ali_push_object_cache_types.h"
#include "ali_refresh_object_caches_types.h"
#include "ali_start_cdn_domain_types.h"
#include "ali_stop_cdn_domain_types.h"
namespace aliyun {
struct AliCdnErrorInfo {
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
  int AddCdnDomain(const AddCdnDomainRequestType& req,
          AddCdnDomainResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DeleteCdnDomain(const DeleteCdnDomainRequestType& req,
          DeleteCdnDomainResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeCdnDomainBaseDetail(const DescribeCdnDomainBaseDetailRequestType& req,
          DescribeCdnDomainBaseDetailResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeCdnDomainDetail(const DescribeCdnDomainDetailRequestType& req,
          DescribeCdnDomainDetailResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeCdnDomainLogs(const DescribeCdnDomainLogsRequestType& req,
          DescribeCdnDomainLogsResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeCdnMonitorData(const DescribeCdnMonitorDataRequestType& req,
          DescribeCdnMonitorDataResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeCdnService(const DescribeCdnServiceRequestType& req,
          DescribeCdnServiceResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeOneMinuteData(const DescribeOneMinuteDataRequestType& req,
          DescribeOneMinuteDataResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeRefreshTasks(const DescribeRefreshTasksRequestType& req,
          DescribeRefreshTasksResponseType* resp,
          AliCdnErrorInfo* error_info);

  int DescribeUserDomains(const DescribeUserDomainsRequestType& req,
          DescribeUserDomainsResponseType* resp,
          AliCdnErrorInfo* error_info);

  int ModifyCdnService(const ModifyCdnServiceRequestType& req,
          ModifyCdnServiceResponseType* resp,
          AliCdnErrorInfo* error_info);

  int OpenCdnService(const OpenCdnServiceRequestType& req,
          OpenCdnServiceResponseType* resp,
          AliCdnErrorInfo* error_info);

  int PushObjectCache(const PushObjectCacheRequestType& req,
          PushObjectCacheResponseType* resp,
          AliCdnErrorInfo* error_info);

  int RefreshObjectCaches(const RefreshObjectCachesRequestType& req,
          RefreshObjectCachesResponseType* resp,
          AliCdnErrorInfo* error_info);

  int StartCdnDomain(const StartCdnDomainRequestType& req,
          StartCdnDomainResponseType* resp,
          AliCdnErrorInfo* error_info);

  int StopCdnDomain(const StopCdnDomainRequestType& req,
          StopCdnDomainResponseType* resp,
          AliCdnErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
