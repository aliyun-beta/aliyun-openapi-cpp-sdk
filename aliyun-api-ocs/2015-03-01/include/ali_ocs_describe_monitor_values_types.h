#ifndef ALI_OCS_DESCRIBE_MONITOR_VALUES_TYPESH
#define ALI_OCS_DESCRIBE_MONITOR_VALUES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeMonitorValuesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_ids;
  std::string monitor_keys;
};
struct OcsDescribeMonitorValuesOcsMonitorKeyType {
  std::string monitor_key;
  std::string value;
  std::string unit;
};
struct OcsDescribeMonitorValuesOcsInstanceMonitorType {
  std::vector<OcsDescribeMonitorValuesOcsMonitorKeyType> monitor_keys;
  std::string instance_id;
};
struct OcsDescribeMonitorValuesResponseType {
  std::vector<OcsDescribeMonitorValuesOcsInstanceMonitorType> instance_ids;
  std::string date;
};
} // end namespace
#endif
