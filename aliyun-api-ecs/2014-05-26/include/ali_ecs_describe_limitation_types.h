#ifndef ALI_ECS_DESCRIBE_LIMITATION_TYPESH
#define ALI_ECS_DESCRIBE_LIMITATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeLimitationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string limitation;
};
struct EcsDescribeLimitationResponseType {
  std::string limitation;
  std::string value;
};
} // end namespace
#endif
