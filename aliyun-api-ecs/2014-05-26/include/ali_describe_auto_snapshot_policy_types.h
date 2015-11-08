#ifndef ALI_DESCRIBE_AUTO_SNAPSHOT_POLICY_TYPESH
#define ALI_DESCRIBE_AUTO_SNAPSHOT_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeAutoSnapshotPolicyRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct DescribeAutoSnapshotPolicyAutoSnapshotPolicyType {
  std::string system_disk_policy_enabled;
  std::string system_disk_policy_time_period;
  std::string system_disk_policy_retention_days;
  std::string system_disk_policy_retention_last_week;
  std::string data_disk_policy_enabled;
  std::string data_disk_policy_time_period;
  std::string data_disk_policy_retention_days;
  std::string data_disk_policy_retention_last_week;
};
struct DescribeAutoSnapshotPolicyAutoSnapshotExcutionStatusType {
  std::string system_disk_excution_status;
  std::string data_disk_excution_status;
};
struct DescribeAutoSnapshotPolicyResponseType {
  DescribeAutoSnapshotPolicyAutoSnapshotPolicyType auto_snapshot_policy;
  DescribeAutoSnapshotPolicyAutoSnapshotExcutionStatusType auto_snapshot_excution_status;
  int auto_snapshot_occupation;
};
} // end namespace
#endif
