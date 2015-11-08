#ifndef ALI_JOIN_SECURITY_GROUP_TYPESH
#define ALI_JOIN_SECURITY_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct JoinSecurityGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string instance_id;
  std::string owner_account;
};
struct JoinSecurityGroupResponseType {
};
} // end namespace
#endif
