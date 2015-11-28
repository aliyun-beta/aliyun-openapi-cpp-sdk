#ifndef ALI_RDSH
#define ALI_RDSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_rds_add_tags_to_resource_types.h"
#include "ali_rds_allocate_instance_private_connection_types.h"
#include "ali_rds_allocate_instance_public_connection_types.h"
#include "ali_rds_batch_grant_account_privilege_types.h"
#include "ali_rds_batch_revoke_account_privilege_types.h"
#include "ali_rds_cancel_import_types.h"
#include "ali_rds_check_account_name_available_types.h"
#include "ali_rds_check_db_name_available_types.h"
#include "ali_rds_create_account_types.h"
#include "ali_rds_create_account_for_inner_types.h"
#include "ali_rds_create_backup_types.h"
#include "ali_rds_create_database_types.h"
#include "ali_rds_create_database_for_inner_types.h"
#include "ali_rds_create_db_instance_types.h"
#include "ali_rds_create_db_instance_for_channel_types.h"
#include "ali_rds_create_db_instancefor_first_pay_types.h"
#include "ali_rds_create_postpaid_db_instance_types.h"
#include "ali_rds_create_postpaid_db_instance_for_channel_types.h"
#include "ali_rds_create_read_only_db_instance_types.h"
#include "ali_rds_create_temp_db_instance_types.h"
#include "ali_rds_create_upload_path_for_sq_lserver_types.h"
#include "ali_rds_delete_account_types.h"
#include "ali_rds_delete_database_types.h"
#include "ali_rds_delete_db_instance_types.h"
#include "ali_rds_descibe_imports_from_database_types.h"
#include "ali_rds_describe_abnormal_db_instances_types.h"
#include "ali_rds_describe_accounts_types.h"
#include "ali_rds_describe_backup_policy_types.h"
#include "ali_rds_describe_backups_types.h"
#include "ali_rds_describe_backup_tasks_types.h"
#include "ali_rds_describe_binlog_files_types.h"
#include "ali_rds_describe_databases_types.h"
#include "ali_rds_describe_db_instance_attribute_types.h"
#include "ali_rds_describe_db_instance_ip_array_list_types.h"
#include "ali_rds_describe_db_instance_net_info_types.h"
#include "ali_rds_describe_db_instance_net_info_for_channel_types.h"
#include "ali_rds_describe_db_instance_performance_types.h"
#include "ali_rds_describe_db_instances_types.h"
#include "ali_rds_describe_db_instances_by_expire_time_types.h"
#include "ali_rds_describe_db_instances_by_performance_types.h"
#include "ali_rds_describe_error_logs_types.h"
#include "ali_rds_describe_files_for_sq_lserver_types.h"
#include "ali_rds_describe_imports_for_sq_lserver_types.h"
#include "ali_rds_describe_modify_parameter_log_types.h"
#include "ali_rds_describe_operation_logs_types.h"
#include "ali_rds_describe_optimize_advice_by_db_atypes.h"
#include "ali_rds_describe_optimize_advice_on_big_table_types.h"
#include "ali_rds_describe_optimize_advice_on_excess_index_types.h"
#include "ali_rds_describe_optimize_advice_on_miss_index_types.h"
#include "ali_rds_describe_optimize_advice_on_miss_pk_types.h"
#include "ali_rds_describe_optimize_advice_on_storage_types.h"
#include "ali_rds_describe_parameters_types.h"
#include "ali_rds_describe_parameter_templates_types.h"
#include "ali_rds_describe_pre_check_results_types.h"
#include "ali_rds_describe_realtime_diagnoses_types.h"
#include "ali_rds_describe_regions_types.h"
#include "ali_rds_describe_resource_usage_types.h"
#include "ali_rds_describe_slow_log_records_types.h"
#include "ali_rds_describe_slow_logs_types.h"
#include "ali_rds_describe_sq_linjection_infos_types.h"
#include "ali_rds_describe_sq_llog_records_types.h"
#include "ali_rds_describe_sq_llog_report_list_types.h"
#include "ali_rds_describe_sq_llog_reports_types.h"
#include "ali_rds_describe_tasks_types.h"
#include "ali_rds_describe_vpc_zone_nos_types.h"
#include "ali_rds_extract_backup_from_oa_stypes.h"
#include "ali_rds_grant_account_privilege_types.h"
#include "ali_rds_import_database_between_instances_types.h"
#include "ali_rds_import_data_for_sq_lserver_types.h"
#include "ali_rds_import_data_from_database_types.h"
#include "ali_rds_lock_db_instance_types.h"
#include "ali_rds_migrate_to_other_zone_types.h"
#include "ali_rds_modify_account_description_types.h"
#include "ali_rds_modify_backup_policy_types.h"
#include "ali_rds_modify_db_description_types.h"
#include "ali_rds_modify_db_instance_connection_mode_types.h"
#include "ali_rds_modify_db_instance_connection_string_types.h"
#include "ali_rds_modify_db_instance_description_types.h"
#include "ali_rds_modify_db_instance_maintain_time_types.h"
#include "ali_rds_modify_db_instance_network_type_types.h"
#include "ali_rds_modify_db_instance_spec_types.h"
#include "ali_rds_modify_parameter_types.h"
#include "ali_rds_modify_postpaid_db_instance_spec_types.h"
#include "ali_rds_modify_security_ips_types.h"
#include "ali_rds_pre_check_before_import_data_types.h"
#include "ali_rds_purge_db_instance_log_types.h"
#include "ali_rds_release_instance_public_connection_types.h"
#include "ali_rds_remove_tags_from_resource_types.h"
#include "ali_rds_reset_account_for_pg_types.h"
#include "ali_rds_reset_account_password_types.h"
#include "ali_rds_restart_db_instance_types.h"
#include "ali_rds_restore_db_instance_types.h"
#include "ali_rds_revoke_account_privilege_types.h"
#include "ali_rds_start_db_instance_diagnose_types.h"
#include "ali_rds_stop_syncing_types.h"
#include "ali_rds_switch_db_instance_net_type_types.h"
#include "ali_rds_unlock_db_instance_types.h"
#include "ali_rds_upgrade_db_instance_engine_version_types.h"
#ifdef WIN32
 #ifdef aliyun_api_rds_2014_08_15_EXPORTS
 #define ALIYUN_API_RDS_2014_08_15_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_RDS_2014_08_15_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_RDS_2014_08_15_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct RdsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_RDS_2014_08_15_DLL_EXPORT_IMPORT Rds {
public:
  static Rds* CreateRdsClient(std::string endpoint, std::string appid, std::string secret);
  ~Rds();
private:
  Rds(std::string host, std::string appid, std::string secret);
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
  int AddTagsToResource(const RdsAddTagsToResourceRequestType& req,
          RdsAddTagsToResourceResponseType* resp,
          RdsErrorInfo* error_info);

  int AllocateInstancePrivateConnection(const RdsAllocateInstancePrivateConnectionRequestType& req,
          RdsAllocateInstancePrivateConnectionResponseType* resp,
          RdsErrorInfo* error_info);

  int AllocateInstancePublicConnection(const RdsAllocateInstancePublicConnectionRequestType& req,
          RdsAllocateInstancePublicConnectionResponseType* resp,
          RdsErrorInfo* error_info);

  int BatchGrantAccountPrivilege(const RdsBatchGrantAccountPrivilegeRequestType& req,
          RdsBatchGrantAccountPrivilegeResponseType* resp,
          RdsErrorInfo* error_info);

  int BatchRevokeAccountPrivilege(const RdsBatchRevokeAccountPrivilegeRequestType& req,
          RdsBatchRevokeAccountPrivilegeResponseType* resp,
          RdsErrorInfo* error_info);

  int CancelImport(const RdsCancelImportRequestType& req,
          RdsCancelImportResponseType* resp,
          RdsErrorInfo* error_info);

  int CheckAccountNameAvailable(const RdsCheckAccountNameAvailableRequestType& req,
          RdsCheckAccountNameAvailableResponseType* resp,
          RdsErrorInfo* error_info);

  int CheckDBNameAvailable(const RdsCheckDBNameAvailableRequestType& req,
          RdsCheckDBNameAvailableResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateAccount(const RdsCreateAccountRequestType& req,
          RdsCreateAccountResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateAccountForInner(const RdsCreateAccountForInnerRequestType& req,
          RdsCreateAccountForInnerResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateBackup(const RdsCreateBackupRequestType& req,
          RdsCreateBackupResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateDatabase(const RdsCreateDatabaseRequestType& req,
          RdsCreateDatabaseResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateDatabaseForInner(const RdsCreateDatabaseForInnerRequestType& req,
          RdsCreateDatabaseForInnerResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateDBInstance(const RdsCreateDBInstanceRequestType& req,
          RdsCreateDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateDBInstanceForChannel(const RdsCreateDBInstanceForChannelRequestType& req,
          RdsCreateDBInstanceForChannelResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateDBInstanceforFirstPay(const RdsCreateDBInstanceforFirstPayRequestType& req,
          RdsCreateDBInstanceforFirstPayResponseType* resp,
          RdsErrorInfo* error_info);

  int CreatePostpaidDBInstance(const RdsCreatePostpaidDBInstanceRequestType& req,
          RdsCreatePostpaidDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int CreatePostpaidDBInstanceForChannel(const RdsCreatePostpaidDBInstanceForChannelRequestType& req,
          RdsCreatePostpaidDBInstanceForChannelResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateReadOnlyDBInstance(const RdsCreateReadOnlyDBInstanceRequestType& req,
          RdsCreateReadOnlyDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateTempDBInstance(const RdsCreateTempDBInstanceRequestType& req,
          RdsCreateTempDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int CreateUploadPathForSQLServer(const RdsCreateUploadPathForSQLServerRequestType& req,
          RdsCreateUploadPathForSQLServerResponseType* resp,
          RdsErrorInfo* error_info);

  int DeleteAccount(const RdsDeleteAccountRequestType& req,
          RdsDeleteAccountResponseType* resp,
          RdsErrorInfo* error_info);

  int DeleteDatabase(const RdsDeleteDatabaseRequestType& req,
          RdsDeleteDatabaseResponseType* resp,
          RdsErrorInfo* error_info);

  int DeleteDBInstance(const RdsDeleteDBInstanceRequestType& req,
          RdsDeleteDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int DescibeImportsFromDatabase(const RdsDescibeImportsFromDatabaseRequestType& req,
          RdsDescibeImportsFromDatabaseResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeAbnormalDBInstances(const RdsDescribeAbnormalDBInstancesRequestType& req,
          RdsDescribeAbnormalDBInstancesResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeAccounts(const RdsDescribeAccountsRequestType& req,
          RdsDescribeAccountsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeBackupPolicy(const RdsDescribeBackupPolicyRequestType& req,
          RdsDescribeBackupPolicyResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeBackups(const RdsDescribeBackupsRequestType& req,
          RdsDescribeBackupsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeBackupTasks(const RdsDescribeBackupTasksRequestType& req,
          RdsDescribeBackupTasksResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeBinlogFiles(const RdsDescribeBinlogFilesRequestType& req,
          RdsDescribeBinlogFilesResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDatabases(const RdsDescribeDatabasesRequestType& req,
          RdsDescribeDatabasesResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstanceAttribute(const RdsDescribeDBInstanceAttributeRequestType& req,
          RdsDescribeDBInstanceAttributeResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstanceIPArrayList(const RdsDescribeDBInstanceIPArrayListRequestType& req,
          RdsDescribeDBInstanceIPArrayListResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstanceNetInfo(const RdsDescribeDBInstanceNetInfoRequestType& req,
          RdsDescribeDBInstanceNetInfoResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstanceNetInfoForChannel(const RdsDescribeDBInstanceNetInfoForChannelRequestType& req,
          RdsDescribeDBInstanceNetInfoForChannelResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstancePerformance(const RdsDescribeDBInstancePerformanceRequestType& req,
          RdsDescribeDBInstancePerformanceResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstances(const RdsDescribeDBInstancesRequestType& req,
          RdsDescribeDBInstancesResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstancesByExpireTime(const RdsDescribeDBInstancesByExpireTimeRequestType& req,
          RdsDescribeDBInstancesByExpireTimeResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeDBInstancesByPerformance(const RdsDescribeDBInstancesByPerformanceRequestType& req,
          RdsDescribeDBInstancesByPerformanceResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeErrorLogs(const RdsDescribeErrorLogsRequestType& req,
          RdsDescribeErrorLogsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeFilesForSQLServer(const RdsDescribeFilesForSQLServerRequestType& req,
          RdsDescribeFilesForSQLServerResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeImportsForSQLServer(const RdsDescribeImportsForSQLServerRequestType& req,
          RdsDescribeImportsForSQLServerResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeModifyParameterLog(const RdsDescribeModifyParameterLogRequestType& req,
          RdsDescribeModifyParameterLogResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOperationLogs(const RdsDescribeOperationLogsRequestType& req,
          RdsDescribeOperationLogsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOptimizeAdviceByDBA(const RdsDescribeOptimizeAdviceByDBARequestType& req,
          RdsDescribeOptimizeAdviceByDBAResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnBigTable(const RdsDescribeOptimizeAdviceOnBigTableRequestType& req,
          RdsDescribeOptimizeAdviceOnBigTableResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnExcessIndex(const RdsDescribeOptimizeAdviceOnExcessIndexRequestType& req,
          RdsDescribeOptimizeAdviceOnExcessIndexResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnMissIndex(const RdsDescribeOptimizeAdviceOnMissIndexRequestType& req,
          RdsDescribeOptimizeAdviceOnMissIndexResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnMissPK(const RdsDescribeOptimizeAdviceOnMissPKRequestType& req,
          RdsDescribeOptimizeAdviceOnMissPKResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnStorage(const RdsDescribeOptimizeAdviceOnStorageRequestType& req,
          RdsDescribeOptimizeAdviceOnStorageResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeParameters(const RdsDescribeParametersRequestType& req,
          RdsDescribeParametersResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeParameterTemplates(const RdsDescribeParameterTemplatesRequestType& req,
          RdsDescribeParameterTemplatesResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribePreCheckResults(const RdsDescribePreCheckResultsRequestType& req,
          RdsDescribePreCheckResultsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeRealtimeDiagnoses(const RdsDescribeRealtimeDiagnosesRequestType& req,
          RdsDescribeRealtimeDiagnosesResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeRegions(const RdsDescribeRegionsRequestType& req,
          RdsDescribeRegionsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeResourceUsage(const RdsDescribeResourceUsageRequestType& req,
          RdsDescribeResourceUsageResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeSlowLogRecords(const RdsDescribeSlowLogRecordsRequestType& req,
          RdsDescribeSlowLogRecordsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeSlowLogs(const RdsDescribeSlowLogsRequestType& req,
          RdsDescribeSlowLogsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeSQLInjectionInfos(const RdsDescribeSQLInjectionInfosRequestType& req,
          RdsDescribeSQLInjectionInfosResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeSQLLogRecords(const RdsDescribeSQLLogRecordsRequestType& req,
          RdsDescribeSQLLogRecordsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeSQLLogReportList(const RdsDescribeSQLLogReportListRequestType& req,
          RdsDescribeSQLLogReportListResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeSQLLogReports(const RdsDescribeSQLLogReportsRequestType& req,
          RdsDescribeSQLLogReportsResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeTasks(const RdsDescribeTasksRequestType& req,
          RdsDescribeTasksResponseType* resp,
          RdsErrorInfo* error_info);

  int DescribeVpcZoneNos(const RdsDescribeVpcZoneNosRequestType& req,
          RdsDescribeVpcZoneNosResponseType* resp,
          RdsErrorInfo* error_info);

  int ExtractBackupFromOAS(const RdsExtractBackupFromOASRequestType& req,
          RdsExtractBackupFromOASResponseType* resp,
          RdsErrorInfo* error_info);

  int GrantAccountPrivilege(const RdsGrantAccountPrivilegeRequestType& req,
          RdsGrantAccountPrivilegeResponseType* resp,
          RdsErrorInfo* error_info);

  int ImportDatabaseBetweenInstances(const RdsImportDatabaseBetweenInstancesRequestType& req,
          RdsImportDatabaseBetweenInstancesResponseType* resp,
          RdsErrorInfo* error_info);

  int ImportDataForSQLServer(const RdsImportDataForSQLServerRequestType& req,
          RdsImportDataForSQLServerResponseType* resp,
          RdsErrorInfo* error_info);

  int ImportDataFromDatabase(const RdsImportDataFromDatabaseRequestType& req,
          RdsImportDataFromDatabaseResponseType* resp,
          RdsErrorInfo* error_info);

  int LockDBInstance(const RdsLockDBInstanceRequestType& req,
          RdsLockDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int MigrateToOtherZone(const RdsMigrateToOtherZoneRequestType& req,
          RdsMigrateToOtherZoneResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyAccountDescription(const RdsModifyAccountDescriptionRequestType& req,
          RdsModifyAccountDescriptionResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyBackupPolicy(const RdsModifyBackupPolicyRequestType& req,
          RdsModifyBackupPolicyResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBDescription(const RdsModifyDBDescriptionRequestType& req,
          RdsModifyDBDescriptionResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBInstanceConnectionMode(const RdsModifyDBInstanceConnectionModeRequestType& req,
          RdsModifyDBInstanceConnectionModeResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBInstanceConnectionString(const RdsModifyDBInstanceConnectionStringRequestType& req,
          RdsModifyDBInstanceConnectionStringResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBInstanceDescription(const RdsModifyDBInstanceDescriptionRequestType& req,
          RdsModifyDBInstanceDescriptionResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBInstanceMaintainTime(const RdsModifyDBInstanceMaintainTimeRequestType& req,
          RdsModifyDBInstanceMaintainTimeResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBInstanceNetworkType(const RdsModifyDBInstanceNetworkTypeRequestType& req,
          RdsModifyDBInstanceNetworkTypeResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyDBInstanceSpec(const RdsModifyDBInstanceSpecRequestType& req,
          RdsModifyDBInstanceSpecResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyParameter(const RdsModifyParameterRequestType& req,
          RdsModifyParameterResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifyPostpaidDBInstanceSpec(const RdsModifyPostpaidDBInstanceSpecRequestType& req,
          RdsModifyPostpaidDBInstanceSpecResponseType* resp,
          RdsErrorInfo* error_info);

  int ModifySecurityIps(const RdsModifySecurityIpsRequestType& req,
          RdsModifySecurityIpsResponseType* resp,
          RdsErrorInfo* error_info);

  int PreCheckBeforeImportData(const RdsPreCheckBeforeImportDataRequestType& req,
          RdsPreCheckBeforeImportDataResponseType* resp,
          RdsErrorInfo* error_info);

  int PurgeDBInstanceLog(const RdsPurgeDBInstanceLogRequestType& req,
          RdsPurgeDBInstanceLogResponseType* resp,
          RdsErrorInfo* error_info);

  int ReleaseInstancePublicConnection(const RdsReleaseInstancePublicConnectionRequestType& req,
          RdsReleaseInstancePublicConnectionResponseType* resp,
          RdsErrorInfo* error_info);

  int RemoveTagsFromResource(const RdsRemoveTagsFromResourceRequestType& req,
          RdsRemoveTagsFromResourceResponseType* resp,
          RdsErrorInfo* error_info);

  int ResetAccountForPG(const RdsResetAccountForPGRequestType& req,
          RdsResetAccountForPGResponseType* resp,
          RdsErrorInfo* error_info);

  int ResetAccountPassword(const RdsResetAccountPasswordRequestType& req,
          RdsResetAccountPasswordResponseType* resp,
          RdsErrorInfo* error_info);

  int RestartDBInstance(const RdsRestartDBInstanceRequestType& req,
          RdsRestartDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int RestoreDBInstance(const RdsRestoreDBInstanceRequestType& req,
          RdsRestoreDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int RevokeAccountPrivilege(const RdsRevokeAccountPrivilegeRequestType& req,
          RdsRevokeAccountPrivilegeResponseType* resp,
          RdsErrorInfo* error_info);

  int StartDBInstanceDiagnose(const RdsStartDBInstanceDiagnoseRequestType& req,
          RdsStartDBInstanceDiagnoseResponseType* resp,
          RdsErrorInfo* error_info);

  int StopSyncing(const RdsStopSyncingRequestType& req,
          RdsStopSyncingResponseType* resp,
          RdsErrorInfo* error_info);

  int SwitchDBInstanceNetType(const RdsSwitchDBInstanceNetTypeRequestType& req,
          RdsSwitchDBInstanceNetTypeResponseType* resp,
          RdsErrorInfo* error_info);

  int UnlockDBInstance(const RdsUnlockDBInstanceRequestType& req,
          RdsUnlockDBInstanceResponseType* resp,
          RdsErrorInfo* error_info);

  int UpgradeDBInstanceEngineVersion(const RdsUpgradeDBInstanceEngineVersionRequestType& req,
          RdsUpgradeDBInstanceEngineVersionResponseType* resp,
          RdsErrorInfo* error_info);

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
