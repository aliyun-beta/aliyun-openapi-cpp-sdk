#ifndef ALI_DESCRIBE_APP_LOGS_TYPESH
#define ALI_DESCRIBE_APP_LOGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeAppLogsRequestType {
  std::string app_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
};
struct DescribeAppLogsAppLogType {
  std::string log_time;
  std::string log_content;
};
struct DescribeAppLogsResponseType {
  std::vector<DescribeAppLogsAppLogType> items;
  int page_record_count;
};
} // end namespace
#endif
