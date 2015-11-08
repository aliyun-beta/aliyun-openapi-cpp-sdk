#ifndef ALI_PUT_BUCKET_STATUS_TYPESH
#define ALI_PUT_BUCKET_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PutBucketStatusRequestType {
  std::string uid;
  std::string bid;
  std::string bucket;
  std::string status;
  std::string owner_account;
};
struct PutBucketStatusResponseType {
  std::string code;
  std::string message;
  bool success;
};
} // end namespace
#endif
