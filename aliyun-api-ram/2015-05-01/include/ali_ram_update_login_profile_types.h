#ifndef ALI_RAM_UPDATE_LOGIN_PROFILE_TYPESH
#define ALI_RAM_UPDATE_LOGIN_PROFILE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamUpdateLoginProfileRequestType {
  std::string user_name;
  std::string password;
  std::string password_reset_required;
  std::string mf_abind_required;
};
struct RamUpdateLoginProfileResponseType {
};
} // end namespace
#endif
