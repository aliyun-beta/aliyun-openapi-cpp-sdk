#ifndef ALI_RDS_RELEASE_INSTANCE_PUBLIC_CONNECTION_TYPESH
#define ALI_RDS_RELEASE_INSTANCE_PUBLIC_CONNECTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsReleaseInstancePublicConnectionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string current_connection_string;
  std::string owner_account;
};
struct RdsReleaseInstancePublicConnectionResponseType {
};
} // end namespace
#endif
