#ifndef ALI_RAM_DETACH_POLICY_FROM_USER_TYPESH
#define ALI_RAM_DETACH_POLICY_FROM_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamDetachPolicyFromUserRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string user_name;
};
struct RamDetachPolicyFromUserResponseType {
};
} // end namespace
#endif
