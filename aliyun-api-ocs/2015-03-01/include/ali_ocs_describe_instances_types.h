#ifndef ALI_OCS_DESCRIBE_INSTANCES_TYPESH
#define ALI_OCS_DESCRIBE_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_ids;
  std::string instance_status;
  std::string page_number;
  std::string page_size;
  std::string network_type;
  std::string vpc_id;
  std::string vswitch_id;
  std::string private_ip_addresses;
};
struct OcsDescribeInstancesOcsInstanceType {
  std::string instance_id;
  std::string instance_name;
  std::string connection_domain;
  int port;
  std::string user_name;
  std::string instance_status;
  long capacity;
  long qp_s;
  long bandwidth;
  long connections;
  std::string region_id;
  std::string zone_id;
  std::string network_type;
  std::string vpc_id;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string creation_time;
};
struct OcsDescribeInstancesResponseType {
  std::vector<OcsDescribeInstancesOcsInstanceType> instances;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
