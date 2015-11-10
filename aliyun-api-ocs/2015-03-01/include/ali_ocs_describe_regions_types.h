#ifndef ALI_OCS_DESCRIBE_REGIONS_TYPESH
#define ALI_OCS_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct OcsDescribeRegionsOcsRegionType {
  std::string region_id;
  std::string zone_ids;
  std::string local_name;
};
struct OcsDescribeRegionsResponseType {
  std::vector<OcsDescribeRegionsOcsRegionType> region_ids;
};
} // end namespace
#endif
