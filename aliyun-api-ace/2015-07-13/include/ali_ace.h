#ifndef ALI_ACEH
#define ALI_ACEH
#include <string>
#include "ali_describe_app_logs_types.h"
#include "ali_get_monitor_data_types.h"
namespace aliyun {
struct AliAceErrorInfo {
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
  int DescribeAppLogs(const DescribeAppLogsRequestType& req,
          DescribeAppLogsResponseType* resp,
          AliAceErrorInfo* error_info);

  int GetMonitorData(const GetMonitorDataRequestType& req,
          GetMonitorDataResponseType* resp,
          AliAceErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
