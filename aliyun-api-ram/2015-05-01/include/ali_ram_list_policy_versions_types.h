#ifndef ALI_RAM_LIST_POLICY_VERSIONS_TYPESH
#define ALI_RAM_LIST_POLICY_VERSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListPolicyVersionsRequestType {
  std::string policy_type;
  std::string policy_name;
};
struct RamListPolicyVersionsPolicyVersionType {
  std::string version_id;
  bool is_default_version;
  std::string policy_document;
  std::string create_date;
};
struct RamListPolicyVersionsResponseType {
  std::vector<RamListPolicyVersionsPolicyVersionType> policy_versions;
};
} // end namespace
#endif
