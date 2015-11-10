#ifndef ALI_RAM_LIST_USERS_TYPESH
#define ALI_RAM_LIST_USERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListUsersRequestType {
  std::string marker;
  std::string max_items;
};
struct RamListUsersUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct RamListUsersResponseType {
  std::vector<RamListUsersUserType> users;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
