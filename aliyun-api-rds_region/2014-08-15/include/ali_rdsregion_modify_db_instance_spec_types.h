#ifndef ALI_RDSREGION_MODIFY_DB_INSTANCE_SPEC_TYPESH
#define ALI_RDSREGION_MODIFY_DB_INSTANCE_SPEC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionModifyDBInstanceSpecRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string db_instance_class;
  std::string db_instance_storage;
  std::string pay_type;
  std::string owner_account;
};
struct RdsRegionModifyDBInstanceSpecResponseType {
};
} // end namespace
#endif
