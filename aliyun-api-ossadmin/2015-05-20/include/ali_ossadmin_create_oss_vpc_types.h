#ifndef ALI_OSSADMIN_CREATE_OSS_VPC_TYPESH
#define ALI_OSSADMIN_CREATE_OSS_VPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminCreateOssVpcRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string virtual_switch_id;
  std::string vpc_id;
  std::string label;
};
struct OssAdminCreateOssVpcResponseType {
  std::string request_id;
  std::string vip;
  std::string vpc_id;
};
} // end namespace
#endif
