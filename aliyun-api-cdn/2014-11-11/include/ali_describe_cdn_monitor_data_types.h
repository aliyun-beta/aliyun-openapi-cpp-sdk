#ifndef ALI_DESCRIBE_CDN_MONITOR_DATA_TYPESH
#define ALI_DESCRIBE_CDN_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeCdnMonitorDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string start_time;
  std::string end_time;
};
struct DescribeCdnMonitorDataCDNMonitorDataType {
  std::string time_stamp;
  std::string query_per_second;
  std::string bytes_per_second;
  std::string bytes_hit_rate;
  std::string request_hit_rate;
  std::string average_object_size;
};
struct DescribeCdnMonitorDataResponseType {
  std::vector<DescribeCdnMonitorDataCDNMonitorDataType> monitor_datas;
  std::string domain_name;
  long monitor_interval;
  std::string start_time;
  std::string end_time;
};
} // end namespace
#endif
