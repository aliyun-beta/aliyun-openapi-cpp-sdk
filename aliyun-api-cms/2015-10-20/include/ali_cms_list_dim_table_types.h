#ifndef ALI_CMS_LIST_DIM_TABLE_TYPESH
#define ALI_CMS_LIST_DIM_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsListDimTableRequestType {
  std::string dim_table_name;
  std::string page;
  std::string page_size;
};
struct CmsListDimTableResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  int next_token;
};
} // end namespace
#endif
