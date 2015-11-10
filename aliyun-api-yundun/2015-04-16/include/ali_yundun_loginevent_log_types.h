#ifndef ALI_YUNDUN_LOGINEVENT_LOG_TYPESH
#define ALI_YUNDUN_LOGINEVENT_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunLogineventLogRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string instance_id;
  std::string record_type;
};
struct YundunLogineventLogLoginEventLogType {
  int block_times;
  std::string source_ip;
  int status;
  std::string time;
  std::string location;
};
struct YundunLogineventLogResponseType {
  std::vector<YundunLogineventLogLoginEventLogType> log_list;
  std::string start_time;
  std::string end_time;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
