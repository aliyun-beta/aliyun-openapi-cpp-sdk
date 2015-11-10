#ifndef ALI_UBSMS_DESCRIBE_BUSINESS_STATUS_TYPESH
#define ALI_UBSMS_DESCRIBE_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UbsmsDescribeBusinessStatusRequestType {
  std::string caller_bid;
  std::string password;
};
struct UbsmsDescribeBusinessStatusStatusType {
  std::string status_key;
  std::string status_value;
};
struct UbsmsDescribeBusinessStatusUserBusinessStatusType {
  std::vector<UbsmsDescribeBusinessStatusStatusType> statuses;
  std::string uid;
  std::string service_code;
};
struct UbsmsDescribeBusinessStatusResponseType {
  std::vector<UbsmsDescribeBusinessStatusUserBusinessStatusType> user_business_status_list;
  bool success;
};
} // end namespace
#endif
