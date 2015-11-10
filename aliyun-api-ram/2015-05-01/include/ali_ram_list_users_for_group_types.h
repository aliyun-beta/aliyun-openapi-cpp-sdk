#ifndef ALI_RAM_LIST_USERS_FOR_GROUP_TYPESH
#define ALI_RAM_LIST_USERS_FOR_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListUsersForGroupRequestType {
  std::string group_name;
};
struct RamListUsersForGroupUserType {
  std::string user_name;
  std::string display_name;
  std::string join_date;
};
struct RamListUsersForGroupResponseType {
  std::vector<RamListUsersForGroupUserType> users;
};
} // end namespace
#endif
