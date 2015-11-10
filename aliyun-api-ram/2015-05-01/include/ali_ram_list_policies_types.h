#ifndef ALI_RAM_LIST_POLICIES_TYPESH
#define ALI_RAM_LIST_POLICIES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListPoliciesRequestType {
  std::string policy_type;
  std::string marker;
  std::string max_items;
};
struct RamListPoliciesPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string create_date;
  std::string update_date;
  int attachment_count;
};
struct RamListPoliciesResponseType {
  std::vector<RamListPoliciesPolicyType> policies;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
