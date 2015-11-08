#ifndef ALI_DESCRIBE_REFRESH_TASKS_TYPESH
#define ALI_DESCRIBE_REFRESH_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeRefreshTasksRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string task_id;
  std::string object_path;
  std::string page_number;
  std::string page_size;
};
struct DescribeRefreshTasksCDNTaskType {
  std::string task_id;
  std::string object_path;
  std::string status;
  std::string creation_time;
};
struct DescribeRefreshTasksResponseType {
  std::vector<DescribeRefreshTasksCDNTaskType> tasks;
  long page_number;
  long page_size;
  long total_count;
};
} // end namespace
#endif
