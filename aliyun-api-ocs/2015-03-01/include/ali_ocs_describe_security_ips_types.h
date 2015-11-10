#ifndef ALI_OCS_DESCRIBE_SECURITY_IPS_TYPESH
#define ALI_OCS_DESCRIBE_SECURITY_IPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeSecurityIpsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct OcsDescribeSecurityIpsResponseType {
  std::string security_ips;
};
} // end namespace
#endif
