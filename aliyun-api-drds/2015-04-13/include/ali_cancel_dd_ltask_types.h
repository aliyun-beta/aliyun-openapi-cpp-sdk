#ifndef ALI_CANCEL_DD_LTASK_TYPESH
#define ALI_CANCEL_DD_LTASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CancelDDLTaskRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string task_id;
};
struct CancelDDLTaskResponseType {
};
} // end namespace
#endif
