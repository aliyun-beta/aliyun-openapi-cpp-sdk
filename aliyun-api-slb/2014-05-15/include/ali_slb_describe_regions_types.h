#ifndef ALI_SLB_DESCRIBE_REGIONS_TYPESH
#define ALI_SLB_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct SlbDescribeRegionsRegionType {
  std::string region_id;
  std::string local_name;
};
struct SlbDescribeRegionsResponseType {
  std::vector<SlbDescribeRegionsRegionType> regions;
};
} // end namespace
#endif
