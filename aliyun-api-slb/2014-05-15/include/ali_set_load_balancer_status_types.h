#ifndef ALI_SET_LOAD_BALANCER_STATUS_TYPESH
#define ALI_SET_LOAD_BALANCER_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetLoadBalancerStatusRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string load_balancer_status;
  std::string owner_account;
};
struct SetLoadBalancerStatusResponseType {
};
} // end namespace
#endif
