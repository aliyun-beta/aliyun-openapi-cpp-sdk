#ifndef ALI_MODIFY_INSTANCE_VPC_ATTRIBUTE_TYPESH
#define ALI_MODIFY_INSTANCE_VPC_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyInstanceVpcAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string owner_account;
};
struct ModifyInstanceVpcAttributeResponseType {
};
} // end namespace
#endif
