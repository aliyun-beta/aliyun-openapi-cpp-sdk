#ifndef ALI_SLB_SET_LOAD_BALANCER_STATUS_TYPESH
#define ALI_SLB_SET_LOAD_BALANCER_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetLoadBalancerStatusRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string load_balancer_status;
  std::string owner_account;
};
struct SlbSetLoadBalancerStatusResponseType {
};
} // end namespace
#endif
