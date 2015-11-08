#ifndef ALI_DESCRIBE_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLoadBalancerTCPListenerAttributeRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string host_id;
  std::string owner_account;
};
struct DescribeLoadBalancerTCPListenerAttributeResponseType {
  int listener_port;
  int backend_server_port;
  std::string status;
  std::string scheduler;
  int persistence_timeout;
  std::string health_check;
  int healthy_threshold;
  int unhealthy_threshold;
  int connect_timeout;
  int connect_port;
  int interval;
};
} // end namespace
#endif
