#ifndef ALI_YUNDUN_SECURE_CHECK_TYPESH
#define ALI_YUNDUN_SECURE_CHECK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunSecureCheckRequestType {
  std::string jst_owner_id;
  std::string instance_ids;
};
struct YundunSecureCheckInfoType {
  std::string ip;
  std::string status;
  std::string vul_num;
  std::string instance_id;
};
struct YundunSecureCheckResponseType {
  std::vector<YundunSecureCheckInfoType> problem_list;
  std::vector<YundunSecureCheckInfoType> no_problem_list;
  std::vector<YundunSecureCheckInfoType> no_scan_list;
  std::vector<YundunSecureCheckInfoType> scanning_list;
  std::vector<YundunSecureCheckInfoType> inner_ip_list;
  std::string recent_instance_id;
};
} // end namespace
#endif
