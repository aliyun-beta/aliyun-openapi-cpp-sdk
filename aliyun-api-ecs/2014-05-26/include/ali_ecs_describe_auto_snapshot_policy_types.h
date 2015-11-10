#ifndef ALI_ECS_DESCRIBE_AUTO_SNAPSHOT_POLICY_TYPESH
#define ALI_ECS_DESCRIBE_AUTO_SNAPSHOT_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeAutoSnapshotPolicyRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct EcsDescribeAutoSnapshotPolicyAutoSnapshotPolicyType {
  std::string system_disk_policy_enabled;
  std::string system_disk_policy_time_period;
  std::string system_disk_policy_retention_days;
  std::string system_disk_policy_retention_last_week;
  std::string data_disk_policy_enabled;
  std::string data_disk_policy_time_period;
  std::string data_disk_policy_retention_days;
  std::string data_disk_policy_retention_last_week;
};
struct EcsDescribeAutoSnapshotPolicyAutoSnapshotExcutionStatusType {
  std::string system_disk_excution_status;
  std::string data_disk_excution_status;
};
struct EcsDescribeAutoSnapshotPolicyResponseType {
  EcsDescribeAutoSnapshotPolicyAutoSnapshotPolicyType auto_snapshot_policy;
  EcsDescribeAutoSnapshotPolicyAutoSnapshotExcutionStatusType auto_snapshot_excution_status;
  int auto_snapshot_occupation;
};
} // end namespace
#endif
