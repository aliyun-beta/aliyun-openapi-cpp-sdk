#ifndef ALI_DESCRIBE_ZONES_TYPESH
#define ALI_DESCRIBE_ZONES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeZonesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string zone_id;
};
struct DescribeZonesOcsZoneType {
  std::string zone_id;
  std::string name;
  std::string description;
};
struct DescribeZonesResponseType {
  std::vector<DescribeZonesOcsZoneType> zones;
};
} // end namespace
#endif
