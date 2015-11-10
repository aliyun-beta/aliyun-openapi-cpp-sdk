#ifndef ALI_RISK_QUERY_NAME_LIST_TYPESH
#define ALI_RISK_QUERY_NAME_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RiskQueryNameListRequestType {
  std::string type;
  std::string data_type;
  std::string data_value;
  std::string query_like;
  std::string extend;
};
struct RiskQueryNameListRiskNameType {
  std::string type;
  std::string data_type;
  std::string data_value;
};
struct RiskQueryNameListResponseType {
  std::vector<RiskQueryNameListRiskNameType> risk_name_lists;
  std::string code;
};
} // end namespace
#endif
