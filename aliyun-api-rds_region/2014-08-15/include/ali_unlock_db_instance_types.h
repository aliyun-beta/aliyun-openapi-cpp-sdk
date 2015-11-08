#ifndef ALI_UNLOCK_DB_INSTANCE_TYPESH
#define ALI_UNLOCK_DB_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UnlockDBInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string owner_account;
};
struct UnlockDBInstanceResponseType {
};
} // end namespace
#endif
