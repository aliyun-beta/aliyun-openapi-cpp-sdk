#ifndef ALI_OCS_FLUSH_INSTANCE_TYPESH
#define ALI_OCS_FLUSH_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsFlushInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct OcsFlushInstanceResponseType {
};
} // end namespace
#endif
