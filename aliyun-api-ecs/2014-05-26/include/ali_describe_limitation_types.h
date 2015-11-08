#ifndef ALI_DESCRIBE_LIMITATION_TYPESH
#define ALI_DESCRIBE_LIMITATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLimitationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string limitation;
};
struct DescribeLimitationResponseType {
  std::string limitation;
  std::string value;
};
} // end namespace
#endif
