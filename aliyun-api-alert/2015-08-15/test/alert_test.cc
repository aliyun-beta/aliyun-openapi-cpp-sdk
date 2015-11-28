#include "ali_alert.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_batch_query_project_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_batch_query_project() {
  AlertBatchQueryProjectRequestType req;
  AlertBatchQueryProjectResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_query_project_response);
  listener->Start();
  req.names = "Names";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->BatchQueryProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_alert() {
  AlertCreateAlertRequestType req;
  AlertCreateAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert = "Alert";
  int ret = alert->CreateAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_contact_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_contact() {
  AlertCreateContactRequestType req;
  AlertCreateContactResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_contact_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.contact = "Contact";
  int ret = alert->CreateContact(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_contact_group_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_contact_group() {
  AlertCreateContactGroupRequestType req;
  AlertCreateContactGroupResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_contact_group_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.contact_group = "ContactGroup";
  int ret = alert->CreateContactGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_db_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_db_metric() {
  AlertCreateDBMetricRequestType req;
  AlertCreateDBMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_db_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric = "Metric";
  int ret = alert->CreateDBMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_db_source_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_db_source() {
  AlertCreateDBSourceRequestType req;
  AlertCreateDBSourceResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_db_source_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.source = "Source";
  int ret = alert->CreateDBSource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_dimensions_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_dimensions() {
  AlertCreateDimensionsRequestType req;
  AlertCreateDimensionsResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_dimensions_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.dimensions = "Dimensions";
  int ret = alert->CreateDimensions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_level_channel_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_level_channel() {
  AlertCreateLevelChannelRequestType req;
  AlertCreateLevelChannelResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_level_channel_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.level_channel_setting = "LevelChannelSetting";
  int ret = alert->CreateLevelChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_log_hub_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_log_hub_metric() {
  AlertCreateLogHubMetricRequestType req;
  AlertCreateLogHubMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_log_hub_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric = "Metric";
  int ret = alert->CreateLogHubMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_create_project_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_create_project() {
  AlertCreateProjectRequestType req;
  AlertCreateProjectResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_project_response);
  listener->Start();
  req.project = "Project";
  int ret = alert->CreateProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_alert() {
  AlertDeleteAlertRequestType req;
  AlertDeleteAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  int ret = alert->DeleteAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_contact_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_contact() {
  AlertDeleteContactRequestType req;
  AlertDeleteContactResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_contact_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.contact_name = "ContactName";
  int ret = alert->DeleteContact(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_contact_group_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_contact_group() {
  AlertDeleteContactGroupRequestType req;
  AlertDeleteContactGroupResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_contact_group_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.group_name = "GroupName";
  int ret = alert->DeleteContactGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_db_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_db_metric() {
  AlertDeleteDBMetricRequestType req;
  AlertDeleteDBMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_db_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = alert->DeleteDBMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_db_source_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_db_source() {
  AlertDeleteDBSourceRequestType req;
  AlertDeleteDBSourceResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_db_source_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.source_name = "SourceName";
  int ret = alert->DeleteDBSource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_dimensions_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_dimensions() {
  AlertDeleteDimensionsRequestType req;
  AlertDeleteDimensionsResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_dimensions_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.dimensions_id = "DimensionsId";
  int ret = alert->DeleteDimensions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_level_channel_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_level_channel() {
  AlertDeleteLevelChannelRequestType req;
  AlertDeleteLevelChannelResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_level_channel_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.level = "Level";
  int ret = alert->DeleteLevelChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_log_hub_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_log_hub_metric() {
  AlertDeleteLogHubMetricRequestType req;
  AlertDeleteLogHubMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_log_hub_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = alert->DeleteLogHubMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_delete_project_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_delete_project() {
  AlertDeleteProjectRequestType req;
  AlertDeleteProjectResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = alert->DeleteProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_disable_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_disable_alert() {
  AlertDisableAlertRequestType req;
  AlertDisableAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_disable_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  int ret = alert->DisableAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_enable_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_enable_alert() {
  AlertEnableAlertRequestType req;
  AlertEnableAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_enable_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  int ret = alert->EnableAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_alert() {
  AlertGetAlertRequestType req;
  AlertGetAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  int ret = alert->GetAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_contact_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_contact() {
  AlertGetContactRequestType req;
  AlertGetContactResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_contact_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.contact_name = "ContactName";
  int ret = alert->GetContact(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_contact_group_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_contact_group() {
  AlertGetContactGroupRequestType req;
  AlertGetContactGroupResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_contact_group_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.group_name = "GroupName";
  int ret = alert->GetContactGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_db_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_db_metric() {
  AlertGetDBMetricRequestType req;
  AlertGetDBMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_db_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = alert->GetDBMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_db_source_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_db_source() {
  AlertGetDBSourceRequestType req;
  AlertGetDBSourceResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_db_source_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.source_name = "SourceName";
  int ret = alert->GetDBSource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_dimensions_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_dimensions() {
  AlertGetDimensionsRequestType req;
  AlertGetDimensionsResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_dimensions_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.dimensions_id = "DimensionsId";
  int ret = alert->GetDimensions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_level_channel_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_level_channel() {
  AlertGetLevelChannelRequestType req;
  AlertGetLevelChannelResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_level_channel_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.level = "Level";
  int ret = alert->GetLevelChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_log_hub_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_log_hub_metric() {
  AlertGetLogHubMetricRequestType req;
  AlertGetLogHubMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_log_hub_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = alert->GetLogHubMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_get_project_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"result\": \"result\""
"}";
static int test_get_project() {
  AlertGetProjectRequestType req;
  AlertGetProjectResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = alert->GetProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_grant_project_owner_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_grant_project_owner() {
  AlertGrantProjectOwnerRequestType req;
  AlertGrantProjectOwnerResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_grant_project_owner_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.owners = "Owners";
  int ret = alert->GrantProjectOwner(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_alert() {
  AlertListAlertRequestType req;
  AlertListAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_alert_state_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_alert_state() {
  AlertListAlertStateRequestType req;
  AlertListAlertStateResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_alert_state_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.dimensions = "Dimensions";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListAlertState(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_contact_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_contact() {
  AlertListContactRequestType req;
  AlertListContactResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_contact_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.contact_name = "ContactName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListContact(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_contact_group_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_contact_group() {
  AlertListContactGroupRequestType req;
  AlertListContactGroupResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_contact_group_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.group_name = "GroupName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListContactGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_db_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_db_metric() {
  AlertListDBMetricRequestType req;
  AlertListDBMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_db_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListDBMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_db_source_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_db_source() {
  AlertListDBSourceRequestType req;
  AlertListDBSourceResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_db_source_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.source_name = "SourceName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListDBSource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_dimensions_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_dimensions() {
  AlertListDimensionsRequestType req;
  AlertListDimensionsResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_dimensions_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListDimensions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_level_channel_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_level_channel() {
  AlertListLevelChannelRequestType req;
  AlertListLevelChannelResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_level_channel_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.level = "Level";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListLevelChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_log_hub_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_log_hub_metric() {
  AlertListLogHubMetricRequestType req;
  AlertListLogHubMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_log_hub_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListLogHubMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_notify_history_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_notify_history() {
  AlertListNotifyHistoryRequestType req;
  AlertListNotifyHistoryResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_notify_history_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.dimensions = "Dimensions";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListNotifyHistory(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_list_project_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\","
"  \"datapoints\": \"datapoints\","
"  \"total\": \"total\""
"}";
static int test_list_project() {
  AlertListProjectRequestType req;
  AlertListProjectResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_project_response);
  listener->Start();
  req.project_owner = "ProjectOwner";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = alert->ListProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_remove_project_owner_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_remove_project_owner() {
  AlertRemoveProjectOwnerRequestType req;
  AlertRemoveProjectOwnerResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_project_owner_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.owners = "Owners";
  int ret = alert->RemoveProjectOwner(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_alert_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_alert() {
  AlertUpdateAlertRequestType req;
  AlertUpdateAlertResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_alert_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.alert = "Alert";
  int ret = alert->UpdateAlert(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_contact_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_contact() {
  AlertUpdateContactRequestType req;
  AlertUpdateContactResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_contact_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.contact_name = "ContactName";
  req.contact = "Contact";
  int ret = alert->UpdateContact(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_contact_group_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_contact_group() {
  AlertUpdateContactGroupRequestType req;
  AlertUpdateContactGroupResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_contact_group_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.group_name = "GroupName";
  req.contact_group = "ContactGroup";
  int ret = alert->UpdateContactGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_db_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_db_metric() {
  AlertUpdateDBMetricRequestType req;
  AlertUpdateDBMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_db_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  req.metric = "Metric";
  int ret = alert->UpdateDBMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_db_source_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_db_source() {
  AlertUpdateDBSourceRequestType req;
  AlertUpdateDBSourceResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_db_source_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.source_name = "SourceName";
  req.source = "Source";
  int ret = alert->UpdateDBSource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_dimensions_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_dimensions() {
  AlertUpdateDimensionsRequestType req;
  AlertUpdateDimensionsResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_dimensions_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.alert_name = "AlertName";
  req.dimensions_id = "DimensionsId";
  req.dimensions = "Dimensions";
  int ret = alert->UpdateDimensions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_level_channel_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_level_channel() {
  AlertUpdateLevelChannelRequestType req;
  AlertUpdateLevelChannelResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_level_channel_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.level = "Level";
  req.level_channel_setting = "LevelChannelSetting";
  int ret = alert->UpdateLevelChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_log_hub_metric_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_log_hub_metric() {
  AlertUpdateLogHubMetricRequestType req;
  AlertUpdateLogHubMetricResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_log_hub_metric_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  req.metric = "Metric";
  int ret = alert->UpdateLogHubMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
static const char* test_update_project_response = "{"
"  \"code\": \"code\","
"  \"message\": \"message\","
"  \"success\": \"success\","
"  \"traceId\": \"traceId\""
"}";
static int test_update_project() {
  AlertUpdateProjectRequestType req;
  AlertUpdateProjectResponseType resp;
  Alert* alert = Alert::CreateAlertClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  alert->SetProxyHost("127.0.0.1:12234");
  alert->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.project = "Project";
  int ret = alert->UpdateProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete alert;
}
int main() {
  test_batch_query_project();
  test_create_alert();
  test_create_contact();
  test_create_contact_group();
  test_create_db_metric();
  test_create_db_source();
  test_create_dimensions();
  test_create_level_channel();
  test_create_log_hub_metric();
  test_create_project();
  test_delete_alert();
  test_delete_contact();
  test_delete_contact_group();
  test_delete_db_metric();
  test_delete_db_source();
  test_delete_dimensions();
  test_delete_level_channel();
  test_delete_log_hub_metric();
  test_delete_project();
  test_disable_alert();
  test_enable_alert();
  test_get_alert();
  test_get_contact();
  test_get_contact_group();
  test_get_db_metric();
  test_get_db_source();
  test_get_dimensions();
  test_get_level_channel();
  test_get_log_hub_metric();
  test_get_project();
  test_grant_project_owner();
  test_list_alert();
  test_list_alert_state();
  test_list_contact();
  test_list_contact_group();
  test_list_db_metric();
  test_list_db_source();
  test_list_dimensions();
  test_list_level_channel();
  test_list_log_hub_metric();
  test_list_notify_history();
  test_list_project();
  test_remove_project_owner();
  test_update_alert();
  test_update_contact();
  test_update_contact_group();
  test_update_db_metric();
  test_update_db_source();
  test_update_dimensions();
  test_update_level_channel();
  test_update_log_hub_metric();
  test_update_project();
}
