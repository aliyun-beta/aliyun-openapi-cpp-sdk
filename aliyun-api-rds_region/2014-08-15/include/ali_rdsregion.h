#ifndef ali_rdsregionH
#define ali_rdsregionH
#include <string>
#include "ali_rdsregion_add_tags_to_resource_types.h"
#include "ali_rdsregion_allocate_instance_private_connection_types.h"
#include "ali_rdsregion_allocate_instance_public_connection_types.h"
#include "ali_rdsregion_batch_grant_account_privilege_types.h"
#include "ali_rdsregion_batch_revoke_account_privilege_types.h"
#include "ali_rdsregion_cancel_import_types.h"
#include "ali_rdsregion_check_account_name_available_types.h"
#include "ali_rdsregion_check_db_name_available_types.h"
#include "ali_rdsregion_create_account_types.h"
#include "ali_rdsregion_create_account_for_inner_types.h"
#include "ali_rdsregion_create_backup_types.h"
#include "ali_rdsregion_create_database_types.h"
#include "ali_rdsregion_create_database_for_inner_types.h"
#include "ali_rdsregion_create_db_instance_types.h"
#include "ali_rdsregion_create_db_instance_for_channel_types.h"
#include "ali_rdsregion_create_db_instancefor_first_pay_types.h"
#include "ali_rdsregion_create_postpaid_db_instance_types.h"
#include "ali_rdsregion_create_postpaid_db_instance_for_channel_types.h"
#include "ali_rdsregion_create_read_only_db_instance_types.h"
#include "ali_rdsregion_create_temp_db_instance_types.h"
#include "ali_rdsregion_create_upload_path_for_sq_lserver_types.h"
#include "ali_rdsregion_delete_account_types.h"
#include "ali_rdsregion_delete_database_types.h"
#include "ali_rdsregion_delete_db_instance_types.h"
#include "ali_rdsregion_descibe_imports_from_database_types.h"
#include "ali_rdsregion_describe_abnormal_db_instances_types.h"
#include "ali_rdsregion_describe_accounts_types.h"
#include "ali_rdsregion_describe_backup_policy_types.h"
#include "ali_rdsregion_describe_backups_types.h"
#include "ali_rdsregion_describe_backup_tasks_types.h"
#include "ali_rdsregion_describe_binlog_files_types.h"
#include "ali_rdsregion_describe_databases_types.h"
#include "ali_rdsregion_describe_db_instance_attribute_types.h"
#include "ali_rdsregion_describe_db_instance_ip_array_list_types.h"
#include "ali_rdsregion_describe_db_instance_net_info_types.h"
#include "ali_rdsregion_describe_db_instance_net_info_for_channel_types.h"
#include "ali_rdsregion_describe_db_instance_performance_types.h"
#include "ali_rdsregion_describe_db_instances_types.h"
#include "ali_rdsregion_describe_db_instances_by_expire_time_types.h"
#include "ali_rdsregion_describe_db_instances_by_performance_types.h"
#include "ali_rdsregion_describe_error_logs_types.h"
#include "ali_rdsregion_describe_files_for_sq_lserver_types.h"
#include "ali_rdsregion_describe_imports_for_sq_lserver_types.h"
#include "ali_rdsregion_describe_modify_parameter_log_types.h"
#include "ali_rdsregion_describe_operation_logs_types.h"
#include "ali_rdsregion_describe_optimize_advice_by_db_atypes.h"
#include "ali_rdsregion_describe_optimize_advice_on_big_table_types.h"
#include "ali_rdsregion_describe_optimize_advice_on_excess_index_types.h"
#include "ali_rdsregion_describe_optimize_advice_on_miss_index_types.h"
#include "ali_rdsregion_describe_optimize_advice_on_miss_pk_types.h"
#include "ali_rdsregion_describe_optimize_advice_on_storage_types.h"
#include "ali_rdsregion_describe_parameters_types.h"
#include "ali_rdsregion_describe_parameter_templates_types.h"
#include "ali_rdsregion_describe_pre_check_results_types.h"
#include "ali_rdsregion_describe_realtime_diagnoses_types.h"
#include "ali_rdsregion_describe_regions_types.h"
#include "ali_rdsregion_describe_resource_usage_types.h"
#include "ali_rdsregion_describe_slow_log_records_types.h"
#include "ali_rdsregion_describe_slow_logs_types.h"
#include "ali_rdsregion_describe_sq_linjection_infos_types.h"
#include "ali_rdsregion_describe_sq_llog_records_types.h"
#include "ali_rdsregion_describe_sq_llog_reports_types.h"
#include "ali_rdsregion_describe_tasks_types.h"
#include "ali_rdsregion_describe_vpc_zone_nos_types.h"
#include "ali_rdsregion_extract_backup_from_oa_stypes.h"
#include "ali_rdsregion_grant_account_privilege_types.h"
#include "ali_rdsregion_import_database_between_instances_types.h"
#include "ali_rdsregion_import_data_for_sq_lserver_types.h"
#include "ali_rdsregion_import_data_from_database_types.h"
#include "ali_rdsregion_lock_db_instance_types.h"
#include "ali_rdsregion_migrate_to_other_zone_types.h"
#include "ali_rdsregion_modify_account_description_types.h"
#include "ali_rdsregion_modify_backup_policy_types.h"
#include "ali_rdsregion_modify_db_description_types.h"
#include "ali_rdsregion_modify_db_instance_connection_mode_types.h"
#include "ali_rdsregion_modify_db_instance_connection_string_types.h"
#include "ali_rdsregion_modify_db_instance_description_types.h"
#include "ali_rdsregion_modify_db_instance_maintain_time_types.h"
#include "ali_rdsregion_modify_db_instance_network_type_types.h"
#include "ali_rdsregion_modify_db_instance_spec_types.h"
#include "ali_rdsregion_modify_parameter_types.h"
#include "ali_rdsregion_modify_postpaid_db_instance_spec_types.h"
#include "ali_rdsregion_modify_security_ips_types.h"
#include "ali_rdsregion_pre_check_before_import_data_types.h"
#include "ali_rdsregion_purge_db_instance_log_types.h"
#include "ali_rdsregion_release_instance_public_connection_types.h"
#include "ali_rdsregion_remove_tags_from_resource_types.h"
#include "ali_rdsregion_reset_account_for_pg_types.h"
#include "ali_rdsregion_reset_account_password_types.h"
#include "ali_rdsregion_restart_db_instance_types.h"
#include "ali_rdsregion_restore_db_instance_types.h"
#include "ali_rdsregion_revoke_account_privilege_types.h"
#include "ali_rdsregion_start_db_instance_diagnose_types.h"
#include "ali_rdsregion_stop_syncing_types.h"
#include "ali_rdsregion_switch_db_instance_net_type_types.h"
#include "ali_rdsregion_unlock_db_instance_types.h"
#include "ali_rdsregion_upgrade_db_instance_engine_version_types.h"
namespace aliyun {
struct RdsRegionErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class RdsRegion {
public:
  static RdsRegion* CreateRdsRegionClient(std::string endpoint, std::string appid, std::string secret);
private:
  RdsRegion(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-08-15"),
  host_(host) {}
public:
  int AddTagsToResource(const RdsRegionAddTagsToResourceRequestType& req,
          RdsRegionAddTagsToResourceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int AllocateInstancePrivateConnection(const RdsRegionAllocateInstancePrivateConnectionRequestType& req,
          RdsRegionAllocateInstancePrivateConnectionResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int AllocateInstancePublicConnection(const RdsRegionAllocateInstancePublicConnectionRequestType& req,
          RdsRegionAllocateInstancePublicConnectionResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int BatchGrantAccountPrivilege(const RdsRegionBatchGrantAccountPrivilegeRequestType& req,
          RdsRegionBatchGrantAccountPrivilegeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int BatchRevokeAccountPrivilege(const RdsRegionBatchRevokeAccountPrivilegeRequestType& req,
          RdsRegionBatchRevokeAccountPrivilegeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CancelImport(const RdsRegionCancelImportRequestType& req,
          RdsRegionCancelImportResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CheckAccountNameAvailable(const RdsRegionCheckAccountNameAvailableRequestType& req,
          RdsRegionCheckAccountNameAvailableResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CheckDBNameAvailable(const RdsRegionCheckDBNameAvailableRequestType& req,
          RdsRegionCheckDBNameAvailableResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateAccount(const RdsRegionCreateAccountRequestType& req,
          RdsRegionCreateAccountResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateAccountForInner(const RdsRegionCreateAccountForInnerRequestType& req,
          RdsRegionCreateAccountForInnerResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateBackup(const RdsRegionCreateBackupRequestType& req,
          RdsRegionCreateBackupResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateDatabase(const RdsRegionCreateDatabaseRequestType& req,
          RdsRegionCreateDatabaseResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateDatabaseForInner(const RdsRegionCreateDatabaseForInnerRequestType& req,
          RdsRegionCreateDatabaseForInnerResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateDBInstance(const RdsRegionCreateDBInstanceRequestType& req,
          RdsRegionCreateDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateDBInstanceForChannel(const RdsRegionCreateDBInstanceForChannelRequestType& req,
          RdsRegionCreateDBInstanceForChannelResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateDBInstanceforFirstPay(const RdsRegionCreateDBInstanceforFirstPayRequestType& req,
          RdsRegionCreateDBInstanceforFirstPayResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreatePostpaidDBInstance(const RdsRegionCreatePostpaidDBInstanceRequestType& req,
          RdsRegionCreatePostpaidDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreatePostpaidDBInstanceForChannel(const RdsRegionCreatePostpaidDBInstanceForChannelRequestType& req,
          RdsRegionCreatePostpaidDBInstanceForChannelResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateReadOnlyDBInstance(const RdsRegionCreateReadOnlyDBInstanceRequestType& req,
          RdsRegionCreateReadOnlyDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateTempDBInstance(const RdsRegionCreateTempDBInstanceRequestType& req,
          RdsRegionCreateTempDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int CreateUploadPathForSQLServer(const RdsRegionCreateUploadPathForSQLServerRequestType& req,
          RdsRegionCreateUploadPathForSQLServerResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DeleteAccount(const RdsRegionDeleteAccountRequestType& req,
          RdsRegionDeleteAccountResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DeleteDatabase(const RdsRegionDeleteDatabaseRequestType& req,
          RdsRegionDeleteDatabaseResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DeleteDBInstance(const RdsRegionDeleteDBInstanceRequestType& req,
          RdsRegionDeleteDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescibeImportsFromDatabase(const RdsRegionDescibeImportsFromDatabaseRequestType& req,
          RdsRegionDescibeImportsFromDatabaseResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeAbnormalDBInstances(const RdsRegionDescribeAbnormalDBInstancesRequestType& req,
          RdsRegionDescribeAbnormalDBInstancesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeAccounts(const RdsRegionDescribeAccountsRequestType& req,
          RdsRegionDescribeAccountsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeBackupPolicy(const RdsRegionDescribeBackupPolicyRequestType& req,
          RdsRegionDescribeBackupPolicyResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeBackups(const RdsRegionDescribeBackupsRequestType& req,
          RdsRegionDescribeBackupsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeBackupTasks(const RdsRegionDescribeBackupTasksRequestType& req,
          RdsRegionDescribeBackupTasksResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeBinlogFiles(const RdsRegionDescribeBinlogFilesRequestType& req,
          RdsRegionDescribeBinlogFilesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDatabases(const RdsRegionDescribeDatabasesRequestType& req,
          RdsRegionDescribeDatabasesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstanceAttribute(const RdsRegionDescribeDBInstanceAttributeRequestType& req,
          RdsRegionDescribeDBInstanceAttributeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstanceIPArrayList(const RdsRegionDescribeDBInstanceIPArrayListRequestType& req,
          RdsRegionDescribeDBInstanceIPArrayListResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstanceNetInfo(const RdsRegionDescribeDBInstanceNetInfoRequestType& req,
          RdsRegionDescribeDBInstanceNetInfoResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstanceNetInfoForChannel(const RdsRegionDescribeDBInstanceNetInfoForChannelRequestType& req,
          RdsRegionDescribeDBInstanceNetInfoForChannelResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstancePerformance(const RdsRegionDescribeDBInstancePerformanceRequestType& req,
          RdsRegionDescribeDBInstancePerformanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstances(const RdsRegionDescribeDBInstancesRequestType& req,
          RdsRegionDescribeDBInstancesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstancesByExpireTime(const RdsRegionDescribeDBInstancesByExpireTimeRequestType& req,
          RdsRegionDescribeDBInstancesByExpireTimeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeDBInstancesByPerformance(const RdsRegionDescribeDBInstancesByPerformanceRequestType& req,
          RdsRegionDescribeDBInstancesByPerformanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeErrorLogs(const RdsRegionDescribeErrorLogsRequestType& req,
          RdsRegionDescribeErrorLogsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeFilesForSQLServer(const RdsRegionDescribeFilesForSQLServerRequestType& req,
          RdsRegionDescribeFilesForSQLServerResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeImportsForSQLServer(const RdsRegionDescribeImportsForSQLServerRequestType& req,
          RdsRegionDescribeImportsForSQLServerResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeModifyParameterLog(const RdsRegionDescribeModifyParameterLogRequestType& req,
          RdsRegionDescribeModifyParameterLogResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOperationLogs(const RdsRegionDescribeOperationLogsRequestType& req,
          RdsRegionDescribeOperationLogsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOptimizeAdviceByDBA(const RdsRegionDescribeOptimizeAdviceByDBARequestType& req,
          RdsRegionDescribeOptimizeAdviceByDBAResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOptimizeAdviceOnBigTable(const RdsRegionDescribeOptimizeAdviceOnBigTableRequestType& req,
          RdsRegionDescribeOptimizeAdviceOnBigTableResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOptimizeAdviceOnExcessIndex(const RdsRegionDescribeOptimizeAdviceOnExcessIndexRequestType& req,
          RdsRegionDescribeOptimizeAdviceOnExcessIndexResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOptimizeAdviceOnMissIndex(const RdsRegionDescribeOptimizeAdviceOnMissIndexRequestType& req,
          RdsRegionDescribeOptimizeAdviceOnMissIndexResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOptimizeAdviceOnMissPK(const RdsRegionDescribeOptimizeAdviceOnMissPKRequestType& req,
          RdsRegionDescribeOptimizeAdviceOnMissPKResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeOptimizeAdviceOnStorage(const RdsRegionDescribeOptimizeAdviceOnStorageRequestType& req,
          RdsRegionDescribeOptimizeAdviceOnStorageResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeParameters(const RdsRegionDescribeParametersRequestType& req,
          RdsRegionDescribeParametersResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeParameterTemplates(const RdsRegionDescribeParameterTemplatesRequestType& req,
          RdsRegionDescribeParameterTemplatesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribePreCheckResults(const RdsRegionDescribePreCheckResultsRequestType& req,
          RdsRegionDescribePreCheckResultsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeRealtimeDiagnoses(const RdsRegionDescribeRealtimeDiagnosesRequestType& req,
          RdsRegionDescribeRealtimeDiagnosesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeRegions(const RdsRegionDescribeRegionsRequestType& req,
          RdsRegionDescribeRegionsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeResourceUsage(const RdsRegionDescribeResourceUsageRequestType& req,
          RdsRegionDescribeResourceUsageResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeSlowLogRecords(const RdsRegionDescribeSlowLogRecordsRequestType& req,
          RdsRegionDescribeSlowLogRecordsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeSlowLogs(const RdsRegionDescribeSlowLogsRequestType& req,
          RdsRegionDescribeSlowLogsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeSQLInjectionInfos(const RdsRegionDescribeSQLInjectionInfosRequestType& req,
          RdsRegionDescribeSQLInjectionInfosResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeSQLLogRecords(const RdsRegionDescribeSQLLogRecordsRequestType& req,
          RdsRegionDescribeSQLLogRecordsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeSQLLogReports(const RdsRegionDescribeSQLLogReportsRequestType& req,
          RdsRegionDescribeSQLLogReportsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeTasks(const RdsRegionDescribeTasksRequestType& req,
          RdsRegionDescribeTasksResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int DescribeVpcZoneNos(const RdsRegionDescribeVpcZoneNosRequestType& req,
          RdsRegionDescribeVpcZoneNosResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ExtractBackupFromOAS(const RdsRegionExtractBackupFromOASRequestType& req,
          RdsRegionExtractBackupFromOASResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int GrantAccountPrivilege(const RdsRegionGrantAccountPrivilegeRequestType& req,
          RdsRegionGrantAccountPrivilegeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ImportDatabaseBetweenInstances(const RdsRegionImportDatabaseBetweenInstancesRequestType& req,
          RdsRegionImportDatabaseBetweenInstancesResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ImportDataForSQLServer(const RdsRegionImportDataForSQLServerRequestType& req,
          RdsRegionImportDataForSQLServerResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ImportDataFromDatabase(const RdsRegionImportDataFromDatabaseRequestType& req,
          RdsRegionImportDataFromDatabaseResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int LockDBInstance(const RdsRegionLockDBInstanceRequestType& req,
          RdsRegionLockDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int MigrateToOtherZone(const RdsRegionMigrateToOtherZoneRequestType& req,
          RdsRegionMigrateToOtherZoneResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyAccountDescription(const RdsRegionModifyAccountDescriptionRequestType& req,
          RdsRegionModifyAccountDescriptionResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyBackupPolicy(const RdsRegionModifyBackupPolicyRequestType& req,
          RdsRegionModifyBackupPolicyResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBDescription(const RdsRegionModifyDBDescriptionRequestType& req,
          RdsRegionModifyDBDescriptionResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBInstanceConnectionMode(const RdsRegionModifyDBInstanceConnectionModeRequestType& req,
          RdsRegionModifyDBInstanceConnectionModeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBInstanceConnectionString(const RdsRegionModifyDBInstanceConnectionStringRequestType& req,
          RdsRegionModifyDBInstanceConnectionStringResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBInstanceDescription(const RdsRegionModifyDBInstanceDescriptionRequestType& req,
          RdsRegionModifyDBInstanceDescriptionResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBInstanceMaintainTime(const RdsRegionModifyDBInstanceMaintainTimeRequestType& req,
          RdsRegionModifyDBInstanceMaintainTimeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBInstanceNetworkType(const RdsRegionModifyDBInstanceNetworkTypeRequestType& req,
          RdsRegionModifyDBInstanceNetworkTypeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyDBInstanceSpec(const RdsRegionModifyDBInstanceSpecRequestType& req,
          RdsRegionModifyDBInstanceSpecResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyParameter(const RdsRegionModifyParameterRequestType& req,
          RdsRegionModifyParameterResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifyPostpaidDBInstanceSpec(const RdsRegionModifyPostpaidDBInstanceSpecRequestType& req,
          RdsRegionModifyPostpaidDBInstanceSpecResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ModifySecurityIps(const RdsRegionModifySecurityIpsRequestType& req,
          RdsRegionModifySecurityIpsResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int PreCheckBeforeImportData(const RdsRegionPreCheckBeforeImportDataRequestType& req,
          RdsRegionPreCheckBeforeImportDataResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int PurgeDBInstanceLog(const RdsRegionPurgeDBInstanceLogRequestType& req,
          RdsRegionPurgeDBInstanceLogResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ReleaseInstancePublicConnection(const RdsRegionReleaseInstancePublicConnectionRequestType& req,
          RdsRegionReleaseInstancePublicConnectionResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int RemoveTagsFromResource(const RdsRegionRemoveTagsFromResourceRequestType& req,
          RdsRegionRemoveTagsFromResourceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ResetAccountForPG(const RdsRegionResetAccountForPGRequestType& req,
          RdsRegionResetAccountForPGResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int ResetAccountPassword(const RdsRegionResetAccountPasswordRequestType& req,
          RdsRegionResetAccountPasswordResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int RestartDBInstance(const RdsRegionRestartDBInstanceRequestType& req,
          RdsRegionRestartDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int RestoreDBInstance(const RdsRegionRestoreDBInstanceRequestType& req,
          RdsRegionRestoreDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int RevokeAccountPrivilege(const RdsRegionRevokeAccountPrivilegeRequestType& req,
          RdsRegionRevokeAccountPrivilegeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int StartDBInstanceDiagnose(const RdsRegionStartDBInstanceDiagnoseRequestType& req,
          RdsRegionStartDBInstanceDiagnoseResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int StopSyncing(const RdsRegionStopSyncingRequestType& req,
          RdsRegionStopSyncingResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int SwitchDBInstanceNetType(const RdsRegionSwitchDBInstanceNetTypeRequestType& req,
          RdsRegionSwitchDBInstanceNetTypeResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int UnlockDBInstance(const RdsRegionUnlockDBInstanceRequestType& req,
          RdsRegionUnlockDBInstanceResponseType* resp,
          RdsRegionErrorInfo* error_info);

  int UpgradeDBInstanceEngineVersion(const RdsRegionUpgradeDBInstanceEngineVersionRequestType& req,
          RdsRegionUpgradeDBInstanceEngineVersionResponseType* resp,
          RdsRegionErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
