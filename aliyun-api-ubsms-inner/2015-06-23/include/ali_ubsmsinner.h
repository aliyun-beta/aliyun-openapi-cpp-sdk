#ifndef ALI_UBSMSINNERH
#define ALI_UBSMSINNERH
#include <string>
#include "ali_describe_business_status_types.h"
#include "ali_describe_user_business_status_types.h"
#include "ali_notify_user_business_command_types.h"
#include "ali_set_user_business_statuses_types.h"
#include "ali_set_user_security_status_types.h"
namespace aliyun {
struct AliUbsmsinnerErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ubsmsinner {
public:
  static Ubsmsinner* CreateUbsmsinnerClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ubsmsinner(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-06-23"),
  host_(host) {}
public:
  int DescribeBusinessStatus(const DescribeBusinessStatusRequestType& req,
          DescribeBusinessStatusResponseType* resp,
          AliUbsmsinnerErrorInfo* error_info);

  int DescribeUserBusinessStatus(const DescribeUserBusinessStatusRequestType& req,
          DescribeUserBusinessStatusResponseType* resp,
          AliUbsmsinnerErrorInfo* error_info);

  int NotifyUserBusinessCommand(const NotifyUserBusinessCommandRequestType& req,
          NotifyUserBusinessCommandResponseType* resp,
          AliUbsmsinnerErrorInfo* error_info);

  int SetUserBusinessStatuses(const SetUserBusinessStatusesRequestType& req,
          SetUserBusinessStatusesResponseType* resp,
          AliUbsmsinnerErrorInfo* error_info);

  int SetUserSecurityStatus(const SetUserSecurityStatusRequestType& req,
          SetUserSecurityStatusResponseType* resp,
          AliUbsmsinnerErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
