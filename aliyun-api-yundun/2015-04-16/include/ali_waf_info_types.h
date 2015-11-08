#ifndef ALI_WAF_INFO_TYPESH
#define ALI_WAF_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct WafInfoRequestType {
  std::string instance_id;
  std::string instance_type;
};
struct WafInfoWafInfoType {
  int id;
  std::string domain;
  std::string cname;
  int status;
};
struct WafInfoResponseType {
  std::vector<WafInfoWafInfoType> waf_infos;
  int waf_domain_num;
};
} // end namespace
#endif
