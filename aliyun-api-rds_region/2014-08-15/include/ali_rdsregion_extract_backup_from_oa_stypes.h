#ifndef ALI_RDSREGION_EXTRACT_BACKUP_FROM_OA_STYPESH
#define ALI_RDSREGION_EXTRACT_BACKUP_FROM_OA_STYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionExtractBackupFromOASRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string backup_id;
  std::string owner_account;
};
struct RdsRegionExtractBackupFromOASResponseType {
  std::string data_extraction_last_time;
};
} // end namespace
#endif
