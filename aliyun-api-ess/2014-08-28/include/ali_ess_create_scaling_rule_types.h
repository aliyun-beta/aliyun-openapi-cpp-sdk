#ifndef ALI_ESS_CREATE_SCALING_RULE_TYPESH
#define ALI_ESS_CREATE_SCALING_RULE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssCreateScalingRuleRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_id;
  std::string scaling_rule_name;
  std::string cooldown;
  std::string adjustment_type;
  std::string adjustment_value;
  std::string owner_account;
};
struct EssCreateScalingRuleResponseType {
  std::string scaling_rule_id;
  std::string scaling_rule_ari;
};
} // end namespace
#endif
