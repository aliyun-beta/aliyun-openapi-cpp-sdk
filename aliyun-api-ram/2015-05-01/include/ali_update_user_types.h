#ifndef ALI_UPDATE_USER_TYPESH
#define ALI_UPDATE_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateUserRequestType {
  std::string user_name;
  std::string new_user_name;
  std::string new_display_name;
  std::string new_mobile_phone;
  std::string new_email;
  std::string new_comments;
};
struct UpdateUserUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string mobile_phone;
  std::string email;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct UpdateUserResponseType {
  UpdateUserUserType user;
};
} // end namespace
#endif
