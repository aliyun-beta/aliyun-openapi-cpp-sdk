#ifndef ALI_PUT_USER_POLICY_TYPESH
#define ALI_PUT_USER_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PutUserPolicyRequestType {
  std::string user_name;
  std::string policy_name;
  std::string policy_document;
};
struct PutUserPolicyResponseType {
};
} // end namespace
#endif
