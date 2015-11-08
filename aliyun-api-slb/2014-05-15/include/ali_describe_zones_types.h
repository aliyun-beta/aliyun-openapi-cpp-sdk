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
};
struct DescribeZonesSlaveZoneType {
  std::string zone_id;
  std::string local_name;
};
struct DescribeZonesZoneType {
  std::vector<DescribeZonesSlaveZoneType> slave_zones;
  std::string zone_id;
  std::string local_name;
};
struct DescribeZonesResponseType {
  std::vector<DescribeZonesZoneType> zones;
};
} // end namespace
#endif
