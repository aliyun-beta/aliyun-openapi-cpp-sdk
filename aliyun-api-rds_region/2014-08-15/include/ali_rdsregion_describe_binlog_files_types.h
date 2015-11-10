#ifndef ALI_RDSREGION_DESCRIBE_BINLOG_FILES_TYPESH
#define ALI_RDSREGION_DESCRIBE_BINLOG_FILES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeBinlogFilesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsRegionDescribeBinlogFilesBinLogFileType {
  long file_size;
  std::string log_begin_time;
  std::string log_end_time;
  std::string download_link;
  std::string link_expired_time;
};
struct RdsRegionDescribeBinlogFilesResponseType {
  std::vector<RdsRegionDescribeBinlogFilesBinLogFileType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
