#ifndef ALI_LIST_GROUPS_TYPESH
#define ALI_LIST_GROUPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListGroupsRequestType {
  std::string marker;
  std::string max_items;
};
struct ListGroupsGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct ListGroupsResponseType {
  std::vector<ListGroupsGroupType> groups;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
