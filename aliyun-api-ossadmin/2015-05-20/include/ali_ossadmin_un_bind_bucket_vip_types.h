#ifndef ALI_OSSADMIN_UN_BIND_BUCKET_VIP_TYPESH
#define ALI_OSSADMIN_UN_BIND_BUCKET_VIP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminUnBindBucketVipRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string region;
  std::string vpc_id;
  std::string vip;
  std::string bucket_name;
};
struct OssAdminUnBindBucketVipResponseType {
  std::string request_id;
};
} // end namespace
#endif
