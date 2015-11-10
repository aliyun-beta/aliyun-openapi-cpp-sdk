#ifndef ALI_SLB_CREATE_LOAD_BALANCER_TYPESH
#define ALI_SLB_CREATE_LOAD_BALANCER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbCreateLoadBalancerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string is_public_address;
  std::string address;
  std::string client_token;
  std::string load_balancer_name;
  std::string load_balancer_mode;
  std::string owner_account;
};
struct SlbCreateLoadBalancerResponseType {
  std::string address;
  std::string load_balancer_id;
  std::string load_balancer_name;
};
} // end namespace
#endif
