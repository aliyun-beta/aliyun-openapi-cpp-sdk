#ifndef ALI_RDS_IMPORT_DATA_FOR_SQ_LSERVER_TYPESH
#define ALI_RDS_IMPORT_DATA_FOR_SQ_LSERVER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsImportDataForSQLServerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string file_name;
  std::string owner_account;
};
struct RdsImportDataForSQLServerResponseType {
  int import_id;
};
} // end namespace
#endif
