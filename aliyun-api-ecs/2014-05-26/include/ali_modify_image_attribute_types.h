#ifndef ALI_MODIFY_IMAGE_ATTRIBUTE_TYPESH
#define ALI_MODIFY_IMAGE_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyImageAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string image_name;
  std::string description;
  std::string owner_account;
};
struct ModifyImageAttributeResponseType {
};
} // end namespace
#endif
