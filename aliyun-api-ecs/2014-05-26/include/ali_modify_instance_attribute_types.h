#ifndef ALI_MODIFY_INSTANCE_ATTRIBUTE_TYPESH
#define ALI_MODIFY_INSTANCE_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyInstanceAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string password;
  std::string host_name;
  std::string instance_name;
  std::string description;
  std::string owner_account;
};
struct ModifyInstanceAttributeResponseType {
};
} // end namespace
#endif
