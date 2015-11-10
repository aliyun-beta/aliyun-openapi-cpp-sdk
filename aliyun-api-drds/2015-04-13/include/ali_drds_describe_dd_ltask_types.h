#ifndef ALI_DRDS_DESCRIBE_DD_LTASK_TYPESH
#define ALI_DRDS_DESCRIBE_DD_LTASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeDDLTaskRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string task_id;
};
struct DrdsDescribeDDLTaskDataType {
  std::string request_id;
  std::string target_id;
  std::string task_detail;
  int task_status;
  std::string task_phase;
  int task_type;
  std::string task_name;
  long gmt_create;
  std::string allow_cancel;
  std::string err_msg;
};
struct DrdsDescribeDDLTaskResponseType {
  DrdsDescribeDDLTaskDataType data;
};
} // end namespace
#endif
