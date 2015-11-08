#ifndef ALI_MODIFY_SCALING_RULE_TYPESH
#define ALI_MODIFY_SCALING_RULE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyScalingRuleRequestType {
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
struct ModifyScalingRuleResponseType {
};
} // end namespace
#endif
