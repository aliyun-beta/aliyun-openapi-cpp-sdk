#ifndef ALI_RISKH
#define ALI_RISKH
#include <string>
#include "ali_find_risk_types.h"
#include "ali_send_verify_code_types.h"
#include "ali_validate_verify_code_types.h"
namespace aliyun {
struct AliRiskErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Risk {
public:
  static Risk* CreateRiskClient(std::string endpoint, std::string appid, std::string secret);
private:
  Risk(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-03-23"),
  host_(host) {}
public:
  int FindRisk(const FindRiskRequestType& req,
          FindRiskResponseType* resp,
          AliRiskErrorInfo* error_info);

  int SendVerifyCode(const SendVerifyCodeRequestType& req,
          SendVerifyCodeResponseType* resp,
          AliRiskErrorInfo* error_info);

  int ValidateVerifyCode(const ValidateVerifyCodeRequestType& req,
          ValidateVerifyCodeResponseType* resp,
          AliRiskErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
