#ifndef ALI_SLB_DESCRIBE_REGIONS_TYPESH
#define ALI_SLB_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeRegionsRequestType {
  std::string host_id;
  std::string owner_account;
};
struct SlbDescribeRegionsRegionType {
  std::string region_id;
};
struct SlbDescribeRegionsResponseType {
  std::vector<SlbDescribeRegionsRegionType> regions;
};
} // end namespace
#endif
