#ifndef ALI_ECS_CREATE_VPC_TYPESH
#define ALI_ECS_CREATE_VPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCreateVpcRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string cidr_block;
  std::string vpc_name;
  std::string description;
  std::string client_token;
  std::string owner_account;
  std::string user_cidr;
};
struct EcsCreateVpcResponseType {
  std::string vpc_id;
  std::string vrouter_id;
  std::string route_table_id;
};
} // end namespace
#endif
