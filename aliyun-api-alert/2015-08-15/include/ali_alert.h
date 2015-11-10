#ifndef ALI_ALERTH
#define ALI_ALERTH
#include <string>
#include "ali_alert_batch_query_project_types.h"
#include "ali_alert_create_alert_types.h"
#include "ali_alert_create_contact_types.h"
#include "ali_alert_create_contact_group_types.h"
#include "ali_alert_create_db_metric_types.h"
#include "ali_alert_create_db_source_types.h"
#include "ali_alert_create_dimensions_types.h"
#include "ali_alert_create_level_channel_types.h"
#include "ali_alert_create_log_hub_metric_types.h"
#include "ali_alert_create_project_types.h"
#include "ali_alert_get_alert_types.h"
#include "ali_alert_get_contact_types.h"
#include "ali_alert_get_contact_group_types.h"
#include "ali_alert_get_db_metric_types.h"
#include "ali_alert_get_db_source_types.h"
#include "ali_alert_get_dimensions_types.h"
#include "ali_alert_get_level_channel_types.h"
#include "ali_alert_get_log_hub_metric_types.h"
#include "ali_alert_get_project_types.h"
#include "ali_alert_grant_project_owner_types.h"
#include "ali_alert_list_alert_types.h"
#include "ali_alert_list_alert_state_types.h"
#include "ali_alert_list_contact_types.h"
#include "ali_alert_list_contact_group_types.h"
#include "ali_alert_list_db_metric_types.h"
#include "ali_alert_list_db_source_types.h"
#include "ali_alert_list_dimensions_types.h"
#include "ali_alert_list_level_channel_types.h"
#include "ali_alert_list_log_hub_metric_types.h"
#include "ali_alert_list_notify_history_types.h"
#include "ali_alert_list_project_types.h"
#include "ali_alert_remove_project_owner_types.h"
namespace aliyun {
struct AlertErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Alert {
public:
  static Alert* CreateAlertClient(std::string endpoint, std::string appid, std::string secret);
private:
  Alert(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-08-15"),
  host_(host) {}
public:
  int BatchQueryProject(const AlertBatchQueryProjectRequestType& req,
          AlertBatchQueryProjectResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateAlert(const AlertCreateAlertRequestType& req,
          AlertCreateAlertResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateContact(const AlertCreateContactRequestType& req,
          AlertCreateContactResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateContactGroup(const AlertCreateContactGroupRequestType& req,
          AlertCreateContactGroupResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateDBMetric(const AlertCreateDBMetricRequestType& req,
          AlertCreateDBMetricResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateDBSource(const AlertCreateDBSourceRequestType& req,
          AlertCreateDBSourceResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateDimensions(const AlertCreateDimensionsRequestType& req,
          AlertCreateDimensionsResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateLevelChannel(const AlertCreateLevelChannelRequestType& req,
          AlertCreateLevelChannelResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateLogHubMetric(const AlertCreateLogHubMetricRequestType& req,
          AlertCreateLogHubMetricResponseType* resp,
          AlertErrorInfo* error_info);

  int CreateProject(const AlertCreateProjectRequestType& req,
          AlertCreateProjectResponseType* resp,
          AlertErrorInfo* error_info);

  int GetAlert(const AlertGetAlertRequestType& req,
          AlertGetAlertResponseType* resp,
          AlertErrorInfo* error_info);

  int GetContact(const AlertGetContactRequestType& req,
          AlertGetContactResponseType* resp,
          AlertErrorInfo* error_info);

  int GetContactGroup(const AlertGetContactGroupRequestType& req,
          AlertGetContactGroupResponseType* resp,
          AlertErrorInfo* error_info);

  int GetDBMetric(const AlertGetDBMetricRequestType& req,
          AlertGetDBMetricResponseType* resp,
          AlertErrorInfo* error_info);

  int GetDBSource(const AlertGetDBSourceRequestType& req,
          AlertGetDBSourceResponseType* resp,
          AlertErrorInfo* error_info);

  int GetDimensions(const AlertGetDimensionsRequestType& req,
          AlertGetDimensionsResponseType* resp,
          AlertErrorInfo* error_info);

  int GetLevelChannel(const AlertGetLevelChannelRequestType& req,
          AlertGetLevelChannelResponseType* resp,
          AlertErrorInfo* error_info);

  int GetLogHubMetric(const AlertGetLogHubMetricRequestType& req,
          AlertGetLogHubMetricResponseType* resp,
          AlertErrorInfo* error_info);

  int GetProject(const AlertGetProjectRequestType& req,
          AlertGetProjectResponseType* resp,
          AlertErrorInfo* error_info);

  int GrantProjectOwner(const AlertGrantProjectOwnerRequestType& req,
          AlertGrantProjectOwnerResponseType* resp,
          AlertErrorInfo* error_info);

  int ListAlert(const AlertListAlertRequestType& req,
          AlertListAlertResponseType* resp,
          AlertErrorInfo* error_info);

  int ListAlertState(const AlertListAlertStateRequestType& req,
          AlertListAlertStateResponseType* resp,
          AlertErrorInfo* error_info);

  int ListContact(const AlertListContactRequestType& req,
          AlertListContactResponseType* resp,
          AlertErrorInfo* error_info);

  int ListContactGroup(const AlertListContactGroupRequestType& req,
          AlertListContactGroupResponseType* resp,
          AlertErrorInfo* error_info);

  int ListDBMetric(const AlertListDBMetricRequestType& req,
          AlertListDBMetricResponseType* resp,
          AlertErrorInfo* error_info);

  int ListDBSource(const AlertListDBSourceRequestType& req,
          AlertListDBSourceResponseType* resp,
          AlertErrorInfo* error_info);

  int ListDimensions(const AlertListDimensionsRequestType& req,
          AlertListDimensionsResponseType* resp,
          AlertErrorInfo* error_info);

  int ListLevelChannel(const AlertListLevelChannelRequestType& req,
          AlertListLevelChannelResponseType* resp,
          AlertErrorInfo* error_info);

  int ListLogHubMetric(const AlertListLogHubMetricRequestType& req,
          AlertListLogHubMetricResponseType* resp,
          AlertErrorInfo* error_info);

  int ListNotifyHistory(const AlertListNotifyHistoryRequestType& req,
          AlertListNotifyHistoryResponseType* resp,
          AlertErrorInfo* error_info);

  int ListProject(const AlertListProjectRequestType& req,
          AlertListProjectResponseType* resp,
          AlertErrorInfo* error_info);

  int RemoveProjectOwner(const AlertRemoveProjectOwnerRequestType& req,
          AlertRemoveProjectOwnerResponseType* resp,
          AlertErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
