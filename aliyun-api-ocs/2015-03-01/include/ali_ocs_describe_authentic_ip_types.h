#ifndef ALI_OCS_DESCRIBE_AUTHENTIC_IP_TYPESH
#define ALI_OCS_DESCRIBE_AUTHENTIC_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeAuthenticIPRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct OcsDescribeAuthenticIPResponseType {
  std::string authentic_ips;
};
} // end namespace
#endif
