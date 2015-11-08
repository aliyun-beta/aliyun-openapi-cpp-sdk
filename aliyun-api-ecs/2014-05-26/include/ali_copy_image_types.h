#ifndef ALI_COPY_IMAGE_TYPESH
#define ALI_COPY_IMAGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CopyImageRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string destination_image_name;
  std::string destination_description;
  std::string image_id;
  std::string destination_region_id;
  std::string owner_account;
};
struct CopyImageResponseType {
  std::string image_id;
};
} // end namespace
#endif
