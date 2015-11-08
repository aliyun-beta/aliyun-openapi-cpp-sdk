#ifndef ALI_DESCRIBE_USER_BUSINESS_STATUS_TYPESH
#define ALI_DESCRIBE_USER_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeUserBusinessStatusRequestType {
  std::string caller_bid;
  std::string uid;
  std::string service_code;
  std::string password;
};
struct DescribeUserBusinessStatusStatusType {
  std::string status_key;
  std::string status_value;
};
struct DescribeUserBusinessStatusResponseType {
  std::vector<DescribeUserBusinessStatusStatusType> statuses;
  bool success;
  std::string uid;
  std::string service_code;
};
} // end namespace
#endif
