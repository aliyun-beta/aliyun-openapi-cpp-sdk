#ifndef ALI_RKVSTORE_CREATE_INSTANCE_TYPESH
#define ALI_RKVSTORE_CREATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreCreateInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_name;
  std::string password;
  std::string capacity;
  std::string zone_id;
  std::string config;
  std::string charge_type;
  std::string period;
  std::string token;
};
struct RkvstoreCreateInstanceResponseType {
  std::string instance_id;
  std::string instance_name;
  std::string connection_domain;
  int port;
  std::string user_name;
  std::string instance_status;
  std::string region_id;
  long capacity;
  long qp_s;
  long bandwidth;
  long connections;
  std::string zone_id;
  std::string config;
  std::string charge_type;
  std::string end_time;
};
} // end namespace
#endif
