#ifndef ALI_RAM_GET_USER_POLICY_TYPESH
#define ALI_RAM_GET_USER_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetUserPolicyRequestType {
  std::string user_name;
  std::string policy_name;
};
struct RamGetUserPolicyResponseType {
  std::string user_name;
  std::string policy_name;
  std::string policy_document;
};
} // end namespace
#endif
