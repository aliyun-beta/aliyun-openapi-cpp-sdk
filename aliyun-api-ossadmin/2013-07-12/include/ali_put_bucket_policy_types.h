#ifndef ALI_PUT_BUCKET_POLICY_TYPESH
#define ALI_PUT_BUCKET_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PutBucketPolicyRequestType {
  std::string uid;
  std::string bid;
  std::string bucket_name;
  std::string iam_policy;
  std::string disallow_empty_refer;
  std::string enable_dual_cluster;
  std::string error_file;
  std::string index_file;
  std::string location;
  std::string log_bucket;
  std::string log_prefix;
  std::string white_refer_list;
  std::string owner_account;
};
struct PutBucketPolicyResponseType {
  std::string code;
  std::string message;
  bool success;
};
} // end namespace
#endif
