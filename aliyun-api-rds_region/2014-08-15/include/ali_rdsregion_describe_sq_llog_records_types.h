#ifndef ALI_RDSREGION_DESCRIBE_SQ_LLOG_RECORDS_TYPESH
#define ALI_RDSREGION_DESCRIBE_SQ_LLOG_RECORDS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeSQLLogRecordsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string sq_lid;
  std::string query_keywords;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsRegionDescribeSQLLogRecordsSQLRecordType {
  std::string db_name;
  std::string account_name;
  std::string host_address;
  std::string sq_ltext;
  long total_execution_times;
  long return_row_counts;
  std::string execute_time;
};
struct RdsRegionDescribeSQLLogRecordsResponseType {
  std::vector<RdsRegionDescribeSQLLogRecordsSQLRecordType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
