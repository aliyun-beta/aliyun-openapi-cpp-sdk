#ifndef ALI_OTS_GET_USER_TYPESH
#define ALI_OTS_GET_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsGetUserQuotaType {
  int instance_quota;
};
struct OtsGetUserUserInfoType {
  OtsGetUserQuotaType quota;
  std::string user_id;
  std::string description;
  std::string create_time;
};
struct OtsGetUserResponseType {
  OtsGetUserUserInfoType user_info;
};
} // end namespace
#endif
