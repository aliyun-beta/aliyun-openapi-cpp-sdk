#ifndef ALI_OTS_UPDATE_USER_TYPESH
#define ALI_OTS_UPDATE_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsUpdateUserRequestType {
  std::string instance_quota;
  std::string description;
};
struct OtsUpdateUserResponseType {
};
} // end namespace
#endif
