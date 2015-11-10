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
  host_(host) {}
public:
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
};  //end class
} // end namespace
#endif
