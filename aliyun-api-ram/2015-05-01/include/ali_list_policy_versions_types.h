#ifndef ALI_LIST_POLICY_VERSIONS_TYPESH
#define ALI_LIST_POLICY_VERSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListPolicyVersionsRequestType {
  std::string policy_type;
  std::string policy_name;
};
struct ListPolicyVersionsPolicyVersionType {
  std::string version_id;
  bool is_default_version;
  std::string policy_document;
  std::string create_date;
};
struct ListPolicyVersionsResponseType {
  std::vector<ListPolicyVersionsPolicyVersionType> policy_versions;
};
} // end namespace
#endif
