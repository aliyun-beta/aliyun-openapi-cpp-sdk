#ifndef ALI_SLB_CREATE_LOAD_BALANCER_HT_TP_LISTENER_TYPESH
#define ALI_SLB_CREATE_LOAD_BALANCER_HT_TP_LISTENER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbCreateLoadBalancerHTTPListenerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string bandwidth;
  std::string listener_port;
  std::string backend_server_port;
  std::string xforwarded_for;
  std::string scheduler;
  std::string sticky_session;
  std::string sticky_session_type;
  std::string cookie_timeout;
  std::string cookie;
  std::string health_check;
  std::string health_check_domain;
  std::string health_check_ur_i;
  std::string healthy_threshold;
  std::string unhealthy_threshold;
  std::string health_check_timeout;
  std::string health_check_connect_port;
  std::string health_check_interval;
  std::string health_check_http_code;
  std::string max_conn_limit;
  std::string owner_account;
};
struct SlbCreateLoadBalancerHTTPListenerResponseType {
};
} // end namespace
#endif
