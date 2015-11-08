#ifndef ALI_DESCRIBE_MONITOR_ITEMS_TYPESH
#define ALI_DESCRIBE_MONITOR_ITEMS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeMonitorItemsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct DescribeMonitorItemsOcsMonitorItemType {
  std::string monitor_key;
  std::string unit;
};
struct DescribeMonitorItemsResponseType {
  std::vector<DescribeMonitorItemsOcsMonitorItemType> monitor_items;
};
} // end namespace
#endif
