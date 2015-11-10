#ifndef ALI_RAM_UPDATE_USER_TYPESH
#define ALI_RAM_UPDATE_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamUpdateUserRequestType {
  std::string user_name;
  std::string new_user_name;
  std::string new_display_name;
  std::string new_mobile_phone;
  std::string new_email;
  std::string new_comments;
};
struct RamUpdateUserUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct RamUpdateUserResponseType {
  RamUpdateUserUserType user;
};
} // end namespace
#endif
