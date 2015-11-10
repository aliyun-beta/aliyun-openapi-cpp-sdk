#ifndef ALI_RAM_ATTACH_POLICY_TO_GROUP_TYPESH
#define ALI_RAM_ATTACH_POLICY_TO_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamAttachPolicyToGroupRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string group_name;
};
struct RamAttachPolicyToGroupResponseType {
};
} // end namespace
#endif
