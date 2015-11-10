#ifndef ALI_ECS_ADD_TAGS_TYPESH
#define ALI_ECS_ADD_TAGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsAddTagsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string resource_type;
  std::string resource_id;
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
struct EcsAddTagsResponseType {
};
} // end namespace
#endif
