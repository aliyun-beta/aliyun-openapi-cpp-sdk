#ifndef ALI_DESCRIBE_INSTANCES_TYPESH
#define ALI_DESCRIBE_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vpc_id;
  std::string vswitch_id;
  std::string zone_id;
  std::string instance_network_type;
  std::string security_group_id;
  std::string instance_ids;
  std::string page_number;
  std::string page_size;
  std::string inner_ip_addresses;
  std::string private_ip_addresses;
  std::string public_ip_addresses;
  std::string owner_account;
  std::string instance_charge_type;
  std::string internet_charge_type;
  std::string instance_name;
  std::string image_id;
  std::string status;
  std::string lock_reason;
  std::string filter1_key;
  std::string filter2_key;
  std::string filter3_key;
  std::string filter4_key;
  std::string filter1_value;
  std::string filter2_value;
  std::string filter3_value;
  std::string filter4_value;
  std::string device_available;
  std::string io_optimized;
  std::string tag1_key;
  std::string tag2_key;
  std::string tag3_key;
  std::string tag4_key;
  std::string tag5_key;
  std::string tag1_value;
  std::string tag2_value;
  std::string tag3_value;
  std::string tag4_value;
  std::string tag5_value;
};
struct DescribeInstancesLockReasonType {
  std::string lock_reason;
};
struct DescribeInstancesTagType {
  std::string tag_key;
  std::string tag_value;
};
struct DescribeInstancesVpcAttributesType {
  std::vector<std::string> private_ip_address;
  std::string vpc_id;
  std::string vswitch_id;
  std::string nat_ip_address;
};
struct DescribeInstancesEipAddressType {
  std::string allocation_id;
  std::string ip_address;
  int bandwidth;
  std::string internet_charge_type;
};
struct DescribeInstancesInstanceType {
  std::vector<DescribeInstancesLockReasonType> operation_locks;
  std::vector<DescribeInstancesTagType> tags;
  std::vector<std::string> security_group_ids;
  std::vector<std::string> public_ip_address;
  std::vector<std::string> inner_ip_address;
  DescribeInstancesVpcAttributesType vpc_attributes;
  DescribeInstancesEipAddressType eip_address;
  std::string instance_id;
  std::string instance_name;
  std::string description;
  std::string image_id;
  std::string region_id;
  std::string zone_id;
  std::string cluster_id;
  std::string instance_type;
  std::string host_name;
  std::string status;
  std::string serial_number;
  std::string internet_charge_type;
  int internet_max_bandwidth_in;
  int internet_max_bandwidth_out;
  std::string vlan_id;
  std::string creation_time;
  std::string instance_network_type;
  std::string instance_charge_type;
  std::string expired_time;
  bool io_optimized;
  bool device_available;
};
struct DescribeInstancesResponseType {
  std::vector<DescribeInstancesInstanceType> instances;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
