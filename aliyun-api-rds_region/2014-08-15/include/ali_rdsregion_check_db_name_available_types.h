#ifndef ALI_RDSREGION_CHECK_DB_NAME_AVAILABLE_TYPESH
#define ALI_RDSREGION_CHECK_DB_NAME_AVAILABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCheckDBNameAvailableRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string db_name;
  std::string owner_account;
};
struct RdsRegionCheckDBNameAvailableResponseType {
};
} // end namespace
#endif
