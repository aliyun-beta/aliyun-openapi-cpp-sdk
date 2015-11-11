#ifndef ALI_BSS_DESCRIBE_CASH_DETAIL_TYPESH
#define ALI_BSS_DESCRIBE_CASH_DETAIL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct BssDescribeCashDetailResponseType {
  std::string balance_amount;
  std::string amount_owed;
  std::string enable_threshold_alert;
  long mini_alert_threshold;
  std::string frozen_amount;
  std::string credit_card_amount;
  std::string remmitance_amount;
  std::string credit_limit;
  std::string available_credit;
};
} // end namespace
#endif
