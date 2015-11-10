#ifndef ALI_ECS_CREATE_IMAGE_TYPESH
#define ALI_ECS_CREATE_IMAGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCreateImageRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string snapshot_id;
  std::string image_name;
  std::string image_version;
  std::string description;
  std::string client_token;
  std::string owner_account;
};
struct EcsCreateImageResponseType {
  std::string image_id;
};
} // end namespace
#endif
