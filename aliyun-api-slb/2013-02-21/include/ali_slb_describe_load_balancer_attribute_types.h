#ifndef ALI_SLB_DESCRIBE_LOAD_BALANCER_ATTRIBUTE_TYPESH
#define ALI_SLB_DESCRIBE_LOAD_BALANCER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeLoadBalancerAttributeRequestType {
  std::string load_balancer_id;
  std::string host_id;
  std::string owner_account;
};
struct SlbDescribeLoadBalancerAttributeBackendServerType {
  std::string server_id;
  int weight;
};
struct SlbDescribeLoadBalancerAttributeResponseType {
  std::vector<SlbDescribeLoadBalancerAttributeBackendServerType> backend_servers;
  std::vector<std::string> listener_ports;
  std::string load_balancer_id;
  std::string load_balancer_name;
  std::string load_balancer_status;
  std::string region_id;
  std::string address;
  std::string is_public_address;
};
} // end namespace
#endif
