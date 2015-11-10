#ifndef ALI_RAM_CREATE_POLICY_VERSION_TYPESH
#define ALI_RAM_CREATE_POLICY_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamCreatePolicyVersionRequestType {
  std::string policy_name;
  std::string policy_document;
  std::string set_as_default;
};
struct RamCreatePolicyVersionPolicyVersionType {
  std::string version_id;
  bool is_default_version;
  std::string policy_document;
  std::string create_date;
};
struct RamCreatePolicyVersionResponseType {
  RamCreatePolicyVersionPolicyVersionType policy_version;
};
} // end namespace
#endif
