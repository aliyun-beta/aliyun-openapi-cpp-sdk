#ifndef ALI_CMS_CREATE_DIM_TABLE_TYPESH
#define ALI_CMS_CREATE_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsCreateDimTableRequestType {
  std::string dim_table;
};
struct CmsCreateDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  long result;
};
} // end namespace
#endif
