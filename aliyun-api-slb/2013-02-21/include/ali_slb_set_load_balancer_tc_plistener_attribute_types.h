#ifndef ALI_SLB_SET_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#define ALI_SLB_SET_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetLoadBalancerTCPListenerAttributeRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string scheduler;
  std::string persistence_timeout;
  std::string health_check;
  std::string healthy_threshold;
  std::string unhealthy_threshold;
  std::string connect_timeout;
  std::string connect_port;
  std::string interval;
  std::string host_id;
  std::string owner_account;
};
struct SlbSetLoadBalancerTCPListenerAttributeResponseType {
};
} // end namespace
#endif
