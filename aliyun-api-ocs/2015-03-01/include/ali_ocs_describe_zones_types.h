#ifndef ALI_OCS_DESCRIBE_ZONES_TYPESH
#define ALI_OCS_DESCRIBE_ZONES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDescribeZonesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string zone_id;
};
struct OcsDescribeZonesOcsZoneType {
  std::string zone_id;
  std::string name;
  std::string description;
};
struct OcsDescribeZonesResponseType {
  std::vector<OcsDescribeZonesOcsZoneType> zones;
};
} // end namespace
#endif
