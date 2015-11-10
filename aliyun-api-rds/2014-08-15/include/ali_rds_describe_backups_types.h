#ifndef ALI_RDS_DESCRIBE_BACKUPS_TYPESH
#define ALI_RDS_DESCRIBE_BACKUPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeBackupsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string backup_id;
  std::string backup_location;
  std::string backup_status;
  std::string backup_mode;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsDescribeBackupsBackupType {
  std::string backup_id;
  std::string db_instance_id;
  std::string backup_status;
  std::string backup_start_time;
  std::string backup_end_time;
  std::string backup_type;
  std::string backup_mode;
  std::string backup_method;
  std::string backup_download_ur_l;
  std::string backup_location;
  std::string backup_extraction_status;
  std::string backup_scale;
  std::string backup_db_names;
  long backup_size;
};
struct RdsDescribeBackupsResponseType {
  std::vector<RdsDescribeBackupsBackupType> items;
  std::string total_record_count;
  std::string page_number;
  std::string page_record_count;
};
} // end namespace
#endif
