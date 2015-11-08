#ifndef ALI_SET_LOAD_BALANCER_UD_PLISTENER_ATTRIBUTE_TYPESH
#define ALI_SET_LOAD_BALANCER_UD_PLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetLoadBalancerUDPListenerAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string bandwidth;
  std::string scheduler;
  std::string persistence_timeout;
  std::string healthy_threshold;
  std::string unhealthy_threshold;
  std::string health_check_connect_timeout;
  std::string health_check_connect_port;
  std::string health_check_interval;
  std::string max_conn_limit;
  std::string owner_account;
};
struct SetLoadBalancerUDPListenerAttributeResponseType {
};
} // end namespace
#endif
