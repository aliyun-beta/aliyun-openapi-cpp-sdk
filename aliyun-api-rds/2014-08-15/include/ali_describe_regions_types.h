#ifndef ALI_DESCRIBE_REGIONS_TYPESH
#define ALI_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string owner_account;
};
struct DescribeRegionsRDSRegionType {
  std::string region_id;
  std::string zone_id;
};
struct DescribeRegionsResponseType {
  std::vector<DescribeRegionsRDSRegionType> regions;
};
} // end namespace
#endif
