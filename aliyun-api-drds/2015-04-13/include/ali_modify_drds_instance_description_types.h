#ifndef ALI_MODIFY_DRDS_INSTANCE_DESCRIPTION_TYPESH
#define ALI_MODIFY_DRDS_INSTANCE_DESCRIPTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyDrdsInstanceDescriptionRequestType {
  std::string drds_instance_id;
  std::string description;
};
struct ModifyDrdsInstanceDescriptionResponseType {
  bool success;
};
} // end namespace
#endif
