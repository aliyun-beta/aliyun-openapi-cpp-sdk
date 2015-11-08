#ifndef ALI_DESCRIBE_LISTENER_ACCESS_CONTROL_ATTRIBUTE_TYPESH
#define ALI_DESCRIBE_LISTENER_ACCESS_CONTROL_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeListenerAccessControlAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct DescribeListenerAccessControlAttributeResponseType {
  std::string access_control_status;
  std::string source_items;
};
} // end namespace
#endif
