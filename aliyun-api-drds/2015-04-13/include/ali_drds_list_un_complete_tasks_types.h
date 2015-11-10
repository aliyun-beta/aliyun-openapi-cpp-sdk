#ifndef ALI_DRDS_LIST_UN_COMPLETE_TASKS_TYPESH
#define ALI_DRDS_LIST_UN_COMPLETE_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsListUnCompleteTasksRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DrdsListUnCompleteTaskstaskType {
  std::string request_id;
  std::string target_id;
  std::string task_detail;
  int task_status;
  std::string task_phase;
  int task_type;
  std::string task_name;
  long gmt_create;
  std::string allow_cancel;
  std::string err_msg;
};
struct DrdsListUnCompleteTasksResponseType {
  std::vector<DrdsListUnCompleteTaskstaskType> data;
};
} // end namespace
#endif
