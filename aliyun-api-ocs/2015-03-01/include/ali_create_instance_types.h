#ifndef ALI_CREATE_INSTANCE_TYPESH
#define ALI_CREATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string password;
  std::string capacity;
  std::string instance_name;
  std::string zone_id;
  std::string network_type;
  std::string vpc_id;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string token;
};
struct CreateInstanceResponseType {
  std::string instance_id;
  std::string instance_name;
  std::string connection_domain;
  int port;
  std::string user_name;
  std::string instance_status;
  std::string region_id;
  std::string zone_id;
  long capacity;
  long qp_s;
  long bandwidth;
  long connections;
  std::string network_type;
  std::string private_ip_address;
};
} // end namespace
#endif
