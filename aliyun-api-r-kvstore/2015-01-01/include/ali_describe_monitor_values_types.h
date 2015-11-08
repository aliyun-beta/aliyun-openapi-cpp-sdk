#ifndef ALI_DESCRIBE_MONITOR_VALUES_TYPESH
#define ALI_DESCRIBE_MONITOR_VALUES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeMonitorValuesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_ids;
  std::string monitor_keys;
};
struct DescribeMonitorValuesKVStoreMonitorKeyType {
  std::string monitor_key;
  std::string value;
  std::string unit;
};
struct DescribeMonitorValuesKVStoreInstanceMonitorType {
  std::vector<DescribeMonitorValuesKVStoreMonitorKeyType> monitor_keys;
  std::string instance_id;
};
struct DescribeMonitorValuesResponseType {
  std::vector<DescribeMonitorValuesKVStoreInstanceMonitorType> instance_ids;
  std::string date;
};
} // end namespace
#endif
