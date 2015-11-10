#ifndef ALI_RDS_DESCRIBE_SQ_LLOG_REPORT_LIST_TYPESH
#define ALI_RDS_DESCRIBE_SQ_LLOG_REPORT_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeSQLLogReportListRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsDescribeSQLLogReportListLatencyTopNItemType {
  std::string sq_ltext;
  long avg_latency;
  long sq_lexecute_times;
};
struct RdsDescribeSQLLogReportListQPSTopNItemType {
  std::string sq_ltext;
  long sq_lexecute_times;
};
struct RdsDescribeSQLLogReportListItemType {
  std::vector<RdsDescribeSQLLogReportListLatencyTopNItemType> latency_top_nitems;
  std::vector<RdsDescribeSQLLogReportListQPSTopNItemType> qp_stop_nitems;
  std::string report_time;
};
struct RdsDescribeSQLLogReportListResponseType {
  std::vector<RdsDescribeSQLLogReportListItemType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
