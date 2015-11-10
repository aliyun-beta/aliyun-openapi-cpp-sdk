#ifndef ALI_YUNDUN_WEBSHELL_LOG_TYPESH
#define ALI_YUNDUN_WEBSHELL_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunWebshellLogRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string instance_id;
  std::string record_type;
};
struct YundunWebshellLogWebshellLogType {
  std::string id;
  std::string path;
  int status;
  std::string time;
};
struct YundunWebshellLogResponseType {
  std::vector<YundunWebshellLogWebshellLogType> log_list;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
