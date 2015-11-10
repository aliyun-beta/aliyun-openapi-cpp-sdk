#ifndef ALI_DRDS_DESCRIBE_DRDS_INSTANCES_TYPESH
#define ALI_DRDS_DESCRIBE_DRDS_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeDrdsInstancesRequestType {
  std::string type;
};
struct DrdsDescribeDrdsInstancesVipType {
  std::string ip;
  std::string port;
  std::string type;
};
struct DrdsDescribeDrdsInstancesInstanceType {
  std::vector<DrdsDescribeDrdsInstancesVipType> vips;
  std::string drds_instance_id;
  std::string type;
  std::string region_id;
  std::string zone_id;
  std::string description;
  std::string network_type;
  std::string status;
  long create_time;
  long version;
};
struct DrdsDescribeDrdsInstancesResponseType {
  std::vector<DrdsDescribeDrdsInstancesInstanceType> data;
  bool success;
};
} // end namespace
#endif
