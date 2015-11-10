#ifndef ALI_RDS_DELETE_DATABASE_TYPESH
#define ALI_RDS_DELETE_DATABASE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDeleteDatabaseRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string owner_account;
};
struct RdsDeleteDatabaseResponseType {
};
} // end namespace
#endif
