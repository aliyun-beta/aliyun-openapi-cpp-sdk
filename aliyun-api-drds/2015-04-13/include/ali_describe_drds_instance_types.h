#ifndef ALI_DESCRIBE_DRDS_INSTANCE_TYPESH
#define ALI_DESCRIBE_DRDS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDrdsInstanceRequestType {
  std::string drds_instance_id;
};
struct DescribeDrdsInstanceVipType {
  std::string ip;
  std::string port;
  std::string type;
};
struct DescribeDrdsInstanceDataType {
  std::vector<DescribeDrdsInstanceVipType> vips;
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
struct DescribeDrdsInstanceResponseType {
  DescribeDrdsInstanceDataType data;
  bool success;
};
} // end namespace
#endif
