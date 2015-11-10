#ifndef ALI_YUNDUN_BRUTEFORCE_LOG_TYPESH
#define ALI_YUNDUN_BRUTEFORCE_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunBruteforceLogRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string instance_id;
  std::string record_type;
};
struct YundunBruteforceLogBruteforceLogType {
  int block_times;
  std::string source_ip;
  int status;
  std::string time;
  std::string location;
};
struct YundunBruteforceLogResponseType {
  std::vector<YundunBruteforceLogBruteforceLogType> log_list;
  std::string start_time;
  std::string end_time;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
