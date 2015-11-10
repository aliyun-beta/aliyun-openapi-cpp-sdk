#ifndef ALI_RISKH
#define ALI_RISKH
#include <string>
#include "ali_risk_find_risk_types.h"
#include "ali_risk_query_name_list_types.h"
#include "ali_risk_send_verify_code_types.h"
#include "ali_risk_validate_verify_code_types.h"
#include "ali_risk_write_ussc_types.h"
namespace aliyun {
struct RiskErrorInfo {
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
  version_("2015-08-04"),
  host_(host) {}
public:
  int FindRisk(const RiskFindRiskRequestType& req,
          RiskFindRiskResponseType* resp,
          RiskErrorInfo* error_info);

  int QueryNameList(const RiskQueryNameListRequestType& req,
          RiskQueryNameListResponseType* resp,
          RiskErrorInfo* error_info);

  int SendVerifyCode(const RiskSendVerifyCodeRequestType& req,
          RiskSendVerifyCodeResponseType* resp,
          RiskErrorInfo* error_info);

  int ValidateVerifyCode(const RiskValidateVerifyCodeRequestType& req,
          RiskValidateVerifyCodeResponseType* resp,
          RiskErrorInfo* error_info);

  int WriteUssc(const RiskWriteUsscRequestType& req,
          RiskWriteUsscResponseType* resp,
          RiskErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
