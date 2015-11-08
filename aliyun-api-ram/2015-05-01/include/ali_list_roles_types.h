#ifndef ALI_LIST_ROLES_TYPESH
#define ALI_LIST_ROLES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListRolesRequestType {
  std::string marker;
  std::string max_items;
};
struct ListRolesRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string create_date;
  std::string update_date;
};
struct ListRolesResponseType {
  std::vector<ListRolesRoleType> roles;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
