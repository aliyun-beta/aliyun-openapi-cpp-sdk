#ifndef ALI_DESCRIBE_SCALING_CONFIGURATIONS_TYPESH
#define ALI_DESCRIBE_SCALING_CONFIGURATIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeScalingConfigurationsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_number;
  std::string page_size;
  std::string scaling_group_id;
  std::string scaling_configuration_id1;
  std::string scaling_configuration_id2;
  std::string scaling_configuration_id3;
  std::string scaling_configuration_id4;
  std::string scaling_configuration_id5;
  std::string scaling_configuration_id6;
  std::string scaling_configuration_id7;
  std::string scaling_configuration_id8;
  std::string scaling_configuration_id9;
  std::string scaling_configuration_id10;
  std::string scaling_configuration_name1;
  std::string scaling_configuration_name2;
  std::string scaling_configuration_name3;
  std::string scaling_configuration_name4;
  std::string scaling_configuration_name5;
  std::string scaling_configuration_name6;
  std::string scaling_configuration_name7;
  std::string scaling_configuration_name8;
  std::string scaling_configuration_name9;
  std::string scaling_configuration_name10;
  std::string owner_account;
};
struct DescribeScalingConfigurationsDataDiskType {
  int size;
  std::string category;
  std::string snapshot_id;
  std::string device;
};
struct DescribeScalingConfigurationsScalingConfigurationType {
  std::vector<DescribeScalingConfigurationsDataDiskType> data_disks;
  std::string scaling_configuration_id;
  std::string scaling_configuration_name;
  std::string scaling_group_id;
  std::string image_id;
  std::string instance_type;
  std::string security_group_id;
  std::string internet_charge_type;
  int internet_max_bandwidth_in;
  int internet_max_bandwidth_out;
  std::string system_disk_category;
  std::string lifecycle_state;
  std::string creation_time;
};
struct DescribeScalingConfigurationsResponseType {
  std::vector<DescribeScalingConfigurationsScalingConfigurationType> scaling_configurations;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
