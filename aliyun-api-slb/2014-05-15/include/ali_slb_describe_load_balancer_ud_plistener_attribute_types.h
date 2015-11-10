#ifndef ALI_SLB_DESCRIBE_LOAD_BALANCER_UD_PLISTENER_ATTRIBUTE_TYPESH
#define ALI_SLB_DESCRIBE_LOAD_BALANCER_UD_PLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeLoadBalancerUDPListenerAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct SlbDescribeLoadBalancerUDPListenerAttributeResponseType {
  int listener_port;
  int backend_server_port;
  std::string status;
  int bandwidth;
  std::string scheduler;
  int persistence_timeout;
  std::string health_check;
  int healthy_threshold;
  int unhealthy_threshold;
  int health_check_connect_timeout;
  int health_check_connect_port;
  int health_check_interval;
  int max_conn_limit;
};
} // end namespace
#endif
