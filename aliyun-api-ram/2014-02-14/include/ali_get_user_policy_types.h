#ifndef ALI_GET_USER_POLICY_TYPESH
#define ALI_GET_USER_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetUserPolicyRequestType {
  std::string user_name;
  std::string policy_name;
};
struct GetUserPolicyResponseType {
  std::string user_name;
  std::string policy_name;
  std::string policy_document;
};
} // end namespace
#endif
