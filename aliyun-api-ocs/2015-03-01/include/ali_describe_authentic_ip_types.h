#ifndef ALI_DESCRIBE_AUTHENTIC_IP_TYPESH
#define ALI_DESCRIBE_AUTHENTIC_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeAuthenticIPRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct DescribeAuthenticIPResponseType {
  std::string authentic_ips;
};
} // end namespace
#endif
