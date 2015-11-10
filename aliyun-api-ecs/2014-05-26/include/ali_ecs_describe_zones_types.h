#ifndef ALI_ECS_DESCRIBE_ZONES_TYPESH
#define ALI_ECS_DESCRIBE_ZONES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeZonesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct EcsDescribeZonesZoneType {
  std::vector<std::string> available_resource_creation;
  std::vector<std::string> available_disk_categories;
  std::string zone_id;
  std::string local_name;
};
struct EcsDescribeZonesResponseType {
  std::vector<EcsDescribeZonesZoneType> zones;
};
} // end namespace
#endif
