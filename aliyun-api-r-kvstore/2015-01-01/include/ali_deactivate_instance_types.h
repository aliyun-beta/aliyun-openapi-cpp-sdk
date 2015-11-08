#ifndef ALI_DEACTIVATE_INSTANCE_TYPESH
#define ALI_DEACTIVATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeactivateInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct DeactivateInstanceResponseType {
};
} // end namespace
#endif
