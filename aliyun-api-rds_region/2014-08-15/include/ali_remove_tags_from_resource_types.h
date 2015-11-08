#ifndef ALI_REMOVE_TAGS_FROM_RESOURCE_TYPESH
#define ALI_REMOVE_TAGS_FROM_RESOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RemoveTagsFromResourceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string db_instance_id;
  std::string tag1key;
  std::string tag2key;
  std::string tag3key;
  std::string tag4key;
  std::string tag5key;
  std::string tag1value;
  std::string tag2value;
  std::string tag3value;
  std::string tag4value;
  std::string tag5value;
  std::string owner_account;
};
struct RemoveTagsFromResourceResponseType {
};
} // end namespace
#endif
