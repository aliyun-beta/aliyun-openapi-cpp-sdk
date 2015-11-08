#ifndef ALI_WEBSHELL_LOG_TYPESH
#define ALI_WEBSHELL_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct WebshellLogRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string instance_id;
  std::string record_type;
};
struct WebshellLogWebshellLogType {
  std::string id;
  std::string path;
  int status;
  std::string time;
};
struct WebshellLogResponseType {
  std::vector<WebshellLogWebshellLogType> log_list;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
