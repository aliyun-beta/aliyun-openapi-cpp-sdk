#ifndef ALI_EMR_LIST_EXECUTE_PLAN_EXECUTE_RECORD_NODES_TYPESH
#define ALI_EMR_LIST_EXECUTE_PLAN_EXECUTE_RECORD_NODES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListExecutePlanExecuteRecordNodesRequestType {
  std::string execute_plan_exec_record_id;
  std::string is_desc;
  std::string page_number;
  std::string page_size;
};
struct EmrListExecutePlanExecuteRecordNodesExecutePlanNodeInfoType {
  std::string work_node_id;
  std::string work_node_name;
  std::string start_time;
  long run_time;
  int job_type;
  long job_id;
  long cluster_id;
  int status;
};
struct EmrListExecutePlanExecuteRecordNodesResponseType {
  std::vector<EmrListExecutePlanExecuteRecordNodesExecutePlanNodeInfoType> execute_plan_node;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
