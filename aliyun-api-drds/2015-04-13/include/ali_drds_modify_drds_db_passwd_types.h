#ifndef ALI_DRDS_MODIFY_DRDS_DB_PASSWD_TYPESH
#define ALI_DRDS_MODIFY_DRDS_DB_PASSWD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsModifyDrdsDBPasswdRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string new_passwd;
};
struct DrdsModifyDrdsDBPasswdResponseType {
  bool success;
};
} // end namespace
#endif
