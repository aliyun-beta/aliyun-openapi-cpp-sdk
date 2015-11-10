#ifndef ALI_SLB_MODIFY_LOAD_BALANCER_INTERNET_SPEC_TYPESH
#define ALI_SLB_MODIFY_LOAD_BALANCER_INTERNET_SPEC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbModifyLoadBalancerInternetSpecRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string internet_charge_type;
  std::string bandwidth;
  std::string owner_account;
  std::string master_zone_id;
  std::string slave_zone_id;
  std::string max_conn_limit;
  std::string security_status;
};
struct SlbModifyLoadBalancerInternetSpecResponseType {
};
} // end namespace
#endif
