#ifndef ALI_DESCRIBE_INSTANCE_VNC_PASSWD_TYPESH
#define ALI_DESCRIBE_INSTANCE_VNC_PASSWD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeInstanceVncPasswdRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string owner_account;
};
struct DescribeInstanceVncPasswdResponseType {
  std::string vnc_passwd;
};
} // end namespace
#endif
