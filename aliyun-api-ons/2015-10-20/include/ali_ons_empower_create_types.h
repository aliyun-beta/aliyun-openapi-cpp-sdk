#ifndef ALI_ONS_EMPOWER_CREATE_TYPESH
#define ALI_ONS_EMPOWER_CREATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsEmpowerCreateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string empower_user;
  std::string topic;
  std::string relation;
};
struct OnsEmpowerCreateResponseType {
  std::string help_url;
};
} // end namespace
#endif
