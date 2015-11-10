#ifndef ALI_PTS_SET_TASK_STATUS_TYPESH
#define ALI_PTS_SET_TASK_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSSetTaskStatusRequestType {
  std::string wskey;
  std::string status;
};
struct PTSSetTaskStatusResponseType {
};
} // end namespace
#endif
