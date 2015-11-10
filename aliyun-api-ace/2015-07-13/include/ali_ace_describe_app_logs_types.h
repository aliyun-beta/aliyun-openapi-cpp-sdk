#ifndef ALI_ACE_DESCRIBE_APP_LOGS_TYPESH
#define ALI_ACE_DESCRIBE_APP_LOGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AceDescribeAppLogsRequestType {
  std::string app_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
};
struct AceDescribeAppLogsAppLogType {
  std::string log_time;
  std::string log_content;
};
struct AceDescribeAppLogsResponseType {
  std::vector<AceDescribeAppLogsAppLogType> items;
  int page_record_count;
};
} // end namespace
#endif
