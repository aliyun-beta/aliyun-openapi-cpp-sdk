#ifndef ALI_DRDS_REMOVE_DRDS_INSTANCE_TYPESH
#define ALI_DRDS_REMOVE_DRDS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsRemoveDrdsInstanceRequestType {
  std::string drds_instance_id;
};
struct DrdsRemoveDrdsInstanceResponseType {
  bool success;
};
} // end namespace
#endif
