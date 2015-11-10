#ifndef ALI_UBSMSINNER_DESCRIBE_USER_BUSINESS_STATUS_TYPESH
#define ALI_UBSMSINNER_DESCRIBE_USER_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UbsmsinnerDescribeUserBusinessStatusRequestType {
  std::string caller_bid;
  std::string uid;
  std::string service_code;
  std::string password;
};
struct UbsmsinnerDescribeUserBusinessStatusStatusType {
  std::string status_key;
  std::string status_value;
};
struct UbsmsinnerDescribeUserBusinessStatusResponseType {
  std::vector<UbsmsinnerDescribeUserBusinessStatusStatusType> statuses;
  bool success;
  std::string uid;
  std::string service_code;
};
} // end namespace
#endif
