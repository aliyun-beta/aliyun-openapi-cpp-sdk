#ifndef ALI_OSSADMIN_GET_OSS_VPC_INFO_TYPESH
#define ALI_OSSADMIN_GET_OSS_VPC_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminGetOssVpcInfoRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string vpc_id;
  std::string label;
};
struct OssAdminGetOssVpcInfoResponseType {
  std::string request_id;
  std::string vip;
  std::string vpc_id;
};
} // end namespace
#endif
