#ifndef ALI_RAM_LIST_POLICIES_FOR_USER_TYPESH
#define ALI_RAM_LIST_POLICIES_FOR_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListPoliciesForUserRequestType {
  std::string user_name;
};
struct RamListPoliciesForUserPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string attach_date;
};
struct RamListPoliciesForUserResponseType {
  std::vector<RamListPoliciesForUserPolicyType> policies;
};
} // end namespace
#endif
