#ifndef ALI_SLB_DESCRIBE_LOAD_BALANCERS_TYPESH
#define ALI_SLB_DESCRIBE_LOAD_BALANCERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeLoadBalancersRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_id;
  std::string load_balancer_id;
  std::string address_type;
  std::string internet_charge_type;
  std::string vpc_id;
  std::string vswitch_id;
  std::string network_type;
  std::string address;
  std::string security_status;
  std::string master_zone_id;
  std::string slave_zone_id;
  std::string owner_account;
};
struct SlbDescribeLoadBalancersLoadBalancerType {
  std::string load_balancer_id;
  std::string load_balancer_name;
  std::string load_balancer_status;
  std::string address;
  std::string address_type;
  std::string region_id;
  std::string region_id_alias;
  std::string vswitch_id;
  std::string vpc_id;
  std::string network_type;
  std::string master_zone_id;
  std::string slave_zone_id;
  int max_conn_limit;
  std::string security_status;
  std::string internet_charge_type;
  int sys_bandwidth;
};
struct SlbDescribeLoadBalancersResponseType {
  std::vector<SlbDescribeLoadBalancersLoadBalancerType> load_balancers;
};
} // end namespace
#endif
