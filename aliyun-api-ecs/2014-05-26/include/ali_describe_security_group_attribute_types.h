#ifndef ALI_DESCRIBE_SECURITY_GROUP_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_SECURITY_GROUP_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeSecurityGroupAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string nic_type;
  std::string owner_account;
  std::string direction;
};
struct DescribeSecurityGroupAttributePermissionType {
  std::string ip_protocol;
  std::string port_range;
  std::string source_group_id;
  std::string source_cidr_ip;
  std::string policy;
  std::string nic_type;
  std::string source_group_owner_account;
  std::string dest_group_id;
  std::string dest_cidr_ip;
  std::string dest_group_owner_account;
  std::string priority;
  std::string direction;
};
struct DescribeSecurityGroupAttributeResponseType {
  std::vector<DescribeSecurityGroupAttributePermissionType> permissions;
  std::string region_id;
  std::string security_group_id;
  std::string description;
  std::string security_group_name;
  std::string vpc_id;
};
} // end namespace
#endif
