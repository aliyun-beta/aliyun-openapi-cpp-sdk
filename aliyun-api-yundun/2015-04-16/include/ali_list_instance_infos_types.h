#ifndef ALI_LIST_INSTANCE_INFOS_TYPESH
#define ALI_LIST_INSTANCE_INFOS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListInstanceInfosRequestType {
  std::string jst_owner_id;
  std::string page_number;
  std::string page_size;
  std::string region;
  std::string event_type;
  std::string instance_name;
  std::string instance_type;
  std::string instance_ids;
};
struct ListInstanceInfosInstanceInfoType {
  std::string region;
  std::string region_name;
  std::string region_en_name;
  std::string instance_name;
  std::string instance_id;
  std::string ip;
  std::string internet_ip;
  std::string intranet_ip;
  int ddos;
  int host_event;
  int secure_check;
  int aegis_status;
  int waf;
  bool is_lock;
  std::string lock_type;
  int un_lock_times;
  std::string trigger_time;
};
struct ListInstanceInfosResponseType {
  std::vector<ListInstanceInfosInstanceInfoType> infos_list;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
