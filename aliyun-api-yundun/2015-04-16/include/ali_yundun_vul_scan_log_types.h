#ifndef ALI_YUNDUN_VUL_SCAN_LOG_TYPESH
#define ALI_YUNDUN_VUL_SCAN_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunVulScanLogRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string instance_id;
  std::string vul_status;
};
struct YundunVulScanLogVulScanLogType {
  int id;
  std::string type;
  std::string url;
  std::string help_address;
  std::string vul_parameter;
  int status;
};
struct YundunVulScanLogResponseType {
  std::vector<YundunVulScanLogVulScanLogType> log_list;
  std::string start_time;
  std::string end_time;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
