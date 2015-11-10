#ifndef ALI_RAM_GET_ROLE_TYPESH
#define ALI_RAM_GET_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetRoleRequestType {
  std::string role_name;
};
struct RamGetRoleRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string assume_role_policy_document;
  std::string create_date;
  std::string update_date;
};
struct RamGetRoleResponseType {
  RamGetRoleRoleType role;
};
} // end namespace
#endif
