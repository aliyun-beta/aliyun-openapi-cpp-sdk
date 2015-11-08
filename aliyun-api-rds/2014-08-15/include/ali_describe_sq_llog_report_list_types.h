#ifndef ALI_DESCRIBE_SQ_LLOG_REPORT_LIST_TYPESH
#define ALI_DESCRIBE_SQ_LLOG_REPORT_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeSQLLogReportListRequestType {
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
struct DescribeSQLLogReportListLatencyTopNItemType {
  std::string sq_ltext;
  long avg_latency;
  long sq_lexecute_times;
};
struct DescribeSQLLogReportListQPSTopNItemType {
  std::string sq_ltext;
  long sq_lexecute_times;
};
struct DescribeSQLLogReportListItemType {
  std::vector<DescribeSQLLogReportListLatencyTopNItemType> latency_top_nitems;
  std::vector<DescribeSQLLogReportListQPSTopNItemType> qp_stop_nitems;
  std::string report_time;
};
struct DescribeSQLLogReportListResponseType {
  std::vector<DescribeSQLLogReportListItemType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
