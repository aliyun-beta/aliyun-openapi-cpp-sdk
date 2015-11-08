#ifndef ALI_ADD_CNAME_WAF_TYPESH
#define ALI_ADD_CNAME_WAF_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddCNameWafRequestType {
  std::string instance_id;
  std::string instance_type;
  std::string domain;
};
struct AddCNameWafWafInfoType {
  int id;
  std::string domain;
  std::string cname;
  int status;
};
struct AddCNameWafResponseType {
  std::vector<AddCNameWafWafInfoType> waf_info_list;
};
} // end namespace
#endif
