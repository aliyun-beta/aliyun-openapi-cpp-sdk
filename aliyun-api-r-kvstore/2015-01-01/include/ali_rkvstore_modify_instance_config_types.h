#ifndef ALI_RKVSTORE_MODIFY_INSTANCE_CONFIG_TYPESH
#define ALI_RKVSTORE_MODIFY_INSTANCE_CONFIG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreModifyInstanceConfigRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string config;
};
struct RkvstoreModifyInstanceConfigResponseType {
};
} // end namespace
#endif
