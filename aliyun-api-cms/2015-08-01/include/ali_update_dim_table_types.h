#ifndef ALI_UPDATE_DIM_TABLE_TYPESH
#define ALI_UPDATE_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateDimTableRequestType {
  std::string dim_table_name;
  std::string dim_table;
};
struct UpdateDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
