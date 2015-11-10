#ifndef ALI_SLB_DELETE_LOAD_BALANCER_LISTENER_TYPESH
#define ALI_SLB_DELETE_LOAD_BALANCER_LISTENER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDeleteLoadBalancerListenerRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string host_id;
  std::string owner_account;
};
struct SlbDeleteLoadBalancerListenerResponseType {
};
} // end namespace
#endif
