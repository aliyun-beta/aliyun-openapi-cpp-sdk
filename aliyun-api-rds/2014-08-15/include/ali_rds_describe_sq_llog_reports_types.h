#ifndef ALI_RDS_DESCRIBE_SQ_LLOG_REPORTS_TYPESH
#define ALI_RDS_DESCRIBE_SQ_LLOG_REPORTS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeSQLLogReportsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string start_time;
  std::string end_time;
  std::string report_type;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsDescribeSQLLogReportsSQLReportType {
  std::string sq_ltext;
  std::string total_execution_counts;
  std::string return_total_row_counts;
  std::string total_execution_times;
};
struct RdsDescribeSQLLogReportsResponseType {
  std::vector<RdsDescribeSQLLogReportsSQLReportType> items;
  std::string total_record_count;
  std::string page_number;
  std::string page_record_count;
};
} // end namespace
#endif
