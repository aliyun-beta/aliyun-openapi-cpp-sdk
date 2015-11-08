#ifndef ALI_CREATE_POLICY_TYPESH
#define ALI_CREATE_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreatePolicyRequestType {
  std::string policy_name;
  std::string description;
  std::string policy_document;
};
struct CreatePolicyPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string create_date;
};
struct CreatePolicyResponseType {
  CreatePolicyPolicyType policy;
};
} // end namespace
#endif
