#ifndef ALI_RDSREGION_CHECK_ACCOUNT_NAME_AVAILABLE_TYPESH
#define ALI_RDSREGION_CHECK_ACCOUNT_NAME_AVAILABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCheckAccountNameAvailableRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string account_name;
  std::string owner_account;
};
struct RdsRegionCheckAccountNameAvailableResponseType {
};
} // end namespace
#endif
