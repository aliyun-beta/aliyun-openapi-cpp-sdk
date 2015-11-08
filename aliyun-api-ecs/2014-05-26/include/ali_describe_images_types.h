#ifndef ALI_DESCRIBE_IMAGES_TYPESH
#define ALI_DESCRIBE_IMAGES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeImagesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string status;
  std::string image_id;
  std::string show_expired;
  std::string snapshot_id;
  std::string image_name;
  std::string image_owner_alias;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
  std::string filter1_key;
  std::string filter2_key;
  std::string filter1_value;
  std::string filter2_value;
  std::string usage;
  std::string tag1_key;
  std::string tag2_key;
  std::string tag3_key;
  std::string tag4_key;
  std::string tag5_key;
  std::string tag1_value;
  std::string tag2_value;
  std::string tag3_value;
  std::string tag4_value;
  std::string tag5_value;
};
struct DescribeImagesDiskDeviceMappingType {
  std::string snapshot_id;
  std::string size;
  std::string device;
};
struct DescribeImagesTagType {
  std::string tag_key;
  std::string tag_value;
};
struct DescribeImagesImageType {
  std::vector<DescribeImagesDiskDeviceMappingType> disk_device_mappings;
  std::vector<DescribeImagesTagType> tags;
  std::string progress;
  std::string image_id;
  std::string image_name;
  std::string image_version;
  std::string description;
  int size;
  std::string image_owner_alias;
  std::string os_name;
  std::string architecture;
  std::string status;
  std::string product_code;
  bool is_subscribed;
  std::string creation_time;
  std::string is_self_shared;
  std::string os_type;
  std::string platform;
  std::string usage;
  bool is_copied;
};
struct DescribeImagesResponseType {
  std::vector<DescribeImagesImageType> images;
  std::string region_id;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
