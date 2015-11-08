#ifndef ALI_CREATE_USER_TYPESH
#define ALI_CREATE_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateUserRequestType {
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
};
struct CreateUserUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
  std::string create_date;
};
struct CreateUserResponseType {
  CreateUserUserType user;
};
} // end namespace
#endif
