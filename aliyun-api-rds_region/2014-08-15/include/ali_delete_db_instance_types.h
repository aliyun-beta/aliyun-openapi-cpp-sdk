#ifndef ALI_DELETE_DB_INSTANCE_TYPESH
#define ALI_DELETE_DB_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteDBInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct DeleteDBInstanceResponseType {
};
} // end namespace
#endif
