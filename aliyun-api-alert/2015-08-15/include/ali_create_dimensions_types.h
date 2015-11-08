#ifndef ALI_CREATE_DIMENSIONS_TYPESH
#define ALI_CREATE_DIMENSIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateDimensionsRequestType {
  std::string project_name;
  std::string alert_name;
  std::string dimensions;
};
struct CreateDimensionsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
