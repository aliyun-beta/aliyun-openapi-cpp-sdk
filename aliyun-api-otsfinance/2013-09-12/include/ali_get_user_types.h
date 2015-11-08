#ifndef ALI_GET_USER_TYPESH
#define ALI_GET_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetUserRequestType {
};
struct GetUserQuotaType {
  int instance_quota;
};
struct GetUserUserInfoType {
  GetUserQuotaType quota;
  std::string user_id;
  std::string description;
  std::string create_time;
};
struct GetUserResponseType {
  GetUserUserInfoType user_info;
};
} // end namespace
#endif
