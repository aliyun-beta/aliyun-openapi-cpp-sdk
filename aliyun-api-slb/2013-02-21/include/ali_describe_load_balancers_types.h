#ifndef ALI_DESCRIBE_LOAD_BALANCERS_TYPESH
#define ALI_DESCRIBE_LOAD_BALANCERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLoadBalancersRequestType {
  std::string server_id;
  std::string load_balancer_id;
  std::string host_id;
  std::string owner_account;
};
struct DescribeLoadBalancersLoadBalancerType {
  std::string load_balancer_id;
  std::string load_balancer_name;
  std::string load_balancer_status;
};
struct DescribeLoadBalancersResponseType {
  std::vector<DescribeLoadBalancersLoadBalancerType> load_balancers;
};
} // end namespace
#endif
