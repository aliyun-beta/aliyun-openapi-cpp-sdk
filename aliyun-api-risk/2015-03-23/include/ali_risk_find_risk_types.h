#ifndef ALI_RISK_FIND_RISK_TYPESH
#define ALI_RISK_FIND_RISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RiskFindRiskRequestType {
  std::string mtee_code;
  std::string code_type;
  std::string id_type;
  std::string user_id;
  std::string collina;
  std::string umid_token;
  std::string ip;
  std::string email;
  std::string phone;
};
struct RiskFindRiskDataType {
  bool no_risk;
  std::string action;
  std::string tag;
  std::string message;
};
struct RiskFindRiskResponseType {
  RiskFindRiskDataType data;
  std::string code;
};
} // end namespace
#endif
