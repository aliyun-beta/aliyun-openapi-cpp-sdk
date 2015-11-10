#ifndef ALI_RAM_PUT_USER_POLICY_TYPESH
#define ALI_RAM_PUT_USER_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamPutUserPolicyRequestType {
  std::string user_name;
  std::string policy_name;
  std::string policy_document;
};
struct RamPutUserPolicyResponseType {
};
} // end namespace
#endif
