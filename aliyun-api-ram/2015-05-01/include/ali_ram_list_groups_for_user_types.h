#ifndef ALI_RAM_LIST_GROUPS_FOR_USER_TYPESH
#define ALI_RAM_LIST_GROUPS_FOR_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListGroupsForUserRequestType {
  std::string user_name;
};
struct RamListGroupsForUserGroupType {
  std::string group_name;
  std::string comments;
  std::string join_date;
};
struct RamListGroupsForUserResponseType {
  std::vector<RamListGroupsForUserGroupType> groups;
};
} // end namespace
#endif
