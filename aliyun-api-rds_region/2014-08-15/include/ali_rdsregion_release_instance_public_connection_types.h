#ifndef ALI_RDSREGION_RELEASE_INSTANCE_PUBLIC_CONNECTION_TYPESH
#define ALI_RDSREGION_RELEASE_INSTANCE_PUBLIC_CONNECTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionReleaseInstancePublicConnectionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string current_connection_string;
  std::string owner_account;
};
struct RdsRegionReleaseInstancePublicConnectionResponseType {
};
} // end namespace
#endif
