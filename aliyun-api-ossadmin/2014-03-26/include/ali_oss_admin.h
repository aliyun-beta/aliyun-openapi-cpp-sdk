#ifndef ALI_OSS_ADMINH
#define ALI_OSS_ADMINH
#include <string>
#include "alirestart_oss_types.h"
#include "alistop_oss_types.h"
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
  version_("2014-03-26"),
  host_(host) {}
public:
  int restartOss(const restartOssRequestType& req,
          restartOssResponseType* resp,
          AliOssAdminErrorInfo* error_info);

  int stopOss(const stopOssRequestType& req,
          stopOssResponseType* resp,
          AliOssAdminErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
