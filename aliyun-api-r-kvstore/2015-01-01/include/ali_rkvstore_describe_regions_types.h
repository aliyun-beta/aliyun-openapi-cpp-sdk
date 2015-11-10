#ifndef ALI_RKVSTORE_DESCRIBE_REGIONS_TYPESH
#define ALI_RKVSTORE_DESCRIBE_REGIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeRegionsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct RkvstoreDescribeRegionsKVStoreRegionType {
  std::string region_id;
  std::string zone_ids;
  std::string local_name;
};
struct RkvstoreDescribeRegionsResponseType {
  std::vector<RkvstoreDescribeRegionsKVStoreRegionType> region_ids;
};
} // end namespace
#endif
