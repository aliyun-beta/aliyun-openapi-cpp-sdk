#ifndef ALI_RAM_CREATE_ROLE_TYPESH
#define ALI_RAM_CREATE_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamCreateRoleRequestType {
  std::string role_name;
  std::string description;
  std::string assume_role_policy_document;
};
struct RamCreateRoleRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string assume_role_policy_document;
  std::string create_date;
};
struct RamCreateRoleResponseType {
  RamCreateRoleRoleType role;
};
} // end namespace
#endif
