#ifndef ALI_EMR_CREATE_CLUSTER_TYPESH
#define ALI_EMR_CREATE_CLUSTER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrCreateClusterRequestType {
  std::string name;
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
  std::string pay_type;
  std::string period;
  std::string emr_role4_ec_s;
  std::string emr_role4_oss;
};
struct EmrCreateClusterResponseType {
};
} // end namespace
#endif
