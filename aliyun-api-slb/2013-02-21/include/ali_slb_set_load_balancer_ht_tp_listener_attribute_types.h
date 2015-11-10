#ifndef ALI_SLB_SET_LOAD_BALANCER_HT_TP_LISTENER_ATTRIBUTE_TYPESH
#define ALI_SLB_SET_LOAD_BALANCER_HT_TP_LISTENER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetLoadBalancerHTTPListenerAttributeRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string xforwarded_for;
  std::string scheduler;
  std::string sticky_session;
  std::string sticky_session_type;
  std::string cookie_timeout;
  std::string cookie;
  std::string health_check;
  std::string domain;
  std::string ur_i;
  std::string healthy_threshold;
  std::string unhealthy_threshold;
  std::string health_check_timeout;
  std::string interval;
  std::string host_id;
  std::string owner_account;
};
struct SlbSetLoadBalancerHTTPListenerAttributeResponseType {
};
} // end namespace
#endif
