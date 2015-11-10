#ifndef ALI_EMR_LIST_EXECUTE_PLAN_EXECUTE_RECORDS_TYPESH
#define ALI_EMR_LIST_EXECUTE_PLAN_EXECUTE_RECORDS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListExecutePlanExecuteRecordsRequestType {
  std::string execute_plan_id;
  std::string is_desc;
  std::string status;
  std::string page_number;
  std::string page_size;
};
struct EmrListExecutePlanExecuteRecordsExecutePlanRecordInfoType {
  long id;
  long execute_plan_id;
  std::string execute_plan_name;
  std::string start_time;
  long run_time;
  long cluster_id;
  std::string cluster_name;
  int cluster_type;
  int status;
  bool log_enable;
  std::string log_path;
};
struct EmrListExecutePlanExecuteRecordsResponseType {
  std::vector<EmrListExecutePlanExecuteRecordsExecutePlanRecordInfoType> execute_plan_exec_record;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
