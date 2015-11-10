#ifndef ALI_RDSREGION_START_DB_INSTANCE_DIAGNOSE_TYPESH
#define ALI_RDSREGION_START_DB_INSTANCE_DIAGNOSE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionStartDBInstanceDiagnoseRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsRegionStartDBInstanceDiagnoseResponseType {
  std::string db_instance_name;
  std::string db_instance_id;
};
} // end namespace
#endif
