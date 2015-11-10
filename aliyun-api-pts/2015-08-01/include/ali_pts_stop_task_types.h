#ifndef ALI_PTS_STOP_TASK_TYPESH
#define ALI_PTS_STOP_TASK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSStopTaskRequestType {
  std::string task_id;
  std::string type;
  std::string msg;
};
struct PTSStopTaskResponseType {
};
} // end namespace
#endif
