#ifndef ALI_CREATE_EXECUTE_PLAN_WITH_CLUSTER_TYPESH
#define ALI_CREATE_EXECUTE_PLAN_WITH_CLUSTER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateExecutePlanWithClusterRequestType {
  std::string cluster_name;
  std::string zone_id;
  std::string log_enable;
  std::string log_path;
  std::string security_group;
  std::string is_open_public_ip;
  std::string security_group_name;
  std::string emr_ver;
  std::string cluster_type;
  std::string install;
  std::string master_index;
  std::string ecs_order;
  std::string emr_role4_ec_s;
  std::string emr_role4_oss;
  std::string pay_type;
  std::string period;
  std::string name;
  std::string strategy;
  std::string time_interval;
  std::string start_time;
  std::string time_unit;
  std::string job_id;
};
struct CreateExecutePlanWithClusterResponseType {
};
} // end namespace
#endif
