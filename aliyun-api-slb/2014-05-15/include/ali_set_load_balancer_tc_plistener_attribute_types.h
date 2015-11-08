#ifndef ALI_SET_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#define ALI_SET_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetLoadBalancerTCPListenerAttributeRequestType {
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
  std::string health_check_domain;
  std::string health_check_ur_i;
  std::string health_check_http_code;
  std::string health_check_type;
  std::string syn_proxy;
  std::string max_conn_limit;
  std::string owner_account;
};
struct SetLoadBalancerTCPListenerAttributeResponseType {
};
} // end namespace
#endif
