#ifndef ALI_STOP_LOAD_BALANCER_LISTENER_TYPESH
#define ALI_STOP_LOAD_BALANCER_LISTENER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StopLoadBalancerListenerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct StopLoadBalancerListenerResponseType {
};
} // end namespace
#endif
