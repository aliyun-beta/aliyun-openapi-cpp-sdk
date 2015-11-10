#ifndef ALI_ECS_DESCRIBE_HA_VIPS_TYPESH
#define ALI_ECS_DESCRIBE_HA_VIPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeHaVipsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string page_number;
  std::string page_size;
  std::string filter;
};
struct EcsDescribeHaVipsHaVipType {
  std::vector<std::string> associated_instances;
  std::vector<std::string> associated_eip_addresses;
  std::string ha_vip_id;
  std::string region_id;
  std::string vpc_id;
  std::string vswitch_id;
  std::string ip_address;
  std::string status;
  std::string master_instance_id;
  std::string description;
  std::string create_time;
};
struct EcsDescribeHaVipsResponseType {
  std::vector<EcsDescribeHaVipsHaVipType> ha_vips;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
