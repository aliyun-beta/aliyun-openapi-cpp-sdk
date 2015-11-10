#ifndef ALI_ESS_DELETE_SCALING_GROUP_TYPESH
#define ALI_ESS_DELETE_SCALING_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssDeleteScalingGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_id;
  std::string force_delete;
  std::string owner_account;
};
struct EssDeleteScalingGroupResponseType {
};
} // end namespace
#endif
