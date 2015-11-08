#ifndef ALI_DESCRIBE_REGIONS4_LOCATION_TYPESH
#define ALI_DESCRIBE_REGIONS4_LOCATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeRegions4LocationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct DescribeRegions4LocationRegionType {
  std::string region_id;
  std::string local_name;
};
struct DescribeRegions4LocationResponseType {
  std::vector<DescribeRegions4LocationRegionType> regions;
};
} // end namespace
#endif
