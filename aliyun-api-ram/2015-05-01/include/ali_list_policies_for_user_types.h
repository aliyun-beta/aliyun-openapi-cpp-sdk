#ifndef ALI_LIST_POLICIES_FOR_USER_TYPESH
#define ALI_LIST_POLICIES_FOR_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListPoliciesForUserRequestType {
  std::string user_name;
};
struct ListPoliciesForUserPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string attach_date;
};
struct ListPoliciesForUserResponseType {
  std::vector<ListPoliciesForUserPolicyType> policies;
};
} // end namespace
#endif
