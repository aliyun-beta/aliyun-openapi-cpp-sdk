#ifndef ALI_RAM_LIST_GROUPS_TYPESH
#define ALI_RAM_LIST_GROUPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListGroupsRequestType {
  std::string marker;
  std::string max_items;
};
struct RamListGroupsGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct RamListGroupsResponseType {
  std::vector<RamListGroupsGroupType> groups;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
