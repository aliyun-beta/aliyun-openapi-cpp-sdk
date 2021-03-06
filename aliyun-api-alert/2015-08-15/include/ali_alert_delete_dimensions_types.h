#ifndef ALI_ALERT_DELETE_DIMENSIONS_TYPESH
#define ALI_ALERT_DELETE_DIMENSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteDimensionsRequestType {
  std::string project_name;
  std::string alert_name;
  std::string dimensions_id;
};
struct AlertDeleteDimensionsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
