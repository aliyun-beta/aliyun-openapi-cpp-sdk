#ifndef ALI_SLB_SET_LOAD_BALANCER_NAME_TYPESH
#define ALI_SLB_SET_LOAD_BALANCER_NAME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetLoadBalancerNameRequestType {
  std::string load_balancer_id;
  std::string load_balancer_name;
  std::string host_id;
  std::string owner_account;
};
struct SlbSetLoadBalancerNameResponseType {
};
} // end namespace
#endif
