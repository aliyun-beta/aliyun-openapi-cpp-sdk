#ifndef ALI_ECS_CREATE_INSTANCE_TYPESH
#define ALI_ECS_CREATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCreateInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string instance_type;
  std::string security_group_id;
  std::string instance_name;
  std::string internet_charge_type;
  std::string internet_max_bandwidth_in;
  std::string internet_max_bandwidth_out;
  std::string host_name;
  std::string password;
  std::string zone_id;
  std::string cluster_id;
  std::string client_token;
  std::string vlan_id;
  std::string inner_ip_address;
  std::string system_disk_category;
  std::string system_disk_disk_name;
  std::string system_disk_description;
  std::string data_disk1_size;
  std::string data_disk1_category;
  std::string data_disk1_snapshot_id;
  std::string data_disk1_disk_name;
  std::string data_disk1_description;
  std::string data_disk1_device;
  std::string data_disk1_delete_with_instance;
  std::string data_disk2_size;
  std::string data_disk2_category;
  std::string data_disk2_snapshot_id;
  std::string data_disk2_disk_name;
  std::string data_disk2_description;
  std::string data_disk2_device;
  std::string data_disk2_delete_with_instance;
  std::string data_disk3_size;
  std::string data_disk3_category;
  std::string data_disk3_snapshot_id;
  std::string data_disk3_disk_name;
  std::string data_disk3_description;
  std::string data_disk3_device;
  std::string data_disk3_delete_with_instance;
  std::string data_disk4_size;
  std::string data_disk4_category;
  std::string data_disk4_snapshot_id;
  std::string data_disk4_disk_name;
  std::string data_disk4_description;
  std::string data_disk4_device;
  std::string data_disk4_delete_with_instance;
  std::string node_controller_id;
  std::string description;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string io_optimized;
  std::string owner_account;
  std::string use_additional_service;
  std::string instance_charge_type;
  std::string period;
};
struct EcsCreateInstanceResponseType {
  std::string instance_id;
};
} // end namespace
#endif
