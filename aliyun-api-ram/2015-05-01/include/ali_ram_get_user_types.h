#ifndef ALI_RAM_GET_USER_TYPESH
#define ALI_RAM_GET_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetUserRequestType {
  std::string user_name;
};
struct RamGetUserUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
  std::string create_date;
  std::string update_date;
  std::string last_login_date;
};
struct RamGetUserResponseType {
  RamGetUserUserType user;
};
} // end namespace
#endif
