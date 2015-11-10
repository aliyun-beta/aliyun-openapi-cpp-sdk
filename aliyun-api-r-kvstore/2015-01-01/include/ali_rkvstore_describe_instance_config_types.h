#ifndef ALI_RKVSTORE_DESCRIBE_INSTANCE_CONFIG_TYPESH
#define ALI_RKVSTORE_DESCRIBE_INSTANCE_CONFIG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeInstanceConfigRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
};
struct RkvstoreDescribeInstanceConfigResponseType {
  std::string config;
};
} // end namespace
#endif
