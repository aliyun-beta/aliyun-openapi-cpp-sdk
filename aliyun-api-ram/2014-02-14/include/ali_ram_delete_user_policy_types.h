#ifndef ALI_RAM_DELETE_USER_POLICY_TYPESH
#define ALI_RAM_DELETE_USER_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamDeleteUserPolicyRequestType {
  std::string user_name;
  std::string policy_name;
};
struct RamDeleteUserPolicyResponseType {
};
} // end namespace
#endif
