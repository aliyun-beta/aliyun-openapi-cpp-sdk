#ifndef ALI_PT_SH
#define ALI_PT_SH
#include <string>
#include "ali_create_transaction_types.h"
#include "ali_get_key_secret_types.h"
#include "ali_get_script_types.h"
#include "ali_get_tasks_types.h"
#include "ali_report_log_sample_types.h"
#include "ali_report_test_sample_types.h"
#include "ali_report_vuser_types.h"
#include "ali_send_wang_wang_types.h"
#include "ali_set_scenario_status_types.h"
#include "ali_set_task_status_types.h"
#include "ali_stop_task_types.h"
namespace aliyun {
struct AliPTSErrorInfo {
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
  int CreateTransaction(const CreateTransactionRequestType& req,
          CreateTransactionResponseType* resp,
          AliPTSErrorInfo* error_info);

  int GetKeySecret(const GetKeySecretRequestType& req,
          GetKeySecretResponseType* resp,
          AliPTSErrorInfo* error_info);

  int GetScript(const GetScriptRequestType& req,
          GetScriptResponseType* resp,
          AliPTSErrorInfo* error_info);

  int GetTasks(const GetTasksRequestType& req,
          GetTasksResponseType* resp,
          AliPTSErrorInfo* error_info);

  int ReportLogSample(const ReportLogSampleRequestType& req,
          ReportLogSampleResponseType* resp,
          AliPTSErrorInfo* error_info);

  int ReportTestSample(const ReportTestSampleRequestType& req,
          ReportTestSampleResponseType* resp,
          AliPTSErrorInfo* error_info);

  int ReportVuser(const ReportVuserRequestType& req,
          ReportVuserResponseType* resp,
          AliPTSErrorInfo* error_info);

  int SendWangWang(const SendWangWangRequestType& req,
          SendWangWangResponseType* resp,
          AliPTSErrorInfo* error_info);

  int SetScenarioStatus(const SetScenarioStatusRequestType& req,
          SetScenarioStatusResponseType* resp,
          AliPTSErrorInfo* error_info);

  int SetTaskStatus(const SetTaskStatusRequestType& req,
          SetTaskStatusResponseType* resp,
          AliPTSErrorInfo* error_info);

  int StopTask(const StopTaskRequestType& req,
          StopTaskResponseType* resp,
          AliPTSErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
