#ifndef ALI_CREATE_DIM_TABLE_TYPESH
#define ALI_CREATE_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateDimTableRequestType {
  std::string dim_table;
};
struct CreateDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  long result;
};
} // end namespace
#endif
