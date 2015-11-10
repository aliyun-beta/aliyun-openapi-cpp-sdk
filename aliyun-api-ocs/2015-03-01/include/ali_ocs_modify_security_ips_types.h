#ifndef ALI_OCS_MODIFY_SECURITY_IPS_TYPESH
#define ALI_OCS_MODIFY_SECURITY_IPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsModifySecurityIpsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string security_ips;
};
struct OcsModifySecurityIpsResponseType {
};
} // end namespace
#endif
