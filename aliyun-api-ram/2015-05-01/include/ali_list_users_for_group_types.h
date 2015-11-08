#ifndef ALI_LIST_USERS_FOR_GROUP_TYPESH
#define ALI_LIST_USERS_FOR_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListUsersForGroupRequestType {
  std::string group_name;
};
struct ListUsersForGroupUserType {
  std::string user_name;
  std::string display_name;
  std::string join_date;
};
struct ListUsersForGroupResponseType {
  std::vector<ListUsersForGroupUserType> users;
};
} // end namespace
#endif
