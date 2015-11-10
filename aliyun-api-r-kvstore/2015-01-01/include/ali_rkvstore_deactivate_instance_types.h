#ifndef ALI_RKVSTORE_DEACTIVATE_INSTANCE_TYPESH
#define ALI_RKVSTORE_DEACTIVATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDeactivateInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct RkvstoreDeactivateInstanceResponseType {
};
} // end namespace
#endif
