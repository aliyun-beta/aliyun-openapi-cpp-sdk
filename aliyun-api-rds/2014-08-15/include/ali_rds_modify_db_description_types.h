#ifndef ALI_RDS_MODIFY_DB_DESCRIPTION_TYPESH
#define ALI_RDS_MODIFY_DB_DESCRIPTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsModifyDBDescriptionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string db_description;
  std::string owner_account;
};
struct RdsModifyDBDescriptionResponseType {
};
} // end namespace
#endif
