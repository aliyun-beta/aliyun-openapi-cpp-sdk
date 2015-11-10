#ifndef ALI_DRDS_DESCRIBE_DRDS_INSTANCE_TYPESH
#define ALI_DRDS_DESCRIBE_DRDS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeDrdsInstanceRequestType {
  std::string drds_instance_id;
};
struct DrdsDescribeDrdsInstanceVipType {
  std::string ip;
  std::string port;
  std::string type;
};
struct DrdsDescribeDrdsInstanceDataType {
  std::vector<DrdsDescribeDrdsInstanceVipType> vips;
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
struct DrdsDescribeDrdsInstanceResponseType {
  DrdsDescribeDrdsInstanceDataType data;
  bool success;
};
} // end namespace
#endif
