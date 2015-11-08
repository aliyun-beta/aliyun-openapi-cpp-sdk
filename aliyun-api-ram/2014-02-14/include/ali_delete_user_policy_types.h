#ifndef ALI_DELETE_USER_POLICY_TYPESH
#define ALI_DELETE_USER_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteUserPolicyRequestType {
  std::string user_name;
  std::string policy_name;
};
struct DeleteUserPolicyResponseType {
};
} // end namespace
#endif
