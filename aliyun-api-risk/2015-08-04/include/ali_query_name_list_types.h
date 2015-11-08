#ifndef ALI_QUERY_NAME_LIST_TYPESH
#define ALI_QUERY_NAME_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct QueryNameListRequestType {
  std::string type;
  std::string data_type;
  std::string data_value;
  std::string query_like;
  std::string extend;
};
struct QueryNameListRiskNameType {
  std::string type;
  std::string data_type;
  std::string data_value;
};
struct QueryNameListResponseType {
  std::vector<QueryNameListRiskNameType> risk_name_lists;
  std::string code;
};
} // end namespace
#endif
