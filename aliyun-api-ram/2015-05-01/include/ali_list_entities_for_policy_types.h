#ifndef ALI_LIST_ENTITIES_FOR_POLICY_TYPESH
#define ALI_LIST_ENTITIES_FOR_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListEntitiesForPolicyRequestType {
  std::string policy_type;
  std::string policy_name;
};
struct ListEntitiesForPolicyGroupType {
  std::string group_name;
  std::string comments;
  std::string attach_date;
};
struct ListEntitiesForPolicyUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
  std::string attach_date;
};
struct ListEntitiesForPolicyRoleType {
  std::string role_id;
  std::string role_name;
  std::string arn;
  std::string description;
  std::string attach_date;
};
struct ListEntitiesForPolicyResponseType {
  std::vector<ListEntitiesForPolicyGroupType> groups;
  std::vector<ListEntitiesForPolicyUserType> users;
  std::vector<ListEntitiesForPolicyRoleType> roles;
};
} // end namespace
#endif
