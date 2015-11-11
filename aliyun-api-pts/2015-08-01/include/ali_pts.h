#ifndef ALI_PT_SH
#define ALI_PT_SH
#include <string>
#include "ali_pts_create_transaction_types.h"
#include "ali_pts_get_key_secret_types.h"
#include "ali_pts_get_script_types.h"
#include "ali_pts_get_tasks_types.h"
#include "ali_pts_report_log_sample_types.h"
#include "ali_pts_report_test_sample_types.h"
#include "ali_pts_report_vuser_types.h"
#include "ali_pts_send_wang_wang_types.h"
#include "ali_pts_set_scenario_status_types.h"
#include "ali_pts_set_task_status_types.h"
#include "ali_pts_stop_task_types.h"
namespace aliyun {
struct PTSErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class PTS {
public:
  static PTS* CreatePTSClient(std::string endpoint, std::string appid, std::string secret);
private:
  PTS(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-08-01"),
  host_(host) {}
public:
  int CreateTransaction(const PTSCreateTransactionRequestType& req,
          PTSCreateTransactionResponseType* resp,
          PTSErrorInfo* error_info);

  int GetKeySecret(PTSGetKeySecretResponseType* resp,
          PTSErrorInfo* error_info);

  int GetScript(const PTSGetScriptRequestType& req,
          PTSGetScriptResponseType* resp,
          PTSErrorInfo* error_info);

  int GetTasks(const PTSGetTasksRequestType& req,
          PTSGetTasksResponseType* resp,
          PTSErrorInfo* error_info);

  int ReportLogSample(const PTSReportLogSampleRequestType& req,
          PTSReportLogSampleResponseType* resp,
          PTSErrorInfo* error_info);

  int ReportTestSample(const PTSReportTestSampleRequestType& req,
          PTSReportTestSampleResponseType* resp,
          PTSErrorInfo* error_info);

  int ReportVuser(const PTSReportVuserRequestType& req,
          PTSReportVuserResponseType* resp,
          PTSErrorInfo* error_info);

  int SendWangWang(const PTSSendWangWangRequestType& req,
          PTSSendWangWangResponseType* resp,
          PTSErrorInfo* error_info);

  int SetScenarioStatus(const PTSSetScenarioStatusRequestType& req,
          PTSSetScenarioStatusResponseType* resp,
          PTSErrorInfo* error_info);

  int SetTaskStatus(const PTSSetTaskStatusRequestType& req,
          PTSSetTaskStatusResponseType* resp,
          PTSErrorInfo* error_info);

  int StopTask(const PTSStopTaskRequestType& req,
          PTSStopTaskResponseType* resp,
          PTSErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
