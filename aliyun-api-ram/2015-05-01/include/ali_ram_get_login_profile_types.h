#ifndef ALI_RAM_GET_LOGIN_PROFILE_TYPESH
#define ALI_RAM_GET_LOGIN_PROFILE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetLoginProfileRequestType {
  std::string user_name;
};
struct RamGetLoginProfileLoginProfileType {
  std::string user_name;
  bool password_reset_required;
  bool mf_abind_required;
  std::string create_date;
};
struct RamGetLoginProfileResponseType {
  RamGetLoginProfileLoginProfileType login_profile;
};
} // end namespace
#endif
