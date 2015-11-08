#ifndef ALI_DESCRIBE_ERROR_LOGS_TYPESH
#define ALI_DESCRIBE_ERROR_LOGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeErrorLogsRequestType {
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
struct DescribeErrorLogsErrorLogType {
  std::string error_info;
  std::string create_time;
};
struct DescribeErrorLogsResponseType {
  std::vector<DescribeErrorLogsErrorLogType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
