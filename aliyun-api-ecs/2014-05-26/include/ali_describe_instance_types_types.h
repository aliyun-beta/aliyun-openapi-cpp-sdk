#ifndef ALI_DESCRIBE_INSTANCE_TYPES_TYPESH
#define ALI_DESCRIBE_INSTANCE_TYPES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeInstanceTypesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct DescribeInstanceTypesInstanceTypeType {
  std::string instance_type_id;
  int cpu_core_count;
  float memory_size;
};
struct DescribeInstanceTypesResponseType {
  std::vector<DescribeInstanceTypesInstanceTypeType> instance_types;
};
} // end namespace
#endif
