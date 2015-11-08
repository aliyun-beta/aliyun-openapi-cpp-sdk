#ifndef ALI_RENEW_INSTANCE_TYPESH
#define ALI_RENEW_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RenewInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string capacity;
  std::string period;
  std::string auto_pay;
};
struct RenewInstanceResponseType {
  std::string order_id;
  std::string end_time;
};
} // end namespace
#endif
