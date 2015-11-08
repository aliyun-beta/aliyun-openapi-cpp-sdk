#ifndef ALI_CREATE_IMG_VPC_TYPESH
#define ALI_CREATE_IMG_VPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateImgVpcRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string virtual_switch_id;
  std::string vpc_id;
  std::string label;
};
struct CreateImgVpcResponseType {
  std::string request_id;
  std::string vip;
  std::string vpc_id;
};
} // end namespace
#endif
