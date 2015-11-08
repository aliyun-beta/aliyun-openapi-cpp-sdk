#ifndef ALI_DESCRIBE_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_LOAD_BALANCER_TC_PLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLoadBalancerTCPListenerAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct DescribeLoadBalancerTCPListenerAttributeResponseType {
  int listener_port;
  int backend_server_port;
  std::string status;
  int bandwidth;
  std::string scheduler;
  std::string syn_proxy;
  int persistence_timeout;
  std::string health_check;
  int healthy_threshold;
  int unhealthy_threshold;
  int health_check_connect_timeout;
  int health_check_connect_port;
  int health_check_interval;
  std::string health_check_http_code;
  std::string health_check_domain;
  std::string health_check_ur_i;
  std::string health_check_type;
  int max_conn_limit;
};
} // end namespace
#endif
