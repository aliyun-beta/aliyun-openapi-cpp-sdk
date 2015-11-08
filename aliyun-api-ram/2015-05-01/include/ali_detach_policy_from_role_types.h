#ifndef ALI_DETACH_POLICY_FROM_ROLE_TYPESH
#define ALI_DETACH_POLICY_FROM_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DetachPolicyFromRoleRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string role_name;
};
struct DetachPolicyFromRoleResponseType {
};
} // end namespace
#endif
