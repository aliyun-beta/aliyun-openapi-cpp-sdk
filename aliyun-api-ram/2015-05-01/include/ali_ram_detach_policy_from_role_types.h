#ifndef ALI_RAM_DETACH_POLICY_FROM_ROLE_TYPESH
#define ALI_RAM_DETACH_POLICY_FROM_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamDetachPolicyFromRoleRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string role_name;
};
struct RamDetachPolicyFromRoleResponseType {
};
} // end namespace
#endif
