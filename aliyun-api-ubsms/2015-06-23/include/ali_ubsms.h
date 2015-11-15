#ifndef ALI_UBSMSH
#define ALI_UBSMSH
#include <string>
#include "ali_ubsms_describe_business_status_types.h"
#include "ali_ubsms_notify_user_business_command_types.h"
#include "ali_ubsms_set_user_business_status_types.h"
#include "ali_ubsms_set_user_business_statuses_types.h"
namespace aliyun {
struct UbsmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ubsms {
public:
  static Ubsms* CreateUbsmsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ubsms(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-06-23"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int DescribeBusinessStatus(const UbsmsDescribeBusinessStatusRequestType& req,
          UbsmsDescribeBusinessStatusResponseType* resp,
          UbsmsErrorInfo* error_info);

  int NotifyUserBusinessCommand(const UbsmsNotifyUserBusinessCommandRequestType& req,
          UbsmsNotifyUserBusinessCommandResponseType* resp,
          UbsmsErrorInfo* error_info);

  int SetUserBusinessStatus(const UbsmsSetUserBusinessStatusRequestType& req,
          UbsmsSetUserBusinessStatusResponseType* resp,
          UbsmsErrorInfo* error_info);

  int SetUserBusinessStatuses(const UbsmsSetUserBusinessStatusesRequestType& req,
          UbsmsSetUserBusinessStatusesResponseType* resp,
          UbsmsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
