#ifndef ALI_UBSMSINNERH
#define ALI_UBSMSINNERH
#include <string>
#include "ali_ubsmsinner_describe_business_status_types.h"
#include "ali_ubsmsinner_describe_user_business_status_types.h"
#include "ali_ubsmsinner_notify_user_business_command_types.h"
#include "ali_ubsmsinner_set_user_business_statuses_types.h"
#include "ali_ubsmsinner_set_user_security_status_types.h"
namespace aliyun {
struct UbsmsinnerErrorInfo {
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
  int DescribeBusinessStatus(const UbsmsinnerDescribeBusinessStatusRequestType& req,
          UbsmsinnerDescribeBusinessStatusResponseType* resp,
          UbsmsinnerErrorInfo* error_info);

  int DescribeUserBusinessStatus(const UbsmsinnerDescribeUserBusinessStatusRequestType& req,
          UbsmsinnerDescribeUserBusinessStatusResponseType* resp,
          UbsmsinnerErrorInfo* error_info);

  int NotifyUserBusinessCommand(const UbsmsinnerNotifyUserBusinessCommandRequestType& req,
          UbsmsinnerNotifyUserBusinessCommandResponseType* resp,
          UbsmsinnerErrorInfo* error_info);

  int SetUserBusinessStatuses(const UbsmsinnerSetUserBusinessStatusesRequestType& req,
          UbsmsinnerSetUserBusinessStatusesResponseType* resp,
          UbsmsinnerErrorInfo* error_info);

  int SetUserSecurityStatus(const UbsmsinnerSetUserSecurityStatusRequestType& req,
          UbsmsinnerSetUserSecurityStatusResponseType* resp,
          UbsmsinnerErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
