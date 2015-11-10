#ifndef ALI_RAM_LIST_USERS_TYPESH
#define ALI_RAM_LIST_USERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListUsersRequestType {
};
struct RamListUsersUserType {
  std::string user_name;
  std::string comments;
};
struct RamListUsersResponseType {
  std::vector<RamListUsersUserType> users;
};
} // end namespace
#endif
