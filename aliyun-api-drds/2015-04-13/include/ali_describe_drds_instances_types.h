#ifndef ALI_DESCRIBE_DRDS_INSTANCES_TYPESH
#define ALI_DESCRIBE_DRDS_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDrdsInstancesRequestType {
  std::string type;
};
struct DescribeDrdsInstancesVipType {
  std::string ip;
  std::string port;
  std::string type;
};
struct DescribeDrdsInstancesInstanceType {
  std::vector<DescribeDrdsInstancesVipType> vips;
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
struct DescribeDrdsInstancesResponseType {
  std::vector<DescribeDrdsInstancesInstanceType> data;
  bool success;
};
} // end namespace
#endif
