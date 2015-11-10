#ifndef ALI_ALERT_GET_DIMENSIONS_TYPESH
#define ALI_ALERT_GET_DIMENSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetDimensionsRequestType {
  std::string project_name;
  std::string alert_name;
  std::string dimensions_id;
};
struct AlertGetDimensionsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
