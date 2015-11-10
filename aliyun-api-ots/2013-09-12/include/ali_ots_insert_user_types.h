#ifndef ALI_OTS_INSERT_USER_TYPESH
#define ALI_OTS_INSERT_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsInsertUserRequestType {
  std::string instance_quota;
  std::string description;
};
struct OtsInsertUserResponseType {
};
} // end namespace
#endif
