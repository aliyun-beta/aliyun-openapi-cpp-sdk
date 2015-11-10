#ifndef ALI_RDSREGION_DESCRIBE_SLOW_LOGS_TYPESH
#define ALI_RDSREGION_DESCRIBE_SLOW_LOGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeSlowLogsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string start_time;
  std::string end_time;
  std::string db_name;
  std::string sort_key;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsRegionDescribeSlowLogsSQLSlowLogType {
  long slow_log_id;
  long sq_lid;
  std::string db_name;
  std::string sq_ltext;
  long my_sq_ltotal_execution_counts;
  long my_sq_ltotal_execution_times;
  long total_lock_times;
  long max_lock_time;
  long parse_total_row_counts;
  long parse_max_row_count;
  long return_total_row_counts;
  long return_max_row_count;
  std::string create_time;
  long sq_lserver_total_execution_counts;
  long sq_lserver_total_execution_times;
  long total_logical_read_counts;
  long total_physical_read_counts;
  std::string report_time;
  long max_execution_time;
  long avg_execution_time;
};
struct RdsRegionDescribeSlowLogsResponseType {
  std::vector<RdsRegionDescribeSlowLogsSQLSlowLogType> items;
  std::string engine;
  std::string start_time;
  std::string end_time;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
