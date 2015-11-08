#ifndef ALI_LIST_POLICIES_FOR_GROUP_TYPESH
#define ALI_LIST_POLICIES_FOR_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListPoliciesForGroupRequestType {
  std::string group_name;
};
struct ListPoliciesForGroupPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string attach_date;
};
struct ListPoliciesForGroupResponseType {
  std::vector<ListPoliciesForGroupPolicyType> policies;
};
} // end namespace
#endif
