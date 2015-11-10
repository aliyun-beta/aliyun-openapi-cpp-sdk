#ifndef ALI_YUNDUN_ADD_CNAME_WAF_TYPESH
#define ALI_YUNDUN_ADD_CNAME_WAF_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunAddCNameWafRequestType {
  std::string instance_id;
  std::string instance_type;
  std::string domain;
};
struct YundunAddCNameWafWafInfoType {
  int id;
  std::string domain;
  std::string cname;
  int status;
};
struct YundunAddCNameWafResponseType {
  std::vector<YundunAddCNameWafWafInfoType> waf_info_list;
};
} // end namespace
#endif
