#ifndef ALI_LIST_POLICIES_FOR_ROLE_TYPESH
#define ALI_LIST_POLICIES_FOR_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListPoliciesForRoleRequestType {
  std::string role_name;
};
struct ListPoliciesForRolePolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string attach_date;
};
struct ListPoliciesForRoleResponseType {
  std::vector<ListPoliciesForRolePolicyType> policies;
};
} // end namespace
#endif
