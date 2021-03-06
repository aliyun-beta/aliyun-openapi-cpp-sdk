#ifndef ALI_RDS_DESCRIBE_TASKS_TYPESH
#define ALI_RDS_DESCRIBE_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeTasksRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string status;
  std::string task_action;
  std::string owner_account;
};
struct RdsDescribeTasksTaskProgressInfoType {
  std::string db_name;
  std::string begin_time;
  std::string progress_info;
  std::string finish_time;
  std::string task_action;
  std::string task_id;
  std::string progress;
  std::string expected_finish_time;
  std::string status;
  std::string task_error_code;
  std::string task_error_message;
};
struct RdsDescribeTasksResponseType {
  std::vector<RdsDescribeTasksTaskProgressInfoType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
