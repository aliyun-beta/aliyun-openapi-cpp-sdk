#ifndef ALI_INSERT_USER_TYPESH
#define ALI_INSERT_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct InsertUserRequestType {
  std::string instance_quota;
  std::string description;
};
struct InsertUserResponseType {
};
} // end namespace
#endif
