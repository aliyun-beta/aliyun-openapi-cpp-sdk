#ifndef ALI_YUNDUN_WAF_INFO_TYPESH
#define ALI_YUNDUN_WAF_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunWafInfoRequestType {
  std::string instance_id;
  std::string instance_type;
};
struct YundunWafInfoWafInfoType {
  int id;
  std::string domain;
  std::string cname;
  int status;
};
struct YundunWafInfoResponseType {
  std::vector<YundunWafInfoWafInfoType> waf_infos;
  int waf_domain_num;
};
} // end namespace
#endif
