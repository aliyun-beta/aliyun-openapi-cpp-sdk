#ifndef ALI_ONS_EMPOWER_DELETE_TYPESH
#define ALI_ONS_EMPOWER_DELETE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsEmpowerDeleteRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string empower_user;
  std::string topic;
};
struct OnsEmpowerDeleteResponseType {
  std::string help_url;
};
} // end namespace
#endif
