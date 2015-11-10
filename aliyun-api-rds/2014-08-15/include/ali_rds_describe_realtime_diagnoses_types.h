#ifndef ALI_RDS_DESCRIBE_REALTIME_DIAGNOSES_TYPESH
#define ALI_RDS_DESCRIBE_REALTIME_DIAGNOSES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeRealtimeDiagnosesRequestType {
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
struct RdsDescribeRealtimeDiagnosesRealtimeDiagnoseTasksType {
  std::string create_time;
  std::string task_id;
  std::string health_score;
  std::string status;
};
struct RdsDescribeRealtimeDiagnosesResponseType {
  std::vector<RdsDescribeRealtimeDiagnosesRealtimeDiagnoseTasksType> tasks;
  std::string engine;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
