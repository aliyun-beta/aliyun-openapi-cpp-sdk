#ifndef ALI_RDSREGION_IMPORT_DATA_FROM_DATABASE_TYPESH
#define ALI_RDSREGION_IMPORT_DATA_FROM_DATABASE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionImportDataFromDatabaseRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string source_database_ip;
  std::string source_database_port;
  std::string source_database_user_name;
  std::string source_database_password;
  std::string import_data_type;
  std::string is_lock_table;
  std::string source_database_db_names;
  std::string owner_account;
};
struct RdsRegionImportDataFromDatabaseResponseType {
  int import_id;
};
} // end namespace
#endif
