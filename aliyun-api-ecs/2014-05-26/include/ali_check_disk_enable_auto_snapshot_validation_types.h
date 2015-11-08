#ifndef ALI_CHECK_DISK_ENABLE_AUTO_SNAPSHOT_VALIDATION_TYPESH
#define ALI_CHECK_DISK_ENABLE_AUTO_SNAPSHOT_VALIDATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CheckDiskEnableAutoSnapshotValidationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string disk_ids;
};
struct CheckDiskEnableAutoSnapshotValidationResponseType {
  std::string is_permitted;
  int auto_snapshot_occupation;
};
} // end namespace
#endif
