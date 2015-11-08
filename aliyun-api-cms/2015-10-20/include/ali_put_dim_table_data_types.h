#ifndef ALI_PUT_DIM_TABLE_DATA_TYPESH
#define ALI_PUT_DIM_TABLE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PutDimTableDataRequestType {
  std::string dim_table_name;
  std::string body;
};
struct PutDimTableDataResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
