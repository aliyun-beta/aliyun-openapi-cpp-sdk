#ifndef ALI_ALERTH
#define ALI_ALERTH
#include <string>
#include "ali_batch_query_project_types.h"
#include "ali_create_alert_types.h"
#include "ali_create_contact_types.h"
#include "ali_create_contact_group_types.h"
#include "ali_create_db_metric_types.h"
#include "ali_create_db_source_types.h"
#include "ali_create_dimensions_types.h"
#include "ali_create_level_channel_types.h"
#include "ali_create_log_hub_metric_types.h"
#include "ali_create_project_types.h"
#include "ali_get_alert_types.h"
#include "ali_get_contact_types.h"
#include "ali_get_contact_group_types.h"
#include "ali_get_db_metric_types.h"
#include "ali_get_db_source_types.h"
#include "ali_get_dimensions_types.h"
#include "ali_get_level_channel_types.h"
#include "ali_get_log_hub_metric_types.h"
#include "ali_get_project_types.h"
#include "ali_grant_project_owner_types.h"
#include "ali_list_alert_types.h"
#include "ali_list_alert_state_types.h"
#include "ali_list_contact_types.h"
#include "ali_list_contact_group_types.h"
#include "ali_list_db_metric_types.h"
#include "ali_list_db_source_types.h"
#include "ali_list_dimensions_types.h"
#include "ali_list_level_channel_types.h"
#include "ali_list_log_hub_metric_types.h"
#include "ali_list_notify_history_types.h"
#include "ali_list_project_types.h"
#include "ali_remove_project_owner_types.h"
namespace aliyun {
struct AliAlertErrorInfo {
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
  int BatchQueryProject(const BatchQueryProjectRequestType& req,
          BatchQueryProjectResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateAlert(const CreateAlertRequestType& req,
          CreateAlertResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateContact(const CreateContactRequestType& req,
          CreateContactResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateContactGroup(const CreateContactGroupRequestType& req,
          CreateContactGroupResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateDBMetric(const CreateDBMetricRequestType& req,
          CreateDBMetricResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateDBSource(const CreateDBSourceRequestType& req,
          CreateDBSourceResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateDimensions(const CreateDimensionsRequestType& req,
          CreateDimensionsResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateLevelChannel(const CreateLevelChannelRequestType& req,
          CreateLevelChannelResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateLogHubMetric(const CreateLogHubMetricRequestType& req,
          CreateLogHubMetricResponseType* resp,
          AliAlertErrorInfo* error_info);

  int CreateProject(const CreateProjectRequestType& req,
          CreateProjectResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetAlert(const GetAlertRequestType& req,
          GetAlertResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetContact(const GetContactRequestType& req,
          GetContactResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetContactGroup(const GetContactGroupRequestType& req,
          GetContactGroupResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetDBMetric(const GetDBMetricRequestType& req,
          GetDBMetricResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetDBSource(const GetDBSourceRequestType& req,
          GetDBSourceResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetDimensions(const GetDimensionsRequestType& req,
          GetDimensionsResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetLevelChannel(const GetLevelChannelRequestType& req,
          GetLevelChannelResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetLogHubMetric(const GetLogHubMetricRequestType& req,
          GetLogHubMetricResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GetProject(const GetProjectRequestType& req,
          GetProjectResponseType* resp,
          AliAlertErrorInfo* error_info);

  int GrantProjectOwner(const GrantProjectOwnerRequestType& req,
          GrantProjectOwnerResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListAlert(const ListAlertRequestType& req,
          ListAlertResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListAlertState(const ListAlertStateRequestType& req,
          ListAlertStateResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListContact(const ListContactRequestType& req,
          ListContactResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListContactGroup(const ListContactGroupRequestType& req,
          ListContactGroupResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListDBMetric(const ListDBMetricRequestType& req,
          ListDBMetricResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListDBSource(const ListDBSourceRequestType& req,
          ListDBSourceResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListDimensions(const ListDimensionsRequestType& req,
          ListDimensionsResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListLevelChannel(const ListLevelChannelRequestType& req,
          ListLevelChannelResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListLogHubMetric(const ListLogHubMetricRequestType& req,
          ListLogHubMetricResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListNotifyHistory(const ListNotifyHistoryRequestType& req,
          ListNotifyHistoryResponseType* resp,
          AliAlertErrorInfo* error_info);

  int ListProject(const ListProjectRequestType& req,
          ListProjectResponseType* resp,
          AliAlertErrorInfo* error_info);

  int RemoveProjectOwner(const RemoveProjectOwnerRequestType& req,
          RemoveProjectOwnerResponseType* resp,
          AliAlertErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
