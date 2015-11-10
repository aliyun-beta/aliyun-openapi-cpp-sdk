#ifndef ALI_RDS_CREATE_BACKUP_TYPESH
#define ALI_RDS_CREATE_BACKUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsCreateBackupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string backup_method;
  std::string backup_type;
  std::string owner_account;
};
struct RdsCreateBackupResponseType {
};
} // end namespace
#endif
