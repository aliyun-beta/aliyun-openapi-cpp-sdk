#ifndef ALI_LIST_USERS_TYPESH
#define ALI_LIST_USERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListUsersRequestType {
};
struct ListUsersUserType {
  std::string user_name;
  std::string comments;
};
struct ListUsersResponseType {
  std::vector<ListUsersUserType> users;
};
} // end namespace
#endif
