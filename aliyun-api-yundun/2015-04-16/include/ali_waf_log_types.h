#ifndef ALI_WAF_LOG_TYPESH
#define ALI_WAF_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct WafLogRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string instance_id;
  std::string instance_type;
};
struct WafLogWafLogType {
  std::string source_ip;
  std::string time;
  std::string url;
  std::string type;
  int status;
};
struct WafLogResponseType {
  std::vector<WafLogWafLogType> log_list;
  int web_attack;
  bool new_waf_user;
  bool waf_opened;
  bool in_white_list;
  int domain_count;
  std::string start_time;
  std::string end_time;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
