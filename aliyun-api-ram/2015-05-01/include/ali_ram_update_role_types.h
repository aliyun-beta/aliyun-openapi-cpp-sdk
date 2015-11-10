#ifndef ALI_RAM_UPDATE_ROLE_TYPESH
#define ALI_RAM_UPDATE_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamUpdateRoleRequestType {
  std::string role_name;
  std::string new_assume_role_policy_document;
};
struct RamUpdateRoleRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string assume_role_policy_document;
  std::string create_date;
  std::string update_date;
};
struct RamUpdateRoleResponseType {
  RamUpdateRoleRoleType role;
};
} // end namespace
#endif
