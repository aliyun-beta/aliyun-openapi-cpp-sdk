#ifndef ALI_GET_POLICY_TYPESH
#define ALI_GET_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetPolicyRequestType {
  std::string policy_type;
  std::string policy_name;
};
struct GetPolicyPolicyType {
  std::string policy_name;
  std::string policy_type;
  std::string description;
  std::string default_version;
  std::string policy_document;
  std::string create_date;
  std::string update_date;
  int attachment_count;
};
struct GetPolicyResponseType {
  GetPolicyPolicyType policy;
};
} // end namespace
#endif
