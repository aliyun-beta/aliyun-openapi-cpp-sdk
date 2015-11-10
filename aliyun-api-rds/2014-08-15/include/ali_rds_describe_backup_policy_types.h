#ifndef ALI_RDS_DESCRIBE_BACKUP_POLICY_TYPESH
#define ALI_RDS_DESCRIBE_BACKUP_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeBackupPolicyRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsDescribeBackupPolicyResponseType {
  int backup_retention_period;
  std::string preferred_next_backup_time;
  std::string preferred_backup_time;
  std::string preferred_backup_period;
};
} // end namespace
#endif
