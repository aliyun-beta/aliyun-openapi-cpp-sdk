#ifndef ALI_DELETE_DIM_TABLE_DATA_TYPESH
#define ALI_DELETE_DIM_TABLE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteDimTableDataRequestType {
  std::string dim_table_name;
  std::string key;
};
struct DeleteDimTableDataResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
