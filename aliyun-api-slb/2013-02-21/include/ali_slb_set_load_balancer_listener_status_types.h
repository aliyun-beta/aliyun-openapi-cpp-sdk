#ifndef ALI_SLB_SET_LOAD_BALANCER_LISTENER_STATUS_TYPESH
#define ALI_SLB_SET_LOAD_BALANCER_LISTENER_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetLoadBalancerListenerStatusRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string listener_status;
  std::string host_id;
  std::string owner_account;
};
struct SlbSetLoadBalancerListenerStatusResponseType {
};
} // end namespace
#endif
