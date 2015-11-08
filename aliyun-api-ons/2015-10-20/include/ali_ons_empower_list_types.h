#ifndef ALI_ONS_EMPOWER_LIST_TYPESH
#define ALI_ONS_EMPOWER_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsEmpowerListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string empower_user;
  std::string topic;
};
struct OnsEmpowerListAuthOwnerInfoDoType {
  long id;
  std::string topic;
  long owner;
  int relation;
  std::string relation_name;
  long create_time;
  long update_time;
};
struct OnsEmpowerListResponseType {
  std::vector<OnsEmpowerListAuthOwnerInfoDoType> data;
  std::string help_url;
};
} // end namespace
#endif
