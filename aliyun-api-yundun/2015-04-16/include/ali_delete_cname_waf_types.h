#ifndef ALI_DELETE_CNAME_WAF_TYPESH
#define ALI_DELETE_CNAME_WAF_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteCNameWafRequestType {
  std::string instance_id;
  std::string domain;
  std::string cname_id;
  std::string instance_type;
};
struct DeleteCNameWafWafInfoType {
  int id;
  std::string domain;
  std::string cname;
  int status;
};
struct DeleteCNameWafResponseType {
  std::vector<DeleteCNameWafWafInfoType> waf_info_list;
};
} // end namespace
#endif
