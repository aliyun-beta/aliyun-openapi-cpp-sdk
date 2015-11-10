#ifndef ali_ossadminH
#define ali_ossadminH
#include <string>
#include "ali_ossadmin_restart_oss_types.h"
#include "ali_ossadmin_stop_oss_types.h"
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
  version_("2014-03-26"),
  host_(host) {}
public:
  int restartOss(const OssAdminrestartOssRequestType& req,
          OssAdminrestartOssResponseType* resp,
          OssAdminErrorInfo* error_info);

  int stopOss(const OssAdminstopOssRequestType& req,
          OssAdminstopOssResponseType* resp,
          OssAdminErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
