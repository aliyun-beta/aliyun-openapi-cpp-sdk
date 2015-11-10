#ifndef ALI_UBSMSINNER_DESCRIBE_BUSINESS_STATUS_TYPESH
#define ALI_UBSMSINNER_DESCRIBE_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UbsmsinnerDescribeBusinessStatusRequestType {
  std::string caller_bid;
  std::string password;
};
struct UbsmsinnerDescribeBusinessStatusStatusType {
  std::string status_key;
  std::string status_value;
};
struct UbsmsinnerDescribeBusinessStatusUserBusinessStatusType {
  std::vector<UbsmsinnerDescribeBusinessStatusStatusType> statuses;
  std::string uid;
  std::string service_code;
};
struct UbsmsinnerDescribeBusinessStatusResponseType {
  std::vector<UbsmsinnerDescribeBusinessStatusUserBusinessStatusType> user_business_status_list;
  bool success;
};
} // end namespace
#endif
