#ifndef ALI_ESS_MODIFY_SCALING_RULE_TYPESH
#define ALI_ESS_MODIFY_SCALING_RULE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssModifyScalingRuleRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_rule_id;
  std::string scaling_rule_name;
  std::string cooldown;
  std::string adjustment_type;
  std::string adjustment_value;
  std::string owner_account;
};
struct EssModifyScalingRuleResponseType {
};
} // end namespace
#endif
