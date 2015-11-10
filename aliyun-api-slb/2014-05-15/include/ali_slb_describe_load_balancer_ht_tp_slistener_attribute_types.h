#ifndef ALI_SLB_DESCRIBE_LOAD_BALANCER_HT_TP_SLISTENER_ATTRIBUTE_TYPESH
#define ALI_SLB_DESCRIBE_LOAD_BALANCER_HT_TP_SLISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeLoadBalancerHTTPSListenerAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct SlbDescribeLoadBalancerHTTPSListenerAttributeResponseType {
  int listener_port;
  int backend_server_port;
  int bandwidth;
  std::string status;
  std::string xforwarded_for;
  std::string scheduler;
  std::string sticky_session;
  std::string sticky_session_type;
  int cookie_timeout;
  std::string cookie;
  std::string health_check;
  std::string health_check_domain;
  std::string health_check_ur_i;
  int healthy_threshold;
  int unhealthy_threshold;
  int health_check_timeout;
  int health_check_interval;
  int health_check_connect_port;
  std::string health_check_http_code;
  std::string server_certificate_id;
  int max_conn_limit;
};
} // end namespace
#endif
