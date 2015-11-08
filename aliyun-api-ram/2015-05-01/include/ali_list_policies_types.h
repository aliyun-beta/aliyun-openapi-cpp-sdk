#ifndef ALI_LIST_POLICIES_TYPESH
#define ALI_LIST_POLICIES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListPoliciesRequestType {
  std::string policy_type;
  std::string marker;
  std::string max_items;
};
struct ListPoliciesPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string create_date;
  std::string update_date;
  int attachment_count;
};
struct ListPoliciesResponseType {
  std::vector<ListPoliciesPolicyType> policies;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
