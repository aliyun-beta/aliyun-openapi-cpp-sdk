#ifndef ALI_RAM_LIST_ROLES_TYPESH
#define ALI_RAM_LIST_ROLES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListRolesRequestType {
  std::string marker;
  std::string max_items;
};
struct RamListRolesRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string create_date;
  std::string update_date;
};
struct RamListRolesResponseType {
  std::vector<RamListRolesRoleType> roles;
  bool is_truncated;
  std::string marker;
};
} // end namespace
#endif
