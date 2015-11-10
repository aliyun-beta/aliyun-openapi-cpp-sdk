#ifndef ALI_RDSREGION_DESCRIBE_BACKUP_TASKS_TYPESH
#define ALI_RDSREGION_DESCRIBE_BACKUP_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeBackupTasksRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string flag;
  std::string owner_account;
  std::string db_instance_id;
  std::string backup_job_id;
  std::string backup_mode;
  std::string backup_job_status;
};
struct RdsRegionDescribeBackupTasksBackupJobType {
  std::string backup_progress_status;
  std::string job_mode;
  std::string process;
  std::string task_action;
  std::string backupjob_id;
};
struct RdsRegionDescribeBackupTasksResponseType {
  std::vector<RdsRegionDescribeBackupTasksBackupJobType> items;
};
} // end namespace
#endif
