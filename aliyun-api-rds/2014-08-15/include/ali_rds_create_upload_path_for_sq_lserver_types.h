#ifndef ALI_RDS_CREATE_UPLOAD_PATH_FOR_SQ_LSERVER_TYPESH
#define ALI_RDS_CREATE_UPLOAD_PATH_FOR_SQ_LSERVER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsCreateUploadPathForSQLServerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string owner_account;
};
struct RdsCreateUploadPathForSQLServerResponseType {
  std::string internet_ftp_server;
  int internet_port;
  std::string intranet_ftpserver;
  int intranetport;
  std::string user_name;
  std::string password;
  std::string file_name;
};
} // end namespace
#endif
