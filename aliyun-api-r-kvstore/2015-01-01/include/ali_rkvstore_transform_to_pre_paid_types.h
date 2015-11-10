#ifndef ALI_RKVSTORE_TRANSFORM_TO_PRE_PAID_TYPESH
#define ALI_RKVSTORE_TRANSFORM_TO_PRE_PAID_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreTransformToPrePaidRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string period;
  std::string auto_pay;
};
struct RkvstoreTransformToPrePaidResponseType {
  std::string order_id;
  std::string end_time;
};
} // end namespace
#endif
