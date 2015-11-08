#ifndef ALI_DESCRIBE_PRICE_TYPESH
#define ALI_DESCRIBE_PRICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribePriceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string capacity;
  std::string order_type;
  std::string zone_id;
  std::string charge_type;
  std::string period;
  std::string quantity;
  std::string instance_id;
};
struct DescribePriceRuleType {
  long rule_desc_id;
  std::string name;
  std::string title;
};
struct DescribePriceOrderType {
  std::vector<std::string> rule_ids;
  float original_amount;
  float trade_amount;
  float discount_amount;
};
struct DescribePriceResponseType {
  std::vector<DescribePriceRuleType> rules;
  DescribePriceOrderType order;
};
} // end namespace
#endif
