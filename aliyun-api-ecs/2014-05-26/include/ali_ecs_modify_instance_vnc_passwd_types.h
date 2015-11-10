#ifndef ALI_ECS_MODIFY_INSTANCE_VNC_PASSWD_TYPESH
#define ALI_ECS_MODIFY_INSTANCE_VNC_PASSWD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyInstanceVncPasswdRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string vnc_password;
  std::string owner_account;
};
struct EcsModifyInstanceVncPasswdResponseType {
};
} // end namespace
#endif
