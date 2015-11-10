#ifndef ALI_OSSADMIN_DELETE_OSS_VPC_TYPESH
#define ALI_OSSADMIN_DELETE_OSS_VPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminDeleteOssVpcRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string vpc_id;
  std::string label;
};
struct OssAdminDeleteOssVpcResponseType {
  std::string request_id;
};
} // end namespace
#endif
