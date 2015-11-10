#ifndef ALI_ECS_LEAVE_SECURITY_GROUP_TYPESH
#define ALI_ECS_LEAVE_SECURITY_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsLeaveSecurityGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string instance_id;
  std::string owner_account;
};
struct EcsLeaveSecurityGroupResponseType {
};
} // end namespace
#endif
