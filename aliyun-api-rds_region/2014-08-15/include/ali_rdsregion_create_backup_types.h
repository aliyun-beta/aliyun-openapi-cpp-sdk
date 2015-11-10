#ifndef ALI_RDSREGION_CREATE_BACKUP_TYPESH
#define ALI_RDSREGION_CREATE_BACKUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateBackupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string backup_method;
  std::string backup_type;
  std::string owner_account;
};
struct RdsRegionCreateBackupResponseType {
};
} // end namespace
#endif
