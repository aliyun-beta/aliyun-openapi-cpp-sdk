#ifndef ALI_DESCRIBE_LOCATIONS_TYPESH
#define ALI_DESCRIBE_LOCATIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeLocationsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string namespace_;
  std::string namespace_uid;
};
struct DescribeLocationsResponseType {
};
} // end namespace
#endif
