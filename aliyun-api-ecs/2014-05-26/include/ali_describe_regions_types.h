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
  std::string owner_account;
};
struct DescribeRegionsRegionType {
  std::string region_id;
  std::string local_name;
};
struct DescribeRegionsResponseType {
  std::vector<DescribeRegionsRegionType> regions;
};
} // end namespace
#endif
