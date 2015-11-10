#ifndef ALI_ECS_DESCRIBE_INSTANCE_TYPES_TYPESH
#define ALI_ECS_DESCRIBE_INSTANCE_TYPES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeInstanceTypesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct EcsDescribeInstanceTypesInstanceTypeType {
  std::string instance_type_id;
  int cpu_core_count;
  float memory_size;
};
struct EcsDescribeInstanceTypesResponseType {
  std::vector<EcsDescribeInstanceTypesInstanceTypeType> instance_types;
};
} // end namespace
#endif
