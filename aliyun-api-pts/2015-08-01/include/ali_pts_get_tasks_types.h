#ifndef ALI_PTS_GET_TASKS_TYPESH
#define ALI_PTS_GET_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSGetTasksRequestType {
  std::string status;
};
struct PTSGetTasksResponseType {
  std::string tasks;
};
} // end namespace
#endif
