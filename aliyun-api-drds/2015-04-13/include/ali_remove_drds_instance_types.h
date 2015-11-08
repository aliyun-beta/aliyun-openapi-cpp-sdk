#ifndef ALI_REMOVE_DRDS_INSTANCE_TYPESH
#define ALI_REMOVE_DRDS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RemoveDrdsInstanceRequestType {
  std::string drds_instance_id;
};
struct RemoveDrdsInstanceResponseType {
  bool success;
};
} // end namespace
#endif
