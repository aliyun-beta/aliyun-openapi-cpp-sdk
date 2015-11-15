#ifndef ALI_ACEH
#define ALI_ACEH
#include <string>
#include "ali_ace_describe_app_logs_types.h"
#include "ali_ace_get_monitor_data_types.h"
namespace aliyun {
struct AceErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ace {
public:
  static Ace* CreateAceClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ace(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-07-13"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int DescribeAppLogs(const AceDescribeAppLogsRequestType& req,
          AceDescribeAppLogsResponseType* resp,
          AceErrorInfo* error_info);

  int GetMonitorData(const AceGetMonitorDataRequestType& req,
          AceGetMonitorDataResponseType* resp,
          AceErrorInfo* error_info);

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
