#ifndef ALI_OCS_DESCRIBE_HISTORY_MONITOR_VALUES_TYPESH
#define ALI_OCS_DESCRIBE_HISTORY_MONITOR_VALUES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeHistoryMonitorValuesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string monitor_keys;
  std::string start_time;
  std::string end_time;
  std::string interval_for_history;
};
struct OcsDescribeHistoryMonitorValuesResponseType {
  std::string monitor_history;
};
} // end namespace
#endif
