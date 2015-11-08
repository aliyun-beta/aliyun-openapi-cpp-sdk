#ifndef ALI_DESCRIBE_SECURITY_IPS_TYPESH
#define ALI_DESCRIBE_SECURITY_IPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeSecurityIpsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct DescribeSecurityIpsResponseType {
  std::string security_ips;
};
} // end namespace
#endif
