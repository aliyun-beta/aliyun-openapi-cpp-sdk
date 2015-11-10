#ifndef ALI_RDS_DESCRIBE_MODIFY_PARAMETER_LOG_TYPESH
#define ALI_RDS_DESCRIBE_MODIFY_PARAMETER_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeModifyParameterLogRequestType {
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
struct RdsDescribeModifyParameterLogParameterChangeLogType {
  std::string modify_time;
  std::string old_parameter_value;
  std::string new_parameter_value;
  std::string parameter_name;
  std::string status;
};
struct RdsDescribeModifyParameterLogResponseType {
  std::vector<RdsDescribeModifyParameterLogParameterChangeLogType> items;
  std::string engine;
  std::string db_instance_id;
  std::string engine_version;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
