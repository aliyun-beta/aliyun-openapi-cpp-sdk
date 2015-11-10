#ifndef ALI_CMS_UPDATE_DIM_TABLE_TYPESH
#define ALI_CMS_UPDATE_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsUpdateDimTableRequestType {
  std::string dim_table_name;
  std::string dim_table;
};
struct CmsUpdateDimTableResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
