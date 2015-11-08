#ifndef ALI_GET_ROLE_TYPESH
#define ALI_GET_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetRoleRequestType {
  std::string role_name;
};
struct GetRoleRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string assume_role_policy_document;
  std::string create_date;
  std::string update_date;
};
struct GetRoleResponseType {
  GetRoleRoleType role;
};
} // end namespace
#endif
