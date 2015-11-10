#ifndef ALI_ESS_EXECUTE_SCALING_RULE_TYPESH
#define ALI_ESS_EXECUTE_SCALING_RULE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssExecuteScalingRuleRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_rule_ari;
  std::string client_token;
  std::string owner_account;
};
struct EssExecuteScalingRuleResponseType {
  std::string scaling_activity_id;
};
} // end namespace
#endif
