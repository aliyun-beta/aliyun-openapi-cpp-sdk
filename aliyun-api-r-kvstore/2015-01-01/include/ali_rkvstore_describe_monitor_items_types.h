#ifndef ALI_RKVSTORE_DESCRIBE_MONITOR_ITEMS_TYPESH
#define ALI_RKVSTORE_DESCRIBE_MONITOR_ITEMS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeMonitorItemsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct RkvstoreDescribeMonitorItemsKVStoreMonitorItemType {
  std::string monitor_key;
  std::string unit;
};
struct RkvstoreDescribeMonitorItemsResponseType {
  std::vector<RkvstoreDescribeMonitorItemsKVStoreMonitorItemType> monitor_items;
};
} // end namespace
#endif
