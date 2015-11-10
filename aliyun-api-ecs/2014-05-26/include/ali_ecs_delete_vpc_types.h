#ifndef ALI_ECS_DELETE_VPC_TYPESH
#define ALI_ECS_DELETE_VPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDeleteVpcRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vpc_id;
  std::string owner_account;
};
struct EcsDeleteVpcResponseType {
};
} // end namespace
#endif
