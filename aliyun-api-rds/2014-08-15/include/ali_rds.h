#ifndef ALI_RDSH
#define ALI_RDSH
#include <string>
#include "ali_add_tags_to_resource_types.h"
#include "ali_allocate_instance_private_connection_types.h"
#include "ali_allocate_instance_public_connection_types.h"
#include "ali_batch_grant_account_privilege_types.h"
#include "ali_batch_revoke_account_privilege_types.h"
#include "ali_cancel_import_types.h"
#include "ali_check_account_name_available_types.h"
#include "ali_check_db_name_available_types.h"
#include "ali_create_account_types.h"
#include "ali_create_account_for_inner_types.h"
#include "ali_create_backup_types.h"
#include "ali_create_database_types.h"
#include "ali_create_database_for_inner_types.h"
#include "ali_create_db_instance_types.h"
#include "ali_create_db_instance_for_channel_types.h"
#include "ali_create_db_instancefor_first_pay_types.h"
#include "ali_create_postpaid_db_instance_types.h"
#include "ali_create_postpaid_db_instance_for_channel_types.h"
#include "ali_create_read_only_db_instance_types.h"
#include "ali_create_temp_db_instance_types.h"
#include "ali_create_upload_path_for_sq_lserver_types.h"
#include "ali_delete_account_types.h"
#include "ali_delete_database_types.h"
#include "ali_delete_db_instance_types.h"
#include "ali_descibe_imports_from_database_types.h"
#include "ali_describe_abnormal_db_instances_types.h"
#include "ali_describe_accounts_types.h"
#include "ali_describe_backup_policy_types.h"
#include "ali_describe_backups_types.h"
#include "ali_describe_backup_tasks_types.h"
#include "ali_describe_binlog_files_types.h"
#include "ali_describe_databases_types.h"
#include "ali_describe_db_instance_attribute_types.h"
#include "ali_describe_db_instance_ip_array_list_types.h"
#include "ali_describe_db_instance_net_info_types.h"
#include "ali_describe_db_instance_net_info_for_channel_types.h"
#include "ali_describe_db_instance_performance_types.h"
#include "ali_describe_db_instances_types.h"
#include "ali_describe_db_instances_by_expire_time_types.h"
#include "ali_describe_db_instances_by_performance_types.h"
#include "ali_describe_error_logs_types.h"
#include "ali_describe_files_for_sq_lserver_types.h"
#include "ali_describe_imports_for_sq_lserver_types.h"
#include "ali_describe_modify_parameter_log_types.h"
#include "ali_describe_operation_logs_types.h"
#include "ali_describe_optimize_advice_by_db_atypes.h"
#include "ali_describe_optimize_advice_on_big_table_types.h"
#include "ali_describe_optimize_advice_on_excess_index_types.h"
#include "ali_describe_optimize_advice_on_miss_index_types.h"
#include "ali_describe_optimize_advice_on_miss_pk_types.h"
#include "ali_describe_optimize_advice_on_storage_types.h"
#include "ali_describe_parameters_types.h"
#include "ali_describe_parameter_templates_types.h"
#include "ali_describe_pre_check_results_types.h"
#include "ali_describe_realtime_diagnoses_types.h"
#include "ali_describe_regions_types.h"
#include "ali_describe_resource_usage_types.h"
#include "ali_describe_slow_log_records_types.h"
#include "ali_describe_slow_logs_types.h"
#include "ali_describe_sq_linjection_infos_types.h"
#include "ali_describe_sq_llog_records_types.h"
#include "ali_describe_sq_llog_report_list_types.h"
#include "ali_describe_sq_llog_reports_types.h"
#include "ali_describe_tasks_types.h"
#include "ali_describe_vpc_zone_nos_types.h"
#include "ali_extract_backup_from_oa_stypes.h"
#include "ali_grant_account_privilege_types.h"
#include "ali_import_database_between_instances_types.h"
#include "ali_import_data_for_sq_lserver_types.h"
#include "ali_import_data_from_database_types.h"
#include "ali_lock_db_instance_types.h"
#include "ali_migrate_to_other_zone_types.h"
#include "ali_modify_account_description_types.h"
#include "ali_modify_backup_policy_types.h"
#include "ali_modify_db_description_types.h"
#include "ali_modify_db_instance_connection_mode_types.h"
#include "ali_modify_db_instance_connection_string_types.h"
#include "ali_modify_db_instance_description_types.h"
#include "ali_modify_db_instance_maintain_time_types.h"
#include "ali_modify_db_instance_network_type_types.h"
#include "ali_modify_db_instance_spec_types.h"
#include "ali_modify_parameter_types.h"
#include "ali_modify_postpaid_db_instance_spec_types.h"
#include "ali_modify_security_ips_types.h"
#include "ali_pre_check_before_import_data_types.h"
#include "ali_purge_db_instance_log_types.h"
#include "ali_release_instance_public_connection_types.h"
#include "ali_remove_tags_from_resource_types.h"
#include "ali_reset_account_for_pg_types.h"
#include "ali_reset_account_password_types.h"
#include "ali_restart_db_instance_types.h"
#include "ali_restore_db_instance_types.h"
#include "ali_revoke_account_privilege_types.h"
#include "ali_start_db_instance_diagnose_types.h"
#include "ali_stop_syncing_types.h"
#include "ali_switch_db_instance_net_type_types.h"
#include "ali_unlock_db_instance_types.h"
#include "ali_upgrade_db_instance_engine_version_types.h"
namespace aliyun {
struct AliRdsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Rds {
public:
  static Rds* CreateRdsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Rds(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-08-15"),
  host_(host) {}
public:
  int AddTagsToResource(const AddTagsToResourceRequestType& req,
          AddTagsToResourceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int AllocateInstancePrivateConnection(const AllocateInstancePrivateConnectionRequestType& req,
          AllocateInstancePrivateConnectionResponseType* resp,
          AliRdsErrorInfo* error_info);

  int AllocateInstancePublicConnection(const AllocateInstancePublicConnectionRequestType& req,
          AllocateInstancePublicConnectionResponseType* resp,
          AliRdsErrorInfo* error_info);

  int BatchGrantAccountPrivilege(const BatchGrantAccountPrivilegeRequestType& req,
          BatchGrantAccountPrivilegeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int BatchRevokeAccountPrivilege(const BatchRevokeAccountPrivilegeRequestType& req,
          BatchRevokeAccountPrivilegeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CancelImport(const CancelImportRequestType& req,
          CancelImportResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CheckAccountNameAvailable(const CheckAccountNameAvailableRequestType& req,
          CheckAccountNameAvailableResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CheckDBNameAvailable(const CheckDBNameAvailableRequestType& req,
          CheckDBNameAvailableResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateAccount(const CreateAccountRequestType& req,
          CreateAccountResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateAccountForInner(const CreateAccountForInnerRequestType& req,
          CreateAccountForInnerResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateBackup(const CreateBackupRequestType& req,
          CreateBackupResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateDatabase(const CreateDatabaseRequestType& req,
          CreateDatabaseResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateDatabaseForInner(const CreateDatabaseForInnerRequestType& req,
          CreateDatabaseForInnerResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateDBInstance(const CreateDBInstanceRequestType& req,
          CreateDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateDBInstanceForChannel(const CreateDBInstanceForChannelRequestType& req,
          CreateDBInstanceForChannelResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateDBInstanceforFirstPay(const CreateDBInstanceforFirstPayRequestType& req,
          CreateDBInstanceforFirstPayResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreatePostpaidDBInstance(const CreatePostpaidDBInstanceRequestType& req,
          CreatePostpaidDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreatePostpaidDBInstanceForChannel(const CreatePostpaidDBInstanceForChannelRequestType& req,
          CreatePostpaidDBInstanceForChannelResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequestType& req,
          CreateReadOnlyDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateTempDBInstance(const CreateTempDBInstanceRequestType& req,
          CreateTempDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int CreateUploadPathForSQLServer(const CreateUploadPathForSQLServerRequestType& req,
          CreateUploadPathForSQLServerResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DeleteAccount(const DeleteAccountRequestType& req,
          DeleteAccountResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DeleteDatabase(const DeleteDatabaseRequestType& req,
          DeleteDatabaseResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DeleteDBInstance(const DeleteDBInstanceRequestType& req,
          DeleteDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescibeImportsFromDatabase(const DescibeImportsFromDatabaseRequestType& req,
          DescibeImportsFromDatabaseResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeAbnormalDBInstances(const DescribeAbnormalDBInstancesRequestType& req,
          DescribeAbnormalDBInstancesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeAccounts(const DescribeAccountsRequestType& req,
          DescribeAccountsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeBackupPolicy(const DescribeBackupPolicyRequestType& req,
          DescribeBackupPolicyResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeBackups(const DescribeBackupsRequestType& req,
          DescribeBackupsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeBackupTasks(const DescribeBackupTasksRequestType& req,
          DescribeBackupTasksResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeBinlogFiles(const DescribeBinlogFilesRequestType& req,
          DescribeBinlogFilesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDatabases(const DescribeDatabasesRequestType& req,
          DescribeDatabasesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstanceAttribute(const DescribeDBInstanceAttributeRequestType& req,
          DescribeDBInstanceAttributeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequestType& req,
          DescribeDBInstanceIPArrayListResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequestType& req,
          DescribeDBInstanceNetInfoResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstanceNetInfoForChannel(const DescribeDBInstanceNetInfoForChannelRequestType& req,
          DescribeDBInstanceNetInfoForChannelResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstancePerformance(const DescribeDBInstancePerformanceRequestType& req,
          DescribeDBInstancePerformanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstances(const DescribeDBInstancesRequestType& req,
          DescribeDBInstancesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstancesByExpireTime(const DescribeDBInstancesByExpireTimeRequestType& req,
          DescribeDBInstancesByExpireTimeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeDBInstancesByPerformance(const DescribeDBInstancesByPerformanceRequestType& req,
          DescribeDBInstancesByPerformanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeErrorLogs(const DescribeErrorLogsRequestType& req,
          DescribeErrorLogsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeFilesForSQLServer(const DescribeFilesForSQLServerRequestType& req,
          DescribeFilesForSQLServerResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeImportsForSQLServer(const DescribeImportsForSQLServerRequestType& req,
          DescribeImportsForSQLServerResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeModifyParameterLog(const DescribeModifyParameterLogRequestType& req,
          DescribeModifyParameterLogResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOperationLogs(const DescribeOperationLogsRequestType& req,
          DescribeOperationLogsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOptimizeAdviceByDBA(const DescribeOptimizeAdviceByDBARequestType& req,
          DescribeOptimizeAdviceByDBAResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnBigTable(const DescribeOptimizeAdviceOnBigTableRequestType& req,
          DescribeOptimizeAdviceOnBigTableResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnExcessIndex(const DescribeOptimizeAdviceOnExcessIndexRequestType& req,
          DescribeOptimizeAdviceOnExcessIndexResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnMissIndex(const DescribeOptimizeAdviceOnMissIndexRequestType& req,
          DescribeOptimizeAdviceOnMissIndexResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnMissPK(const DescribeOptimizeAdviceOnMissPKRequestType& req,
          DescribeOptimizeAdviceOnMissPKResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeOptimizeAdviceOnStorage(const DescribeOptimizeAdviceOnStorageRequestType& req,
          DescribeOptimizeAdviceOnStorageResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeParameters(const DescribeParametersRequestType& req,
          DescribeParametersResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeParameterTemplates(const DescribeParameterTemplatesRequestType& req,
          DescribeParameterTemplatesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribePreCheckResults(const DescribePreCheckResultsRequestType& req,
          DescribePreCheckResultsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeRealtimeDiagnoses(const DescribeRealtimeDiagnosesRequestType& req,
          DescribeRealtimeDiagnosesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeRegions(const DescribeRegionsRequestType& req,
          DescribeRegionsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeResourceUsage(const DescribeResourceUsageRequestType& req,
          DescribeResourceUsageResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeSlowLogRecords(const DescribeSlowLogRecordsRequestType& req,
          DescribeSlowLogRecordsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeSlowLogs(const DescribeSlowLogsRequestType& req,
          DescribeSlowLogsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeSQLInjectionInfos(const DescribeSQLInjectionInfosRequestType& req,
          DescribeSQLInjectionInfosResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeSQLLogRecords(const DescribeSQLLogRecordsRequestType& req,
          DescribeSQLLogRecordsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeSQLLogReportList(const DescribeSQLLogReportListRequestType& req,
          DescribeSQLLogReportListResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeSQLLogReports(const DescribeSQLLogReportsRequestType& req,
          DescribeSQLLogReportsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeTasks(const DescribeTasksRequestType& req,
          DescribeTasksResponseType* resp,
          AliRdsErrorInfo* error_info);

  int DescribeVpcZoneNos(const DescribeVpcZoneNosRequestType& req,
          DescribeVpcZoneNosResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ExtractBackupFromOAS(const ExtractBackupFromOASRequestType& req,
          ExtractBackupFromOASResponseType* resp,
          AliRdsErrorInfo* error_info);

  int GrantAccountPrivilege(const GrantAccountPrivilegeRequestType& req,
          GrantAccountPrivilegeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ImportDatabaseBetweenInstances(const ImportDatabaseBetweenInstancesRequestType& req,
          ImportDatabaseBetweenInstancesResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ImportDataForSQLServer(const ImportDataForSQLServerRequestType& req,
          ImportDataForSQLServerResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ImportDataFromDatabase(const ImportDataFromDatabaseRequestType& req,
          ImportDataFromDatabaseResponseType* resp,
          AliRdsErrorInfo* error_info);

  int LockDBInstance(const LockDBInstanceRequestType& req,
          LockDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int MigrateToOtherZone(const MigrateToOtherZoneRequestType& req,
          MigrateToOtherZoneResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyAccountDescription(const ModifyAccountDescriptionRequestType& req,
          ModifyAccountDescriptionResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyBackupPolicy(const ModifyBackupPolicyRequestType& req,
          ModifyBackupPolicyResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBDescription(const ModifyDBDescriptionRequestType& req,
          ModifyDBDescriptionResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBInstanceConnectionMode(const ModifyDBInstanceConnectionModeRequestType& req,
          ModifyDBInstanceConnectionModeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequestType& req,
          ModifyDBInstanceConnectionStringResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequestType& req,
          ModifyDBInstanceDescriptionResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequestType& req,
          ModifyDBInstanceMaintainTimeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequestType& req,
          ModifyDBInstanceNetworkTypeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyDBInstanceSpec(const ModifyDBInstanceSpecRequestType& req,
          ModifyDBInstanceSpecResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyParameter(const ModifyParameterRequestType& req,
          ModifyParameterResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifyPostpaidDBInstanceSpec(const ModifyPostpaidDBInstanceSpecRequestType& req,
          ModifyPostpaidDBInstanceSpecResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ModifySecurityIps(const ModifySecurityIpsRequestType& req,
          ModifySecurityIpsResponseType* resp,
          AliRdsErrorInfo* error_info);

  int PreCheckBeforeImportData(const PreCheckBeforeImportDataRequestType& req,
          PreCheckBeforeImportDataResponseType* resp,
          AliRdsErrorInfo* error_info);

  int PurgeDBInstanceLog(const PurgeDBInstanceLogRequestType& req,
          PurgeDBInstanceLogResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ReleaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequestType& req,
          ReleaseInstancePublicConnectionResponseType* resp,
          AliRdsErrorInfo* error_info);

  int RemoveTagsFromResource(const RemoveTagsFromResourceRequestType& req,
          RemoveTagsFromResourceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ResetAccountForPG(const ResetAccountForPGRequestType& req,
          ResetAccountForPGResponseType* resp,
          AliRdsErrorInfo* error_info);

  int ResetAccountPassword(const ResetAccountPasswordRequestType& req,
          ResetAccountPasswordResponseType* resp,
          AliRdsErrorInfo* error_info);

  int RestartDBInstance(const RestartDBInstanceRequestType& req,
          RestartDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int RestoreDBInstance(const RestoreDBInstanceRequestType& req,
          RestoreDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int RevokeAccountPrivilege(const RevokeAccountPrivilegeRequestType& req,
          RevokeAccountPrivilegeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int StartDBInstanceDiagnose(const StartDBInstanceDiagnoseRequestType& req,
          StartDBInstanceDiagnoseResponseType* resp,
          AliRdsErrorInfo* error_info);

  int StopSyncing(const StopSyncingRequestType& req,
          StopSyncingResponseType* resp,
          AliRdsErrorInfo* error_info);

  int SwitchDBInstanceNetType(const SwitchDBInstanceNetTypeRequestType& req,
          SwitchDBInstanceNetTypeResponseType* resp,
          AliRdsErrorInfo* error_info);

  int UnlockDBInstance(const UnlockDBInstanceRequestType& req,
          UnlockDBInstanceResponseType* resp,
          AliRdsErrorInfo* error_info);

  int UpgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequestType& req,
          UpgradeDBInstanceEngineVersionResponseType* resp,
          AliRdsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
