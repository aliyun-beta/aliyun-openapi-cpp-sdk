#ifndef ALI_CREATE_LOAD_BALANCER_TYPESH
#define ALI_CREATE_LOAD_BALANCER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateLoadBalancerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string address_type;
  std::string internet_charge_type;
  std::string bandwidth;
  std::string client_token;
  std::string load_balancer_name;
  std::string vpc_id;
  std::string vswitch_id;
  std::string owner_account;
  std::string master_zone_id;
  std::string slave_zone_id;
  std::string max_conn_limit;
  std::string security_status;
};
struct CreateLoadBalancerResponseType {
  std::string load_balancer_id;
  std::string address;
  std::string load_balancer_name;
  std::string vpc_id;
  std::string vswitch_id;
  std::string network_type;
};
} // end namespace
#endif
