#ifndef ALI_OCS_DESCRIBE_MONITOR_ITEMS_TYPESH
#define ALI_OCS_DESCRIBE_MONITOR_ITEMS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeMonitorItemsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct OcsDescribeMonitorItemsOcsMonitorItemType {
  std::string monitor_key;
  std::string unit;
};
struct OcsDescribeMonitorItemsResponseType {
  std::vector<OcsDescribeMonitorItemsOcsMonitorItemType> monitor_items;
};
} // end namespace
#endif
