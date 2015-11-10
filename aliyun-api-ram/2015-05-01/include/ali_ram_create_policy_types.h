#ifndef ALI_RAM_CREATE_POLICY_TYPESH
#define ALI_RAM_CREATE_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamCreatePolicyRequestType {
  std::string policy_name;
  std::string description;
  std::string policy_document;
};
struct RamCreatePolicyPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string create_date;
};
struct RamCreatePolicyResponseType {
  RamCreatePolicyPolicyType policy;
};
} // end namespace
#endif
