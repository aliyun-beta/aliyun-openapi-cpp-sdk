#ifndef ALI_CDN_REFRESH_OBJECT_CACHES_TYPESH
#define ALI_CDN_REFRESH_OBJECT_CACHES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnRefreshObjectCachesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string object_path;
  std::string object_type;
};
struct CdnRefreshObjectCachesResponseType {
  std::string refresh_task_id;
};
} // end namespace
#endif
