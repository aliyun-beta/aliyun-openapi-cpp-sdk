#ifndef ALI_YUNDUN_DELETE_BACK_DOOR_FILE_TYPESH
#define ALI_YUNDUN_DELETE_BACK_DOOR_FILE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunDeleteBackDoorFileRequestType {
  std::string jst_owner_id;
  std::string instance_id;
  std::string path;
};
struct YundunDeleteBackDoorFileResponseType {
};
} // end namespace
#endif
