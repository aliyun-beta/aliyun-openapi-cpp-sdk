#ifndef ALI_RISK_VALIDATE_VERIFY_CODE_TYPESH
#define ALI_RISK_VALIDATE_VERIFY_CODE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RiskValidateVerifyCodeRequestType {
  std::string request_id;
  std::string mtee_code;
  std::string code_type;
  std::string id_type;
  std::string user_id;
  std::string channel_type;
  std::string verify_code;
  std::string umid_token;
  std::string collina;
  std::string ip;
  std::string extend;
};
struct RiskValidateVerifyCodeResponseType {
  std::string code;
};
} // end namespace
#endif
