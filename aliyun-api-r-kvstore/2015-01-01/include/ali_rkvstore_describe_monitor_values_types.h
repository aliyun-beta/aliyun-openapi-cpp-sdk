#ifndef ALI_RKVSTORE_DESCRIBE_MONITOR_VALUES_TYPESH
#define ALI_RKVSTORE_DESCRIBE_MONITOR_VALUES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeMonitorValuesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_ids;
  std::string monitor_keys;
};
struct RkvstoreDescribeMonitorValuesKVStoreMonitorKeyType {
  std::string monitor_key;
  std::string value;
  std::string unit;
};
struct RkvstoreDescribeMonitorValuesKVStoreInstanceMonitorType {
  std::vector<RkvstoreDescribeMonitorValuesKVStoreMonitorKeyType> monitor_keys;
  std::string instance_id;
};
struct RkvstoreDescribeMonitorValuesResponseType {
  std::vector<RkvstoreDescribeMonitorValuesKVStoreInstanceMonitorType> instance_ids;
  std::string date;
};
} // end namespace
#endif
