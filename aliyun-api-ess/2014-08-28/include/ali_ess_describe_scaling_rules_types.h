#ifndef ALI_ESS_DESCRIBE_SCALING_RULES_TYPESH
#define ALI_ESS_DESCRIBE_SCALING_RULES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssDescribeScalingRulesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_number;
  std::string page_size;
  std::string scaling_group_id;
  std::string scaling_rule_id1;
  std::string scaling_rule_id2;
  std::string scaling_rule_id3;
  std::string scaling_rule_id4;
  std::string scaling_rule_id5;
  std::string scaling_rule_id6;
  std::string scaling_rule_id7;
  std::string scaling_rule_id8;
  std::string scaling_rule_id9;
  std::string scaling_rule_id10;
  std::string scaling_rule_name1;
  std::string scaling_rule_name2;
  std::string scaling_rule_name3;
  std::string scaling_rule_name4;
  std::string scaling_rule_name5;
  std::string scaling_rule_name6;
  std::string scaling_rule_name7;
  std::string scaling_rule_name8;
  std::string scaling_rule_name9;
  std::string scaling_rule_name10;
  std::string scaling_rule_ari1;
  std::string scaling_rule_ari2;
  std::string scaling_rule_ari3;
  std::string scaling_rule_ari4;
  std::string scaling_rule_ari5;
  std::string scaling_rule_ari6;
  std::string scaling_rule_ari7;
  std::string scaling_rule_ari8;
  std::string scaling_rule_ari9;
  std::string scaling_rule_ari10;
  std::string owner_account;
};
struct EssDescribeScalingRulesScalingRuleType {
  std::string scaling_rule_id;
  std::string scaling_group_id;
  std::string scaling_rule_name;
  int cooldown;
  std::string adjustment_type;
  int adjustment_value;
  int min_size;
  int max_size;
  std::string scaling_rule_ari;
};
struct EssDescribeScalingRulesResponseType {
  std::vector<EssDescribeScalingRulesScalingRuleType> scaling_rules;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
