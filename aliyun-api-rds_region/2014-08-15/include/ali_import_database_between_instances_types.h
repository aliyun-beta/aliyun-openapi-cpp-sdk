#ifndef ALI_IMPORT_DATABASE_BETWEEN_INSTANCES_TYPESH
#define ALI_IMPORT_DATABASE_BETWEEN_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ImportDatabaseBetweenInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string source_db_instance_id;
  std::string db_info;
  std::string owner_account;
};
struct ImportDatabaseBetweenInstancesResponseType {
  std::string import_id;
};
} // end namespace
#endif
