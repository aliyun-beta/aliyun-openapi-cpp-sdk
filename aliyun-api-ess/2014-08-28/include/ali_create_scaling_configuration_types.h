#ifndef ALI_CREATE_SCALING_CONFIGURATION_TYPESH
#define ALI_CREATE_SCALING_CONFIGURATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateScalingConfigurationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_id;
  std::string image_id;
  std::string instance_type;
  std::string security_group_id;
  std::string internet_charge_type;
  std::string internet_max_bandwidth_in;
  std::string internet_max_bandwidth_out;
  std::string system_disk_category;
  std::string scaling_configuration_name;
  std::string data_disk1_size;
  std::string data_disk2_size;
  std::string data_disk3_size;
  std::string data_disk4_size;
  std::string data_disk1_category;
  std::string data_disk2_category;
  std::string data_disk3_category;
  std::string data_disk4_category;
  std::string data_disk1_snapshot_id;
  std::string data_disk2_snapshot_id;
  std::string data_disk3_snapshot_id;
  std::string data_disk4_snapshot_id;
  std::string data_disk1_device;
  std::string data_disk2_device;
  std::string data_disk3_device;
  std::string data_disk4_device;
  std::string data_disk1_delete_with_instance;
  std::string data_disk2_delete_with_instance;
  std::string data_disk3_delete_with_instance;
  std::string data_disk4_delete_with_instance;
  std::string owner_account;
};
struct CreateScalingConfigurationResponseType {
  std::string scaling_configuration_id;
};
} // end namespace
#endif
