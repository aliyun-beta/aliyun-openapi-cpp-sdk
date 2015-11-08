#ifndef ALI_DELETE_BACK_DOOR_FILE_TYPESH
#define ALI_DELETE_BACK_DOOR_FILE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteBackDoorFileRequestType {
  std::string jst_owner_id;
  std::string instance_id;
  std::string path;
};
struct DeleteBackDoorFileResponseType {
};
} // end namespace
#endif
