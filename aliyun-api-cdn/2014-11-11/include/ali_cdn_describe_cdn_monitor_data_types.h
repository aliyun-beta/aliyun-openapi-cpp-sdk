#ifndef ALI_CDN_DESCRIBE_CDN_MONITOR_DATA_TYPESH
#define ALI_CDN_DESCRIBE_CDN_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnDescribeCdnMonitorDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string start_time;
  std::string end_time;
};
struct CdnDescribeCdnMonitorDataCDNMonitorDataType {
  std::string time_stamp;
  std::string query_per_second;
  std::string bytes_per_second;
  std::string bytes_hit_rate;
  std::string request_hit_rate;
  std::string average_object_size;
};
struct CdnDescribeCdnMonitorDataResponseType {
  std::vector<CdnDescribeCdnMonitorDataCDNMonitorDataType> monitor_datas;
  std::string domain_name;
  long monitor_interval;
  std::string start_time;
  std::string end_time;
};
} // end namespace
#endif
