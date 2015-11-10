#ifndef ALI_RKVSTORE_DESCRIBE_INSTANCE_COUNT_TYPESH
#define ALI_RKVSTORE_DESCRIBE_INSTANCE_COUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeInstanceCountRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct RkvstoreDescribeInstanceCountResponseType {
  int instances_count;
};
} // end namespace
#endif
