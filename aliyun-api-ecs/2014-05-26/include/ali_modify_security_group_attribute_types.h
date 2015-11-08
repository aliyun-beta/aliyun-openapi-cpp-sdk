#ifndef ALI_MODIFY_SECURITY_GROUP_ATTRIBUTE_TYPESH
#define ALI_MODIFY_SECURITY_GROUP_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifySecurityGroupAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string description;
  std::string security_group_name;
  std::string owner_account;
};
struct ModifySecurityGroupAttributeResponseType {
};
} // end namespace
#endif
