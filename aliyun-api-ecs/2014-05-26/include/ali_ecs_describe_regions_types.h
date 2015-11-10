#ifndef ALI_ECS_DESCRIBE_REGIONS_TYPESH
#define ALI_ECS_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct EcsDescribeRegionsRegionType {
  std::string region_id;
  std::string local_name;
};
struct EcsDescribeRegionsResponseType {
  std::vector<EcsDescribeRegionsRegionType> regions;
};
} // end namespace
#endif
