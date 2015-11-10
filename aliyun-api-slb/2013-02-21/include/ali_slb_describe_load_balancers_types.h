#ifndef ALI_SLB_DESCRIBE_LOAD_BALANCERS_TYPESH
#define ALI_SLB_DESCRIBE_LOAD_BALANCERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeLoadBalancersRequestType {
  std::string server_id;
  std::string load_balancer_id;
  std::string host_id;
  std::string owner_account;
};
struct SlbDescribeLoadBalancersLoadBalancerType {
  std::string load_balancer_id;
  std::string load_balancer_name;
  std::string load_balancer_status;
};
struct SlbDescribeLoadBalancersResponseType {
  std::vector<SlbDescribeLoadBalancersLoadBalancerType> load_balancers;
};
} // end namespace
#endif
