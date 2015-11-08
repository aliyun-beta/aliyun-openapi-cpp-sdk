#ifndef ALI_DELETE_IMG_VPC_TYPESH
#define ALI_DELETE_IMG_VPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteImgVpcRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string vpc_id;
  std::string label;
};
struct DeleteImgVpcResponseType {
  std::string request_id;
};
} // end namespace
#endif
