#ifndef ALI_ECS_MODIFY_VPC_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_VPC_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyVpcAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vpc_id;
  std::string description;
  std::string vpc_name;
  std::string owner_account;
  std::string user_cidr;
};
struct EcsModifyVpcAttributeResponseType {
};
} // end namespace
#endif
