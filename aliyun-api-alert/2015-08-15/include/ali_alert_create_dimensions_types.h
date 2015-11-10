#ifndef ALI_ALERT_CREATE_DIMENSIONS_TYPESH
#define ALI_ALERT_CREATE_DIMENSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateDimensionsRequestType {
  std::string project_name;
  std::string alert_name;
  std::string dimensions;
};
struct AlertCreateDimensionsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
