#ifndef ALI_CREATE_ROLE_TYPESH
#define ALI_CREATE_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateRoleRequestType {
  std::string role_name;
  std::string description;
  std::string assume_role_policy_document;
};
struct CreateRoleRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string assume_role_policy_document;
  std::string create_date;
};
struct CreateRoleResponseType {
  CreateRoleRoleType role;
};
} // end namespace
#endif
