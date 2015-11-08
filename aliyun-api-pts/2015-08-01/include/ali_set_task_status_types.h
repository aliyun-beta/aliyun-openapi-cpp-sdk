#ifndef ALI_SET_TASK_STATUS_TYPESH
#define ALI_SET_TASK_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetTaskStatusRequestType {
  std::string wskey;
  std::string status;
};
struct SetTaskStatusResponseType {
};
} // end namespace
#endif
