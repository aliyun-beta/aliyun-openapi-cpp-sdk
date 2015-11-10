#ifndef ALI_ECS_DESCRIBE_TAG_KEYS_TYPESH
#define ALI_ECS_DESCRIBE_TAG_KEYS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeTagKeysRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_size;
  std::string page_number;
  std::string resource_type;
  std::string resource_id;
};
struct EcsDescribeTagKeysResponseType {
  std::vector<std::string> tag_keys;
  int page_size;
  int page_number;
  int total_count;
};
} // end namespace
#endif
