#ifndef ALI_ESS_DELETE_SCALING_RULE_TYPESH
#define ALI_ESS_DELETE_SCALING_RULE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssDeleteScalingRuleRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_rule_id;
  std::string owner_account;
};
struct EssDeleteScalingRuleResponseType {
};
} // end namespace
#endif
