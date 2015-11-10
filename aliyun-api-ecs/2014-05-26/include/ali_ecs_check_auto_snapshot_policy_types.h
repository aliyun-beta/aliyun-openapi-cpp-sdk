#ifndef ALI_ECS_CHECK_AUTO_SNAPSHOT_POLICY_TYPESH
#define ALI_ECS_CHECK_AUTO_SNAPSHOT_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCheckAutoSnapshotPolicyRequestType {
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
struct EcsCheckAutoSnapshotPolicyResponseType {
  int auto_snapshot_occupation;
  std::string is_permitted_modify;
};
} // end namespace
#endif
