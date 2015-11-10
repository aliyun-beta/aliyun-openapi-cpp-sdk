#ifndef ALI_EMR_LIST_CONFIG_TYPE_TYPESH
#define ALI_EMR_LIST_CONFIG_TYPE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListConfigTypeRequestType {
};
struct EmrListConfigTypeSecurityGroupTypeType {
  std::string name;
  std::string state;
  std::string id;
};
struct EmrListConfigTypeInstanceTypeType {
  std::string classify;
  std::string state;
  std::string type;
  std::string cpu_core;
  std::string mem_size;
  bool has_cloud_disk;
  bool has_local_disk;
  bool has_local_ss_d;
  bool has_cloud_ss_d;
};
struct EmrListConfigTypeSubModuleType {
  std::string name;
  std::string required;
  std::string optional;
};
struct EmrListConfigTypeEmrVerTypeType {
  std::vector<EmrListConfigTypeSubModuleType> sub_modules;
  std::string name;
};
struct EmrListConfigTypeZoneTypeType {
  std::vector<std::string> available_resource_createion_list;
  std::vector<std::string> available_disk_categories_list;
  std::string name;
  std::string id;
};
struct EmrListConfigTypeResponseType {
  std::vector<EmrListConfigTypeSecurityGroupTypeType> security_group_types;
  std::vector<EmrListConfigTypeInstanceTypeType> instance_types;
  std::vector<EmrListConfigTypeEmrVerTypeType> emr_ver_types;
  std::vector<EmrListConfigTypeZoneTypeType> zone_types;
};
} // end namespace
#endif
