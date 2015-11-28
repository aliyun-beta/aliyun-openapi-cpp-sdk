#include "ali_pts.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_create_transaction_response = "{"
"  \"TransactionId\": 0"
"}";
static int test_create_transaction() {
  PTSCreateTransactionRequestType req;
  PTSCreateTransactionResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_transaction_response);
  listener->Start();
  req.script_id = "ScriptId";
  req.transaction_name = "TransactionName";
  int ret = pts->CreateTransaction(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_get_key_secret_response = "{"
"  \"Key\": \"Key\","
"  \"Secret\": \"Secret\""
"}";
static int test_get_key_secret() {
  PTSGetKeySecretResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_key_secret_response);
  listener->Start();
  int ret = pts->GetKeySecret(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_get_script_response = "{"
"  \"Script\": \"Script\""
"}";
static int test_get_script() {
  PTSGetScriptRequestType req;
  PTSGetScriptResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_script_response);
  listener->Start();
  req.script_id = "ScriptId";
  req.tfsname = "Tfsname";
  int ret = pts->GetScript(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_get_tasks_response = "{"
"  \"Tasks\": \"Tasks\""
"}";
static int test_get_tasks() {
  PTSGetTasksRequestType req;
  PTSGetTasksResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_tasks_response);
  listener->Start();
  req.status = "Status";
  int ret = pts->GetTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_report_log_sample_response = "{}";
static int test_report_log_sample() {
  PTSReportLogSampleRequestType req;
  PTSReportLogSampleResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_report_log_sample_response);
  listener->Start();
  req.wskey = "Wskey";
  req.scenario_id = "ScenarioId";
  req.log_sample = "LogSample";
  int ret = pts->ReportLogSample(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_report_test_sample_response = "{}";
static int test_report_test_sample() {
  PTSReportTestSampleRequestType req;
  PTSReportTestSampleResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_report_test_sample_response);
  listener->Start();
  req.test_sample = "TestSample";
  int ret = pts->ReportTestSample(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_report_vuser_response = "{}";
static int test_report_vuser() {
  PTSReportVuserRequestType req;
  PTSReportVuserResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_report_vuser_response);
  listener->Start();
  req.wskey = "Wskey";
  req.scenario_id = "ScenarioId";
  req.vuser = "Vuser";
  req.gmt_created = "GmtCreated";
  int ret = pts->ReportVuser(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_send_wang_wang_response = "{}";
static int test_send_wang_wang() {
  PTSSendWangWangRequestType req;
  PTSSendWangWangResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_send_wang_wang_response);
  listener->Start();
  req.to = "To";
  req.title = "Title";
  req.msg = "Msg";
  int ret = pts->SendWangWang(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_set_scenario_status_response = "{}";
static int test_set_scenario_status() {
  PTSSetScenarioStatusRequestType req;
  PTSSetScenarioStatusResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_scenario_status_response);
  listener->Start();
  req.wskey = "Wskey";
  req.scenario_id = "ScenarioId";
  req.status = "Status";
  req.node_ip = "NodeIp";
  int ret = pts->SetScenarioStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_set_task_status_response = "{}";
static int test_set_task_status() {
  PTSSetTaskStatusRequestType req;
  PTSSetTaskStatusResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_task_status_response);
  listener->Start();
  req.wskey = "Wskey";
  req.status = "Status";
  int ret = pts->SetTaskStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
static const char* test_stop_task_response = "{}";
static int test_stop_task() {
  PTSStopTaskRequestType req;
  PTSStopTaskResponseType resp;
  PTS* pts = PTS::CreatePTSClient("cn-hangzhou", "my_appid", "my_secret");
  if(!pts) return 0;
  pts->SetProxyHost("127.0.0.1:12234");
  pts->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_task_response);
  listener->Start();
  req.task_id = "TaskId";
  req.type = "Type";
  req.msg = "Msg";
  int ret = pts->StopTask(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete pts;
}
int main() {
  test_create_transaction();
  test_get_key_secret();
  test_get_script();
  test_get_tasks();
  test_report_log_sample();
  test_report_test_sample();
  test_report_vuser();
  test_send_wang_wang();
  test_set_scenario_status();
  test_set_task_status();
  test_stop_task();
}
