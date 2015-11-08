#ifndef ALI_GET_DIM_TABLE_TYPESH
#define ALI_GET_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetDimTableRequestType {
  std::string dim_table_name;
};
struct GetDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
