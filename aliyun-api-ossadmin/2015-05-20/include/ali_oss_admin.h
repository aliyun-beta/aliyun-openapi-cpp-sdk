#ifndef ALI_OSS_ADMINH
#define ALI_OSS_ADMINH
#include <string>
#include "ali_bind_bucket_vip_types.h"
#include "ali_create_img_vpc_types.h"
#include "ali_create_oss_vpc_types.h"
#include "ali_delete_img_vpc_types.h"
#include "ali_delete_oss_vpc_types.h"
#include "ali_get_bucket_vips_types.h"
#include "ali_get_img_vpc_info_types.h"
#include "ali_get_oss_vpc_info_types.h"
#include "ali_un_bind_bucket_vip_types.h"
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
  version_("2015-05-20"),
  host_(host) {}
public:
  int BindBucketVip(const BindBucketVipRequestType& req,
          BindBucketVipResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int CreateImgVpc(const CreateImgVpcRequestType& req,
          CreateImgVpcResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int CreateOssVpc(const CreateOssVpcRequestType& req,
          CreateOssVpcResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int DeleteImgVpc(const DeleteImgVpcRequestType& req,
          DeleteImgVpcResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int DeleteOssVpc(const DeleteOssVpcRequestType& req,
          DeleteOssVpcResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int GetBucketVips(const GetBucketVipsRequestType& req,
          GetBucketVipsResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int GetImgVpcInfo(const GetImgVpcInfoRequestType& req,
          GetImgVpcInfoResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int GetOssVpcInfo(const GetOssVpcInfoRequestType& req,
          GetOssVpcInfoResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int UnBindBucketVip(const UnBindBucketVipRequestType& req,
          UnBindBucketVipResponseType* resp,
          AliOssAdminErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
