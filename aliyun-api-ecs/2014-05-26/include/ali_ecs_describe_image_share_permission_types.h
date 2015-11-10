#ifndef ALI_ECS_DESCRIBE_IMAGE_SHARE_PERMISSION_TYPESH
#define ALI_ECS_DESCRIBE_IMAGE_SHARE_PERMISSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeImageSharePermissionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
};
struct EcsDescribeImageSharePermissionShareGroupType {
  std::string group;
};
struct EcsDescribeImageSharePermissionAccountType {
  std::string aliyun_id;
};
struct EcsDescribeImageSharePermissionResponseType {
  std::vector<EcsDescribeImageSharePermissionShareGroupType> share_groups;
  std::vector<EcsDescribeImageSharePermissionAccountType> accounts;
  std::string region_id;
  int total_count;
  int page_number;
  int page_size;
  std::string image_id;
};
} // end namespace
#endif
