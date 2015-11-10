#ifndef ali_ossadminH
#define ali_ossadminH
#include <string>
#include "ali_ossadmin_bind_bucket_vip_types.h"
#include "ali_ossadmin_create_img_vpc_types.h"
#include "ali_ossadmin_create_oss_vpc_types.h"
#include "ali_ossadmin_delete_img_vpc_types.h"
#include "ali_ossadmin_delete_oss_vpc_types.h"
#include "ali_ossadmin_get_bucket_vips_types.h"
#include "ali_ossadmin_get_img_vpc_info_types.h"
#include "ali_ossadmin_get_oss_vpc_info_types.h"
#include "ali_ossadmin_un_bind_bucket_vip_types.h"
namespace aliyun {
struct OssAdminErrorInfo {
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
  int BindBucketVip(const OssAdminBindBucketVipRequestType& req,
          OssAdminBindBucketVipResponseType* resp,
          OssAdminErrorInfo* error_info);

  int CreateImgVpc(const OssAdminCreateImgVpcRequestType& req,
          OssAdminCreateImgVpcResponseType* resp,
          OssAdminErrorInfo* error_info);

  int CreateOssVpc(const OssAdminCreateOssVpcRequestType& req,
          OssAdminCreateOssVpcResponseType* resp,
          OssAdminErrorInfo* error_info);

  int DeleteImgVpc(const OssAdminDeleteImgVpcRequestType& req,
          OssAdminDeleteImgVpcResponseType* resp,
          OssAdminErrorInfo* error_info);

  int DeleteOssVpc(const OssAdminDeleteOssVpcRequestType& req,
          OssAdminDeleteOssVpcResponseType* resp,
          OssAdminErrorInfo* error_info);

  int GetBucketVips(const OssAdminGetBucketVipsRequestType& req,
          OssAdminGetBucketVipsResponseType* resp,
          OssAdminErrorInfo* error_info);

  int GetImgVpcInfo(const OssAdminGetImgVpcInfoRequestType& req,
          OssAdminGetImgVpcInfoResponseType* resp,
          OssAdminErrorInfo* error_info);

  int GetOssVpcInfo(const OssAdminGetOssVpcInfoRequestType& req,
          OssAdminGetOssVpcInfoResponseType* resp,
          OssAdminErrorInfo* error_info);

  int UnBindBucketVip(const OssAdminUnBindBucketVipRequestType& req,
          OssAdminUnBindBucketVipResponseType* resp,
          OssAdminErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
