#ifndef ALI_MODIFY_DRDS_DB_PASSWD_TYPESH
#define ALI_MODIFY_DRDS_DB_PASSWD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyDrdsDBPasswdRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string new_passwd;
};
struct ModifyDrdsDBPasswdResponseType {
  bool success;
};
} // end namespace
#endif
