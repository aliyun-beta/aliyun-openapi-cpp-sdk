#ifndef ALI_OSS_ADMINH
#define ALI_OSS_ADMINH
#include <string>
#include "ali_create_oss_instance_types.h"
#include "ali_release_oss_instance_types.h"
#include "ali_restart_oss_instance_types.h"
#include "ali_stop_oss_instance_types.h"
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
  version_("2015-03-02"),
  host_(host) {}
public:
  int CreateOssInstance(const CreateOssInstanceRequestType& req,
          CreateOssInstanceResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int ReleaseOssInstance(const ReleaseOssInstanceRequestType& req,
          ReleaseOssInstanceResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int RestartOssInstance(const RestartOssInstanceRequestType& req,
          RestartOssInstanceResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int StopOssInstance(const StopOssInstanceRequestType& req,
          StopOssInstanceResponseType* resp,
          AliOssAdminErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
