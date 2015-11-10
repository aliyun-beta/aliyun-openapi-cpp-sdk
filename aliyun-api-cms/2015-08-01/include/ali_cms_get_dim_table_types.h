#ifndef ALI_CMS_GET_DIM_TABLE_TYPESH
#define ALI_CMS_GET_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsGetDimTableRequestType {
  std::string dim_table_name;
};
struct CmsGetDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
