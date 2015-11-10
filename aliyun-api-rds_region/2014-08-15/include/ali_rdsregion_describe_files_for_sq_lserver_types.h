#ifndef ALI_RDSREGION_DESCRIBE_FILES_FOR_SQ_LSERVER_TYPESH
#define ALI_RDSREGION_DESCRIBE_FILES_FOR_SQ_LSERVER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeFilesForSQLServerRequestType {
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
struct RdsRegionDescribeFilesForSQLServerSQLServerUploadFileType {
  std::string db_name;
  std::string file_name;
  long file_size;
  std::string internet_ftp_server;
  int internet_port;
  std::string intranet_ftpserver;
  int intranetport;
  std::string user_name;
  std::string password;
  std::string file_status;
  std::string description;
  std::string creation_time;
};
struct RdsRegionDescribeFilesForSQLServerResponseType {
  std::vector<RdsRegionDescribeFilesForSQLServerSQLServerUploadFileType> items;
  std::string db_instance_id;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
