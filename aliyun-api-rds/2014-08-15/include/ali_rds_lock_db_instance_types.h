#ifndef ALI_RDS_LOCK_DB_INSTANCE_TYPESH
#define ALI_RDS_LOCK_DB_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsLockDBInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string lock_reason;
  std::string owner_account;
};
struct RdsLockDBInstanceResponseType {
};
} // end namespace
#endif
