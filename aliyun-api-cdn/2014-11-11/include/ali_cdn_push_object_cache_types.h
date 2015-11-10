#ifndef ALI_CDN_PUSH_OBJECT_CACHE_TYPESH
#define ALI_CDN_PUSH_OBJECT_CACHE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnPushObjectCacheRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string object_path;
};
struct CdnPushObjectCacheResponseType {
  std::string push_task_id;
};
} // end namespace
#endif
