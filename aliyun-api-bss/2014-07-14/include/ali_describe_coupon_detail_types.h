#ifndef ALI_DESCRIBE_COUPON_DETAIL_TYPESH
#define ALI_DESCRIBE_COUPON_DETAIL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeCouponDetailRequestType {
  std::string coupon_number;
};
struct DescribeCouponDetailResponseType {
  std::vector<std::string> product_codes;
  std::vector<std::string> trade_types;
  long coupon_template_id;
  std::string total_amount;
  std::string balance_amount;
  std::string frozen_amount;
  std::string expired_amount;
  std::string delivery_time;
  std::string expired_time;
  std::string coupon_number;
  std::string status;
  std::string description;
  std::string creation_time;
  std::string modification_time;
  std::string price_limit;
  std::string application;
};
} // end namespace
#endif
