#ifndef ALI_OSSADMIN_BIND_BUCKET_VIP_TYPESH
#define ALI_OSSADMIN_BIND_BUCKET_VIP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminBindBucketVipRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string vpc_id;
  std::string vip;
  std::string bucket_name;
};
struct OssAdminBindBucketVipResponseType {
  std::string request_id;
};
} // end namespace
#endif
