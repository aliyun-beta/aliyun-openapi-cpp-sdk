#ifndef ALI_DELETE_IMAGE_TYPESH
#define ALI_DELETE_IMAGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteImageRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string owner_account;
};
struct DeleteImageResponseType {
};
} // end namespace
#endif
