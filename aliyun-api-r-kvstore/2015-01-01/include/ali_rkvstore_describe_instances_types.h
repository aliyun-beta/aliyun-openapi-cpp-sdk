#ifndef ALI_RKVSTORE_DESCRIBE_INSTANCES_TYPESH
#define ALI_RKVSTORE_DESCRIBE_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_ids;
  std::string instance_status;
  std::string charge_type;
  std::string page_number;
  std::string page_size;
};
struct RkvstoreDescribeInstancesKVStoreInstanceType {
  std::string instance_id;
  std::string instance_name;
  std::string connection_domain;
  long port;
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
  std::string create_time;
  std::string end_time;
};
struct RkvstoreDescribeInstancesResponseType {
  std::vector<RkvstoreDescribeInstancesKVStoreInstanceType> instances;
  int page_number;
  int page_size;
  int total_count;
};
} // end namespace
#endif
