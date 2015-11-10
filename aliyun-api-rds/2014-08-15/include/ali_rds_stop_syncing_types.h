#ifndef ALI_RDS_STOP_SYNCING_TYPESH
#define ALI_RDS_STOP_SYNCING_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsStopSyncingRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string import_id;
  std::string owner_account;
};
struct RdsStopSyncingResponseType {
};
} // end namespace
#endif
