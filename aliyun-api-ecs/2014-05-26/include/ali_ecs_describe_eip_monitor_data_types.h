#ifndef ALI_ECS_DESCRIBE_EIP_MONITOR_DATA_TYPESH
#define ALI_ECS_DESCRIBE_EIP_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeEipMonitorDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string allocation_id;
  std::string start_time;
  std::string end_time;
  std::string period;
  std::string owner_account;
};
struct EcsDescribeEipMonitorDataEipMonitorDataType {
  int eip_rx;
  int eip_tx;
  int eip_flow;
  int eip_bandwidth;
  int eip_packets;
  std::string time_stamp;
};
struct EcsDescribeEipMonitorDataResponseType {
  std::vector<EcsDescribeEipMonitorDataEipMonitorDataType> eip_monitor_datas;
};
} // end namespace
#endif
