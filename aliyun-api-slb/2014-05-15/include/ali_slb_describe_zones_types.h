#ifndef ALI_SLB_DESCRIBE_ZONES_TYPESH
#define ALI_SLB_DESCRIBE_ZONES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeZonesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct SlbDescribeZonesSlaveZoneType {
  std::string zone_id;
  std::string local_name;
};
struct SlbDescribeZonesZoneType {
  std::vector<SlbDescribeZonesSlaveZoneType> slave_zones;
  std::string zone_id;
  std::string local_name;
};
struct SlbDescribeZonesResponseType {
  std::vector<SlbDescribeZonesZoneType> zones;
};
} // end namespace
#endif
