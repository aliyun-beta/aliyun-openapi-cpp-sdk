#ifndef ALI_MODIFY_DB_INSTANCE_DESCRIPTION_TYPESH
#define ALI_MODIFY_DB_INSTANCE_DESCRIPTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyDBInstanceDescriptionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string db_instance_description;
  std::string owner_account;
};
struct ModifyDBInstanceDescriptionResponseType {
};
} // end namespace
#endif
