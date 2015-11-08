#ifndef ALI_ONS_MESSAGE_GET_BY_KEY_TYPESH
#define ALI_ONS_MESSAGE_GET_BY_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsMessageGetByKeyRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string key;
};
struct OnsMessageGetByKeyMessagePropertyType {
  std::string name;
  std::string value;
};
struct OnsMessageGetByKeyOnsRestMessageDoType {
  std::vector<OnsMessageGetByKeyMessagePropertyType> property_list;
  std::string topic;
  int flag;
  std::string body;
  int queue_id;
  int store_size;
  long queue_offset;
  int sys_flag;
  long born_timestamp;
  std::string born_host;
  long store_timestamp;
  std::string store_host;
  std::string msg_id;
  long commit_log_offset;
  int body_cr_c;
  int reconsume_times;
  long prepared_transaction_offset;
};
struct OnsMessageGetByKeyResponseType {
  std::vector<OnsMessageGetByKeyOnsRestMessageDoType> data;
  std::string help_url;
};
} // end namespace
#endif
