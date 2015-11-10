#ifndef ALI_RAM_DETACH_POLICY_FROM_GROUP_TYPESH
#define ALI_RAM_DETACH_POLICY_FROM_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamDetachPolicyFromGroupRequestType {
  std::string policy_type;
  std::string policy_name;
  std::string group_name;
};
struct RamDetachPolicyFromGroupResponseType {
};
} // end namespace
#endif
