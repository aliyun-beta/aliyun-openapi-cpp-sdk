#ifndef ALI_RAM_CREATE_USER_TYPESH
#define ALI_RAM_CREATE_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamCreateUserRequestType {
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
};
struct RamCreateUserUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
  std::string create_date;
};
struct RamCreateUserResponseType {
  RamCreateUserUserType user;
};
} // end namespace
#endif
