#ifndef ALI_MODIFY_BACKUP_POLICY_TYPESH
#define ALI_MODIFY_BACKUP_POLICY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyBackupPolicyRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string preferred_backup_time;
  std::string preferred_backup_period;
  std::string owner_account;
};
struct ModifyBackupPolicyResponseType {
};
} // end namespace
#endif
