#ifndef ALI_DRDS_CREATE_DRDS_INSTANCE_TYPESH
#define ALI_DRDS_CREATE_DRDS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsCreateDrdsInstanceRequestType {
  std::string description;
  std::string zone_id;
  std::string type;
  std::string quantity;
  std::string specification;
  std::string pay_type;
  std::string vpc_id;
  std::string vswitch_id;
};
struct DrdsCreateDrdsInstanceDataType {
  std::vector<std::string> drds_instance_id_list;
  long order_id;
};
struct DrdsCreateDrdsInstanceResponseType {
  DrdsCreateDrdsInstanceDataType data;
  bool success;
};
} // end namespace
#endif
