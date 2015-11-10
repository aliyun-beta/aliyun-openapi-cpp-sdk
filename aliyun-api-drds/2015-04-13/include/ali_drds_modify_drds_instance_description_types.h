#ifndef ALI_DRDS_MODIFY_DRDS_INSTANCE_DESCRIPTION_TYPESH
#define ALI_DRDS_MODIFY_DRDS_INSTANCE_DESCRIPTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsModifyDrdsInstanceDescriptionRequestType {
  std::string drds_instance_id;
  std::string description;
};
struct DrdsModifyDrdsInstanceDescriptionResponseType {
  bool success;
};
} // end namespace
#endif
