#ifndef ALI_DETACH_POLICY_FROM_USER_TYPESH
#define ALI_DETACH_POLICY_FROM_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DetachPolicyFromUserRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string user_name;
};
struct DetachPolicyFromUserResponseType {
};
} // end namespace
#endif
