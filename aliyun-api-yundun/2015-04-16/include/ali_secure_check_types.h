#ifndef ALI_SECURE_CHECK_TYPESH
#define ALI_SECURE_CHECK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SecureCheckRequestType {
  std::string jst_owner_id;
  std::string instance_ids;
};
struct SecureCheckInfoType {
  std::string ip;
  std::string status;
  std::string vul_num;
  std::string instance_id;
};
struct SecureCheckResponseType {
  std::vector<SecureCheckInfoType> problem_list;
  std::vector<SecureCheckInfoType> no_problem_list;
  std::vector<SecureCheckInfoType> no_scan_list;
  std::vector<SecureCheckInfoType> scanning_list;
  std::vector<SecureCheckInfoType> inner_ip_list;
  std::string recent_instance_id;
};
} // end namespace
#endif
