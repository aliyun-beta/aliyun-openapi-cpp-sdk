#ifndef ALI_RAM_ATTACH_POLICY_TO_ROLE_TYPESH
#define ALI_RAM_ATTACH_POLICY_TO_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamAttachPolicyToRoleRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string role_name;
};
struct RamAttachPolicyToRoleResponseType {
};
} // end namespace
#endif
