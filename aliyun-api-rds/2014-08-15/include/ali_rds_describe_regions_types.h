#ifndef ALI_RDS_DESCRIBE_REGIONS_TYPESH
#define ALI_RDS_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string owner_account;
};
struct RdsDescribeRegionsRDSRegionType {
  std::string region_id;
  std::string zone_id;
};
struct RdsDescribeRegionsResponseType {
  std::vector<RdsDescribeRegionsRDSRegionType> regions;
};
} // end namespace
#endif
