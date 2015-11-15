#ifndef ALI_RISKH
#define ALI_RISKH
#include <string>
#include "ali_risk_find_risk_types.h"
#include "ali_risk_send_verify_code_types.h"
#include "ali_risk_validate_verify_code_types.h"
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
  version_("2015-03-23"),
  use_tls_(false),
  support_tls_(false),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int FindRisk(const RiskFindRiskRequestType& req,
          RiskFindRiskResponseType* resp,
          RiskErrorInfo* error_info);

  int SendVerifyCode(const RiskSendVerifyCodeRequestType& req,
          RiskSendVerifyCodeResponseType* resp,
          RiskErrorInfo* error_info);

  int ValidateVerifyCode(const RiskValidateVerifyCodeRequestType& req,
          RiskValidateVerifyCodeResponseType* resp,
          RiskErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
