#ifndef ALI_LIST_GROUPS_FOR_USER_TYPESH
#define ALI_LIST_GROUPS_FOR_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListGroupsForUserRequestType {
  std::string user_name;
};
struct ListGroupsForUserGroupType {
  std::string group_name;
  std::string comments;
  std::string join_date;
};
struct ListGroupsForUserResponseType {
  std::vector<ListGroupsForUserGroupType> groups;
};
} // end namespace
#endif
