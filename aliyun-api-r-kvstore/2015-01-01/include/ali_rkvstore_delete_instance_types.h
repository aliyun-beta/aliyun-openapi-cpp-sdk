#ifndef ALI_RKVSTORE_DELETE_INSTANCE_TYPESH
#define ALI_RKVSTORE_DELETE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDeleteInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct RkvstoreDeleteInstanceResponseType {
};
} // end namespace
#endif
