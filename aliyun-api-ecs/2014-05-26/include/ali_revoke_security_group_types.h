#ifndef ALI_REVOKE_SECURITY_GROUP_TYPESH
#define ALI_REVOKE_SECURITY_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RevokeSecurityGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string ip_protocol;
  std::string port_range;
  std::string source_group_id;
  std::string source_group_owner_account;
  std::string source_cidr_ip;
  std::string policy;
  std::string nic_type;
  std::string owner_account;
};
struct RevokeSecurityGroupResponseType {
};
} // end namespace
#endif
