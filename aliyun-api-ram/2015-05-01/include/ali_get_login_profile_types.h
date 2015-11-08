#ifndef ALI_GET_LOGIN_PROFILE_TYPESH
#define ALI_GET_LOGIN_PROFILE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetLoginProfileRequestType {
  std::string user_name;
};
struct GetLoginProfileLoginProfileType {
  std::string user_name;
  bool password_reset_required;
  bool mf_abind_required;
  std::string create_date;
};
struct GetLoginProfileResponseType {
  GetLoginProfileLoginProfileType login_profile;
};
} // end namespace
#endif
