#ifndef ALI_GET_DB_SOURCE_TYPESH
#define ALI_GET_DB_SOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetDBSourceRequestType {
  std::string project_name;
  std::string source_name;
};
struct GetDBSourceResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
