#ifndef ALI_DRDS_CANCEL_DD_LTASK_TYPESH
#define ALI_DRDS_CANCEL_DD_LTASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsCancelDDLTaskRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string task_id;
};
struct DrdsCancelDDLTaskResponseType {
};
} // end namespace
#endif
