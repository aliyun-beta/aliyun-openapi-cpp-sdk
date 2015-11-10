#ifndef ALI_ECS_MODIFY_AUTO_SNAPSHOT_POLICY_TYPESH
#define ALI_ECS_MODIFY_AUTO_SNAPSHOT_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyAutoSnapshotPolicyRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string system_disk_policy_enabled;
  std::string system_disk_policy_time_period;
  std::string system_disk_policy_retention_days;
  std::string system_disk_policy_retention_last_week;
  std::string data_disk_policy_enabled;
  std::string data_disk_policy_time_period;
  std::string data_disk_policy_retention_days;
  std::string data_disk_policy_retention_last_week;
  std::string owner_account;
};
struct EcsModifyAutoSnapshotPolicyResponseType {
};
} // end namespace
#endif
