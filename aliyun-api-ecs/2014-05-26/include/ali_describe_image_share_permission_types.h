#ifndef ALI_DESCRIBE_IMAGE_SHARE_PERMISSION_TYPESH
#define ALI_DESCRIBE_IMAGE_SHARE_PERMISSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeImageSharePermissionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
};
struct DescribeImageSharePermissionShareGroupType {
  std::string group;
};
struct DescribeImageSharePermissionAccountType {
  std::string aliyun_id;
};
struct DescribeImageSharePermissionResponseType {
  std::vector<DescribeImageSharePermissionShareGroupType> share_groups;
  std::vector<DescribeImageSharePermissionAccountType> accounts;
  std::string region_id;
  int total_count;
  int page_number;
  int page_size;
  std::string image_id;
};
} // end namespace
#endif
