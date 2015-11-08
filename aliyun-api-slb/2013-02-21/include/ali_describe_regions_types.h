#ifndef ALI_DESCRIBE_REGIONS_TYPESH
#define ALI_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeRegionsRequestType {
  std::string host_id;
  std::string owner_account;
};
struct DescribeRegionsRegionType {
  std::string region_id;
};
struct DescribeRegionsResponseType {
  std::vector<DescribeRegionsRegionType> regions;
};
} // end namespace
#endif
