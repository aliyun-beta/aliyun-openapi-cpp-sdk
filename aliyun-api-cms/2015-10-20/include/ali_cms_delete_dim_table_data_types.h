#ifndef ALI_CMS_DELETE_DIM_TABLE_DATA_TYPESH
#define ALI_CMS_DELETE_DIM_TABLE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsDeleteDimTableDataRequestType {
  std::string dim_table_name;
  std::string key;
};
struct CmsDeleteDimTableDataResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
