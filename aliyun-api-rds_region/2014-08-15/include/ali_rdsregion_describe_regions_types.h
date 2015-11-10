#ifndef ALI_RDSREGION_DESCRIBE_REGIONS_TYPESH
#define ALI_RDSREGION_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string owner_account;
};
struct RdsRegionDescribeRegionsRDSRegionType {
  std::string region_id;
  std::string zone_id;
};
struct RdsRegionDescribeRegionsResponseType {
  std::vector<RdsRegionDescribeRegionsRDSRegionType> regions;
};
} // end namespace
#endif
