#ifndef ALI_MODIFY_INSTANCE_VNC_PASSWD_TYPESH
#define ALI_MODIFY_INSTANCE_VNC_PASSWD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyInstanceVncPasswdRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string vnc_password;
  std::string owner_account;
};
struct ModifyInstanceVncPasswdResponseType {
};
} // end namespace
#endif
