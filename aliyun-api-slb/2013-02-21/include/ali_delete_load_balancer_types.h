#ifndef ALI_DELETE_LOAD_BALANCER_TYPESH
#define ALI_DELETE_LOAD_BALANCER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteLoadBalancerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string owner_account;
};
struct DeleteLoadBalancerResponseType {
};
} // end namespace
#endif
