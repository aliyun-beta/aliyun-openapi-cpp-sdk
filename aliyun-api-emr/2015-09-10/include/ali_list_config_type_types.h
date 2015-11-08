#ifndef ALI_LIST_CONFIG_TYPE_TYPESH
#define ALI_LIST_CONFIG_TYPE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListConfigTypeRequestType {
};
struct ListConfigTypeSecurityGroupTypeType {
  std::string name;
  std::string state;
  std::string id;
};
struct ListConfigTypeInstanceTypeType {
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
struct ListConfigTypeSubModuleType {
  std::string name;
  std::string required;
  std::string optional;
};
struct ListConfigTypeEmrVerTypeType {
  std::vector<ListConfigTypeSubModuleType> sub_modules;
  std::string name;
};
struct ListConfigTypeZoneTypeType {
  std::vector<std::string> available_resource_createion_list;
  std::vector<std::string> available_disk_categories_list;
  std::string name;
  std::string id;
};
struct ListConfigTypeResponseType {
  std::vector<ListConfigTypeSecurityGroupTypeType> security_group_types;
  std::vector<ListConfigTypeInstanceTypeType> instance_types;
  std::vector<ListConfigTypeEmrVerTypeType> emr_ver_types;
  std::vector<ListConfigTypeZoneTypeType> zone_types;
};
} // end namespace
#endif
