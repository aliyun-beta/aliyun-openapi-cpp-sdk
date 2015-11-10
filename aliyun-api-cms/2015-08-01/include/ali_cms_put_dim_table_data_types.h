#ifndef ALI_CMS_PUT_DIM_TABLE_DATA_TYPESH
#define ALI_CMS_PUT_DIM_TABLE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsPutDimTableDataRequestType {
  std::string dim_table_name;
  std::string body;
};
struct CmsPutDimTableDataResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
