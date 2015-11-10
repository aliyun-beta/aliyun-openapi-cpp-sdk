#ifndef ALI_ECS_MODIFY_INSTANCE_VPC_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_INSTANCE_VPC_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyInstanceVpcAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string owner_account;
};
struct EcsModifyInstanceVpcAttributeResponseType {
};
} // end namespace
#endif
