#ifndef ALI_DESCRIBE_LOAD_BALANCER_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_LOAD_BALANCER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLoadBalancerAttributeRequestType {
  std::string load_balancer_id;
  std::string host_id;
  std::string owner_account;
};
struct DescribeLoadBalancerAttributeBackendServerType {
  std::string server_id;
  int weight;
};
struct DescribeLoadBalancerAttributeResponseType {
  std::vector<DescribeLoadBalancerAttributeBackendServerType> backend_servers;
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
