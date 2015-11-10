#ifndef ALI_RAM_LIST_ENTITIES_FOR_POLICY_TYPESH
#define ALI_RAM_LIST_ENTITIES_FOR_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListEntitiesForPolicyRequestType {
  std::string policy_type;
  std::string policy_name;
};
struct RamListEntitiesForPolicyGroupType {
  std::string group_name;
  std::string comments;
  std::string attach_date;
};
struct RamListEntitiesForPolicyUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string attach_date;
};
struct RamListEntitiesForPolicyRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string attach_date;
};
struct RamListEntitiesForPolicyResponseType {
  std::vector<RamListEntitiesForPolicyGroupType> groups;
  std::vector<RamListEntitiesForPolicyUserType> users;
  std::vector<RamListEntitiesForPolicyRoleType> roles;
};
} // end namespace
#endif
