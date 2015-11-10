#ifndef ALI_SLB_DESCRIBE_LOCATIONS_TYPESH
#define ALI_SLB_DESCRIBE_LOCATIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeLocationsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string namespace_;
  std::string namespace_uid;
};
struct SlbDescribeLocationsResponseType {
};
} // end namespace
#endif
