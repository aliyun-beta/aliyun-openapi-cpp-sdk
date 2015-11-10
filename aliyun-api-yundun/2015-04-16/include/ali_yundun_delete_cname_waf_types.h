#ifndef ALI_YUNDUN_DELETE_CNAME_WAF_TYPESH
#define ALI_YUNDUN_DELETE_CNAME_WAF_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunDeleteCNameWafRequestType {
  std::string instance_id;
  std::string domain;
  std::string cname_id;
  std::string instance_type;
};
struct YundunDeleteCNameWafWafInfoType {
  int id;
  std::string domain;
  std::string cname;
  int status;
};
struct YundunDeleteCNameWafResponseType {
  std::vector<YundunDeleteCNameWafWafInfoType> waf_info_list;
};
} // end namespace
#endif
