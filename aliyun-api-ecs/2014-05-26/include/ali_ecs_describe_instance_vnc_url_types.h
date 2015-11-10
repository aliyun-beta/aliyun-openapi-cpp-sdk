#ifndef ALI_ECS_DESCRIBE_INSTANCE_VNC_URL_TYPESH
#define ALI_ECS_DESCRIBE_INSTANCE_VNC_URL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeInstanceVncUrlRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string owner_account;
};
struct EcsDescribeInstanceVncUrlResponseType {
  std::string vnc_url;
};
} // end namespace
#endif
