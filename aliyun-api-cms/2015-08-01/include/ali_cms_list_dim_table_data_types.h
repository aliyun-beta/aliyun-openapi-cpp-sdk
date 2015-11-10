#ifndef ALI_CMS_LIST_DIM_TABLE_DATA_TYPESH
#define ALI_CMS_LIST_DIM_TABLE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsListDimTableDataRequestType {
  std::string dim_table_name;
  std::string key;
};
struct CmsListDimTableDataResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
