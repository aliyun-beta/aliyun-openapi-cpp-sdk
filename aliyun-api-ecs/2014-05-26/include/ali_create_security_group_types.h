#ifndef ALI_CREATE_SECURITY_GROUP_TYPESH
#define ALI_CREATE_SECURITY_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateSecurityGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string description;
  std::string client_token;
  std::string security_group_name;
  std::string vpc_id;
  std::string owner_account;
};
struct CreateSecurityGroupResponseType {
  std::string security_group_id;
};
} // end namespace
#endif
