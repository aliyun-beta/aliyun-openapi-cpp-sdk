#ifndef ALI_ECS_MODIFY_INSTANCE_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_INSTANCE_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyInstanceAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string password;
  std::string host_name;
  std::string instance_name;
  std::string description;
  std::string owner_account;
};
struct EcsModifyInstanceAttributeResponseType {
};
} // end namespace
#endif
