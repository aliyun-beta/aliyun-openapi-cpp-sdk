#ifndef ALI_DESCRIBE_INSTANCE_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_INSTANCE_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeInstanceAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string owner_account;
};
struct DescribeInstanceAttributeLockReasonType {
  std::string lock_reason;
};
struct DescribeInstanceAttributeVpcAttributesType {
  std::vector<std::string> private_ip_address;
  std::string vpc_id;
  std::string vswitch_id;
  std::string nat_ip_address;
};
struct DescribeInstanceAttributeEipAddressType {
  std::string allocation_id;
  std::string ip_address;
  int bandwidth;
  std::string internet_charge_type;
};
struct DescribeInstanceAttributeResponseType {
  std::vector<DescribeInstanceAttributeLockReasonType> operation_locks;
  std::vector<std::string> security_group_ids;
  std::vector<std::string> public_ip_address;
  std::vector<std::string> inner_ip_address;
  DescribeInstanceAttributeVpcAttributesType vpc_attributes;
  DescribeInstanceAttributeEipAddressType eip_address;
  std::string instance_id;
  std::string instance_name;
  std::string image_id;
  std::string region_id;
  std::string zone_id;
  std::string cluster_id;
  std::string instance_type;
  std::string host_name;
  std::string status;
  std::string internet_charge_type;
  int internet_max_bandwidth_in;
  int internet_max_bandwidth_out;
  std::string vlan_id;
  std::string serial_number;
  std::string creation_time;
  std::string description;
  std::string instance_network_type;
  std::string io_optimized;
  std::string instance_charge_type;
  std::string expired_time;
};
} // end namespace
#endif
