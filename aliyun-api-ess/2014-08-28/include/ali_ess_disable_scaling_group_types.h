#ifndef ALI_ESS_DISABLE_SCALING_GROUP_TYPESH
#define ALI_ESS_DISABLE_SCALING_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssDisableScalingGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_id;
  std::string owner_account;
};
struct EssDisableScalingGroupResponseType {
};
} // end namespace
#endif
