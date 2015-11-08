#ifndef ALI_GET_BUCKET_POLICY_TYPESH
#define ALI_GET_BUCKET_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetBucketPolicyRequestType {
  std::string uid;
  std::string bid;
  std::string bucket_name;
  std::string owner_account;
};
struct GetBucketPolicyWhiteReferListType {
  std::vector<std::string> refer_list;
};
struct GetBucketPolicyResponseType {
  GetBucketPolicyWhiteReferListType white_refer_list;
  bool disallow_empty_refer;
  bool enable_dual_cluster;
  std::string error_file;
  std::string index_file;
  std::string location;
  std::string log_bucket;
  std::string log_prefix;
  std::string iam_policy;
};
} // end namespace
#endif
