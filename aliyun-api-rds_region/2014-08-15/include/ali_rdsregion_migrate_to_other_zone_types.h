#ifndef ALI_RDSREGION_MIGRATE_TO_OTHER_ZONE_TYPESH
#define ALI_RDSREGION_MIGRATE_TO_OTHER_ZONE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionMigrateToOtherZoneRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string zone_id;
  std::string owner_account;
};
struct RdsRegionMigrateToOtherZoneResponseType {
};
} // end namespace
#endif
