#ifndef ALI_CREATE_LOAD_BALANCER_TC_PLISTENER_TYPESH
#define ALI_CREATE_LOAD_BALANCER_TC_PLISTENER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateLoadBalancerTCPListenerRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string backend_server_port;
  std::string listener_status;
  std::string scheduler;
  std::string persistence_timeout;
  std::string health_check;
  std::string connect_timeout;
  std::string connect_port;
  std::string interval;
  std::string host_id;
  std::string owner_account;
};
struct CreateLoadBalancerTCPListenerResponseType {
};
} // end namespace
#endif
