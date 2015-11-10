#ifndef ALI_CMS_DELETE_DIM_TABLE_TYPESH
#define ALI_CMS_DELETE_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsDeleteDimTableRequestType {
  std::string dim_table_name;
};
struct CmsDeleteDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
