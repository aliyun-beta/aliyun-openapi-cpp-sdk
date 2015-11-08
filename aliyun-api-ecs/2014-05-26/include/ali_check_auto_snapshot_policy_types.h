#ifndef ALI_CHECK_AUTO_SNAPSHOT_POLICY_TYPESH
#define ALI_CHECK_AUTO_SNAPSHOT_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CheckAutoSnapshotPolicyRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string system_disk_policy_enabled;
  std::string system_disk_policy_time_period;
  std::string system_disk_policy_retention_days;
  std::string system_disk_policy_retention_last_week;
  std::string data_disk_policy_enabled;
  std::string data_disk_policy_time_period;
  std::string data_disk_policy_retention_days;
  std::string data_disk_policy_retention_last_week;
};
struct CheckAutoSnapshotPolicyResponseType {
  int auto_snapshot_occupation;
  std::string is_permitted_modify;
};
} // end namespace
#endif
