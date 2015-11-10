#ifndef ALI_RAM_LIST_POLICIES_FOR_GROUP_TYPESH
#define ALI_RAM_LIST_POLICIES_FOR_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListPoliciesForGroupRequestType {
  std::string group_name;
};
struct RamListPoliciesForGroupPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string attach_date;
};
struct RamListPoliciesForGroupResponseType {
  std::vector<RamListPoliciesForGroupPolicyType> policies;
};
} // end namespace
#endif
