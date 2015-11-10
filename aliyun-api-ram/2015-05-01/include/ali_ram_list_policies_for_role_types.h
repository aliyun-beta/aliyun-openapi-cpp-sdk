#ifndef ALI_RAM_LIST_POLICIES_FOR_ROLE_TYPESH
#define ALI_RAM_LIST_POLICIES_FOR_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListPoliciesForRoleRequestType {
  std::string role_name;
};
struct RamListPoliciesForRolePolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string attach_date;
};
struct RamListPoliciesForRoleResponseType {
  std::vector<RamListPoliciesForRolePolicyType> policies;
};
} // end namespace
#endif
