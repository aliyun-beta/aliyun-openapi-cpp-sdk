#ifndef ALI_DELETE_DIM_TABLE_TYPESH
#define ALI_DELETE_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteDimTableRequestType {
  std::string dim_table_name;
};
struct DeleteDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
