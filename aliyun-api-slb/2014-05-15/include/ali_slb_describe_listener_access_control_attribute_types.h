#ifndef ALI_SLB_DESCRIBE_LISTENER_ACCESS_CONTROL_ATTRIBUTE_TYPESH
#define ALI_SLB_DESCRIBE_LISTENER_ACCESS_CONTROL_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeListenerAccessControlAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct SlbDescribeListenerAccessControlAttributeResponseType {
  std::string access_control_status;
  std::string source_items;
};
} // end namespace
#endif
