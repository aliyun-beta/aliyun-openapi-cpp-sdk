#ifndef ALI_ONS_ONS_EMPOWER_LIST_TYPESH
#define ALI_ONS_ONS_EMPOWER_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsEmpowerListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string empower_user;
  std::string topic;
};
struct OnsOnsEmpowerListAuthOwnerInfoDoType {
  long id;
  std::string topic;
  long owner;
  int relation;
  std::string relation_name;
  long create_time;
  long update_time;
};
struct OnsOnsEmpowerListResponseType {
  std::vector<OnsOnsEmpowerListAuthOwnerInfoDoType> data;
  std::string help_url;
};
} // end namespace
#endif
