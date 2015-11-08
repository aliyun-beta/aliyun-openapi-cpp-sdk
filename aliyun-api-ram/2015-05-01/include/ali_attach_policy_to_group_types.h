#ifndef ALI_ATTACH_POLICY_TO_GROUP_TYPESH
#define ALI_ATTACH_POLICY_TO_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AttachPolicyToGroupRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string group_name;
};
struct AttachPolicyToGroupResponseType {
};
} // end namespace
#endif
