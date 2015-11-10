#ifndef ALI_RDSREGION_DESCRIBE_IMPORTS_FOR_SQ_LSERVER_TYPESH
#define ALI_RDSREGION_DESCRIBE_IMPORTS_FOR_SQ_LSERVER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeImportsForSQLServerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string import_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsRegionDescribeImportsForSQLServerSQLServerImportType {
  int import_id;
  std::string file_name;
  std::string db_name;
  std::string import_status;
  std::string start_time;
};
struct RdsRegionDescribeImportsForSQLServerResponseType {
  std::vector<RdsRegionDescribeImportsForSQLServerSQLServerImportType> items;
  int total_record_counts;
  int page_number;
  int sq_litems_counts;
};
} // end namespace
#endif
