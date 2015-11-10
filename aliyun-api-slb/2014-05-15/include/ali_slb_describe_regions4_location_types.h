#ifndef ALI_SLB_DESCRIBE_REGIONS4_LOCATION_TYPESH
#define ALI_SLB_DESCRIBE_REGIONS4_LOCATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeRegions4LocationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct SlbDescribeRegions4LocationRegionType {
  std::string region_id;
  std::string local_name;
};
struct SlbDescribeRegions4LocationResponseType {
  std::vector<SlbDescribeRegions4LocationRegionType> regions;
};
} // end namespace
#endif
