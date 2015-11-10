#ifndef ALI_ECS_CHECK_DISK_ENABLE_AUTO_SNAPSHOT_VALIDATION_TYPESH
#define ALI_ECS_CHECK_DISK_ENABLE_AUTO_SNAPSHOT_VALIDATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCheckDiskEnableAutoSnapshotValidationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string disk_ids;
};
struct EcsCheckDiskEnableAutoSnapshotValidationResponseType {
  std::string is_permitted;
  int auto_snapshot_occupation;
};
} // end namespace
#endif
