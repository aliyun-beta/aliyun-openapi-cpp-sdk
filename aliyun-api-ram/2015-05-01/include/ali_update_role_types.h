#ifndef ALI_UPDATE_ROLE_TYPESH
#define ALI_UPDATE_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateRoleRequestType {
  std::string role_name;
  std::string new_assume_role_policy_document;
};
struct UpdateRoleRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string assume_role_policy_document;
  std::string create_date;
  std::string update_date;
};
struct UpdateRoleResponseType {
  UpdateRoleRoleType role;
};
} // end namespace
#endif
