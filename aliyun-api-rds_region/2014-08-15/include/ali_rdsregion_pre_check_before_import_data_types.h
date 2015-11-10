#ifndef ALI_RDSREGION_PRE_CHECK_BEFORE_IMPORT_DATA_TYPESH
#define ALI_RDSREGION_PRE_CHECK_BEFORE_IMPORT_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionPreCheckBeforeImportDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string source_database_ip;
  std::string source_database_port;
  std::string source_database_user_name;
  std::string source_database_password;
  std::string import_data_type;
  std::string source_database_db_names;
  std::string owner_account;
};
struct RdsRegionPreCheckBeforeImportDataResponseType {
  std::string pre_check_id;
};
} // end namespace
#endif
