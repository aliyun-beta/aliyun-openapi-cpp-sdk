#ifndef ALI_RAM_GET_POLICY_VERSION_TYPESH
#define ALI_RAM_GET_POLICY_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetPolicyVersionRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string version_id;
};
struct RamGetPolicyVersionPolicyVersionType {
  std::string version_id;
  bool is_default_version;
  std::string policy_document;
  std::string create_date;
};
struct RamGetPolicyVersionResponseType {
  RamGetPolicyVersionPolicyVersionType policy_version;
};
} // end namespace
#endif
