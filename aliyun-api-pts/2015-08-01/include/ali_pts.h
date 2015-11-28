#ifndef ALI_PT_SH
#define ALI_PT_SH
#include <string>
#include <string.h>
#include <stdlib.h>
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
#ifdef WIN32
 #ifdef aliyun_api_pts_2015_08_01_EXPORTS
 #define ALIYUN_API_PTS_2015_08_01_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_PTS_2015_08_01_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_PTS_2015_08_01_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct PTSErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_PTS_2015_08_01_DLL_EXPORT_IMPORT PTS {
public:
  static PTS* CreatePTSClient(std::string endpoint, std::string appid, std::string secret);
  ~PTS();
private:
  PTS(std::string host, std::string appid, std::string secret);
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetProxyHost(std::string proxy_host) {
    if(this->proxy_host_) {
      free(this->proxy_host_);
    }
    this->proxy_host_ = strdup(proxy_host.c_str());
  }
  std::string GetProxyHost() {  return this->proxy_host_;  }
  void SetRegionId(std::string region_id) {
    if(this->region_id_) {
      free(this->region_id_);
    }
    this->region_id_ = strdup(region_id.c_str());
  }
  std::string GetRegionId() {  return this->region_id_;  }
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
  char* appid_;
  char* secret_;
  char* version_;
  char* host_;
  char* proxy_host_;
  bool support_tls_;
  bool use_tls_;
  char* region_id_;
};  //end class
} // end namespace
#endif
