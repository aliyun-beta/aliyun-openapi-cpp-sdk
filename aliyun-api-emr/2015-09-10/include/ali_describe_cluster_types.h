#ifndef ALI_DESCRIBE_CLUSTER_TYPESH
#define ALI_DESCRIBE_CLUSTER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeClusterRequestType {
  std::string cluster_id;
};
struct DescribeClusterClusterInfoType {
  long cluster_id;
  std::string biz_id;
  std::string cluster_name;
  std::string utc_start_time;
  std::string utc_stop_time;
  int time_out_enable;
  std::string time_out_time;
  int time_out_warning_way;
  int time_out_operate;
  int release_setting;
  bool is_open_oss_log;
  int status;
  int last_job_status;
  int running_time;
  std::string fail_reason;
  std::string oss_path;
  std::string emr_role4_ec_s;
  std::string emr_role4_oss;
  bool is_open_public_ip;
};
struct DescribeClusterSoftwareInfoType {
  std::string emr_ver;
  std::string cluster_type;
  std::string softwares;
};
struct DescribeClusterNodeType {
  std::string instance_id;
  std::string pub_ip;
  std::string inner_ip;
  std::string disk_info;
};
struct DescribeClusterEcsRoleType {
  std::vector<DescribeClusterNodeType> nodes;
  bool is_master;
  std::string instance_type;
  std::string payment;
  std::string cpu_core;
  std::string memory_capacity;
  int disk_type;
  int disk_capacity;
  std::string band_width;
  std::string net_pay_type;
  std::string ecs_pay_type;
};
struct DescribeClusterEcsInfoType {
  std::vector<DescribeClusterEcsRoleType> ecs_roles;
  std::string region_id;
  std::string zone_id;
  std::string image_id;
  std::string image_name;
  std::string spark_version;
  std::string security_group_id;
  int total_count;
  int master_count;
  int slave_count;
};
struct DescribeClusterResponseType {
  DescribeClusterClusterInfoType cluster_info;
  DescribeClusterSoftwareInfoType software_info;
  DescribeClusterEcsInfoType ecs_info;
};
} // end namespace
#endif
