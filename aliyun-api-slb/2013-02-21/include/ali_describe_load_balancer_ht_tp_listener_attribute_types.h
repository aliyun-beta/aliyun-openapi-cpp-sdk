#ifndef ALI_DESCRIBE_LOAD_BALANCER_HT_TP_LISTENER_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_LOAD_BALANCER_HT_TP_LISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLoadBalancerHTTPListenerAttributeRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string host_id;
  std::string owner_account;
};
struct DescribeLoadBalancerHTTPListenerAttributeResponseType {
  int listener_port;
  int backend_server_port;
  std::string status;
  std::string xforwarded_for;
  std::string scheduler;
  std::string sticky_session;
  std::string sticky_sessionapi_type;
  int cookie_timeout;
  std::string cookie;
  std::string health_check;
  std::string domain;
  std::string ur_i;
  int healthy_threshold;
  int unhealthy_threshold;
  int health_check_timeout;
  int interval;
};
} // end namespace
#endif
