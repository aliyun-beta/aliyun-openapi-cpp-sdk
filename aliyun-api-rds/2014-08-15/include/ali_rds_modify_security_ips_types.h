#ifndef ALI_RDS_MODIFY_SECURITY_IPS_TYPESH
#define ALI_RDS_MODIFY_SECURITY_IPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsModifySecurityIpsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string security_ips;
  std::string owner_account;
};
struct RdsModifySecurityIpsResponseType {
};
} // end namespace
#endif
