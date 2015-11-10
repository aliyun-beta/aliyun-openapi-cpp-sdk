#ifndef ALI_RISK_SEND_VERIFY_CODE_TYPESH
#define ALI_RISK_SEND_VERIFY_CODE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RiskSendVerifyCodeRequestType {
  std::string request_id;
  std::string mtee_code;
  std::string code_type;
  std::string id_type;
  std::string user_id;
  std::string channel_type;
  std::string biz_id;
  std::string event_id;
  std::string message_reiver;
  std::string time_interval;
  std::string message_parameters;
  std::string extend;
};
struct RiskSendVerifyCodeResponseType {
  std::string code;
};
} // end namespace
#endif
