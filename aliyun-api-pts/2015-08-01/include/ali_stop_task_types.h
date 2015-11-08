#ifndef ALI_STOP_TASK_TYPESH
#define ALI_STOP_TASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StopTaskRequestType {
  std::string task_id;
  std::string type;
  std::string msg;
};
struct StopTaskResponseType {
};
} // end namespace
#endif
