#ifndef ALI_DETACH_POLICY_FROM_GROUP_TYPESH
#define ALI_DETACH_POLICY_FROM_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DetachPolicyFromGroupRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string group_name;
};
struct DetachPolicyFromGroupResponseType {
};
} // end namespace
#endif
