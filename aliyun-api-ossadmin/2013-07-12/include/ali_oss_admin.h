#ifndef ALI_OSS_ADMINH
#define ALI_OSS_ADMINH
#include <string>
#include "alicreate_oss_instance_types.h"
#include "ali_get_bucket_policy_types.h"
#include "ali_put_bucket_limit_types.h"
#include "ali_put_bucket_policy_types.h"
#include "ali_put_bucket_status_types.h"
namespace aliyun {
struct AliOssAdminErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class OssAdmin {
public:
  static OssAdmin* CreateOssAdminClient(std::string endpoint, std::string appid, std::string secret);
private:
  OssAdmin(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2013-07-12"),
  host_(host) {}
public:
  int createOssInstance(const createOssInstanceRequestType& req,
          createOssInstanceResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int GetBucketPolicy(const GetBucketPolicyRequestType& req,
          GetBucketPolicyResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int PutBucketLimit(const PutBucketLimitRequestType& req,
          PutBucketLimitResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int PutBucketPolicy(const PutBucketPolicyRequestType& req,
          PutBucketPolicyResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int PutBucketStatus(const PutBucketStatusRequestType& req,
          PutBucketStatusResponseType* resp,
          AliOssAdminErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
