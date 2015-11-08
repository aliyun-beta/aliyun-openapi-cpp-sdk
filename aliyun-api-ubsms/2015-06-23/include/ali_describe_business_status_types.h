#ifndef ALI_DESCRIBE_BUSINESS_STATUS_TYPESH
#define ALI_DESCRIBE_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeBusinessStatusRequestType {
  std::string caller_bid;
  std::string password;
};
struct DescribeBusinessStatusStatusType {
  std::string status_key;
  std::string status_value;
};
struct DescribeBusinessStatusUserBusinessStatusType {
  std::vector<DescribeBusinessStatusStatusType> statuses;
  std::string uid;
  std::string service_code;
};
struct DescribeBusinessStatusResponseType {
  std::vector<DescribeBusinessStatusUserBusinessStatusType> user_business_status_list;
  bool success;
};
} // end namespace
#endif
