#ifndef ALI_DELETE_SECURITY_GROUP_TYPESH
#define ALI_DELETE_SECURITY_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteSecurityGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string owner_account;
};
struct DeleteSecurityGroupResponseType {
};
} // end namespace
#endif
