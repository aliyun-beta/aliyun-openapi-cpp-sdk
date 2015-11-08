#ifndef ALI_UPDATE_USER_TYPESH
#define ALI_UPDATE_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateUserRequestType {
  std::string instance_quota;
  std::string description;
};
struct UpdateUserResponseType {
};
} // end namespace
#endif
