#ifndef ALI_CREATE_LOGIN_PROFILE_TYPESH
#define ALI_CREATE_LOGIN_PROFILE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateLoginProfileRequestType {
  std::string user_name;
  std::string password;
  std::string password_reset_required;
  std::string mf_abind_required;
};
struct CreateLoginProfileLoginProfileType {
  std::string user_name;
  bool password_reset_required;
  bool mf_abind_required;
  std::string create_date;
};
struct CreateLoginProfileResponseType {
  CreateLoginProfileLoginProfileType login_profile;
};
} // end namespace
#endif
