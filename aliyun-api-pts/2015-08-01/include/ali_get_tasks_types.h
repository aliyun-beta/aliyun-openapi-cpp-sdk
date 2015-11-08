#ifndef ALI_GET_TASKS_TYPESH
#define ALI_GET_TASKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetTasksRequestType {
  std::string status;
};
struct GetTasksResponseType {
  std::string tasks;
};
} // end namespace
#endif
