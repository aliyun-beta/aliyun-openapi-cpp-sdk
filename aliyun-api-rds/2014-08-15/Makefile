TARGET = aliyun_api_rds.so
DEPS = \
  src/ali_rds.o \
  src/ali_add_tags_to_resource.o \
  src/ali_allocate_instance_private_connection.o \
  src/ali_allocate_instance_public_connection.o \
  src/ali_batch_grant_account_privilege.o \
  src/ali_batch_revoke_account_privilege.o \
  src/ali_cancel_import.o \
  src/ali_check_account_name_available.o \
  src/ali_check_db_name_available.o \
  src/ali_create_account.o \
  src/ali_create_account_for_inner.o \
  src/ali_create_backup.o \
  src/ali_create_database.o \
  src/ali_create_database_for_inner.o \
  src/ali_create_db_instance.o \
  src/ali_create_db_instance_for_channel.o \
  src/ali_create_db_instancefor_first_pay.o \
  src/ali_create_postpaid_db_instance.o \
  src/ali_create_postpaid_db_instance_for_channel.o \
  src/ali_create_read_only_db_instance.o \
  src/ali_create_temp_db_instance.o \
  src/ali_create_upload_path_for_sq_lserver.o \
  src/ali_delete_account.o \
  src/ali_delete_database.o \
  src/ali_delete_db_instance.o \
  src/ali_descibe_imports_from_database.o \
  src/ali_describe_abnormal_db_instances.o \
  src/ali_describe_accounts.o \
  src/ali_describe_backup_policy.o \
  src/ali_describe_backups.o \
  src/ali_describe_backup_tasks.o \
  src/ali_describe_binlog_files.o \
  src/ali_describe_databases.o \
  src/ali_describe_db_instance_attribute.o \
  src/ali_describe_db_instance_ip_array_list.o \
  src/ali_describe_db_instance_net_info.o \
  src/ali_describe_db_instance_net_info_for_channel.o \
  src/ali_describe_db_instance_performance.o \
  src/ali_describe_db_instances.o \
  src/ali_describe_db_instances_by_expire_time.o \
  src/ali_describe_db_instances_by_performance.o \
  src/ali_describe_error_logs.o \
  src/ali_describe_files_for_sq_lserver.o \
  src/ali_describe_imports_for_sq_lserver.o \
  src/ali_describe_modify_parameter_log.o \
  src/ali_describe_operation_logs.o \
  src/ali_describe_optimize_advice_by_db_a.o \
  src/ali_describe_optimize_advice_on_big_table.o \
  src/ali_describe_optimize_advice_on_excess_index.o \
  src/ali_describe_optimize_advice_on_miss_index.o \
  src/ali_describe_optimize_advice_on_miss_pk.o \
  src/ali_describe_optimize_advice_on_storage.o \
  src/ali_describe_parameters.o \
  src/ali_describe_parameter_templates.o \
  src/ali_describe_pre_check_results.o \
  src/ali_describe_realtime_diagnoses.o \
  src/ali_describe_regions.o \
  src/ali_describe_resource_usage.o \
  src/ali_describe_slow_log_records.o \
  src/ali_describe_slow_logs.o \
  src/ali_describe_sq_linjection_infos.o \
  src/ali_describe_sq_llog_records.o \
  src/ali_describe_sq_llog_report_list.o \
  src/ali_describe_sq_llog_reports.o \
  src/ali_describe_tasks.o \
  src/ali_describe_vpc_zone_nos.o \
  src/ali_extract_backup_from_oa_s.o \
  src/ali_grant_account_privilege.o \
  src/ali_import_database_between_instances.o \
  src/ali_import_data_for_sq_lserver.o \
  src/ali_import_data_from_database.o \
  src/ali_lock_db_instance.o \
  src/ali_migrate_to_other_zone.o \
  src/ali_modify_account_description.o \
  src/ali_modify_backup_policy.o \
  src/ali_modify_db_description.o \
  src/ali_modify_db_instance_connection_mode.o \
  src/ali_modify_db_instance_connection_string.o \
  src/ali_modify_db_instance_description.o \
  src/ali_modify_db_instance_maintain_time.o \
  src/ali_modify_db_instance_network_type.o \
  src/ali_modify_db_instance_spec.o \
  src/ali_modify_parameter.o \
  src/ali_modify_postpaid_db_instance_spec.o \
  src/ali_modify_security_ips.o \
  src/ali_pre_check_before_import_data.o \
  src/ali_purge_db_instance_log.o \
  src/ali_release_instance_public_connection.o \
  src/ali_remove_tags_from_resource.o \
  src/ali_reset_account_for_pg.o \
  src/ali_reset_account_password.o \
  src/ali_restart_db_instance.o \
  src/ali_restore_db_instance.o \
  src/ali_revoke_account_privilege.o \
  src/ali_start_db_instance_diagnose.o \
  src/ali_stop_syncing.o \
  src/ali_switch_db_instance_net_type.o \
  src/ali_unlock_db_instance.o \
  src/ali_upgrade_db_instance_engine_version.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = -fPIC $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

$(TARGET): $(DEPS) $(SHARED_LIBS)
	g++ --shared -fPIC -o $(TARGET) $(DEPS) $(SHARED_LIBS)

../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
