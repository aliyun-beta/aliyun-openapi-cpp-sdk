#ifndef ALI_ATTACH_POLICY_TO_USER_TYPESH
#define ALI_ATTACH_POLICY_TO_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AttachPolicyToUserRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string user_name;
};
struct AttachPolicyToUserResponseType {
};
} // end namespace
#endif
