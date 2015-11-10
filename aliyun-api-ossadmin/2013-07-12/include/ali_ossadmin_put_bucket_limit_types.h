#ifndef ALI_OSSADMIN_PUT_BUCKET_LIMIT_TYPESH
#define ALI_OSSADMIN_PUT_BUCKET_LIMIT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminPutBucketLimitRequestType {
  std::string uid;
  std::string bid;
  std::string bucket_limit;
  std::string owner_account;
};
struct OssAdminPutBucketLimitResponseType {
  std::string code;
  std::string message;
  bool success;
};
} // end namespace
#endif
