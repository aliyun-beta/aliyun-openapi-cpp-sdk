#ifndef ALI_DESCRIBE_INSTANCE_MONITOR_DATA_TYPESH
#define ALI_DESCRIBE_INSTANCE_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeInstanceMonitorDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string start_time;
  std::string end_time;
  std::string period;
  std::string owner_account;
};
struct DescribeInstanceMonitorDataInstanceMonitorDataType {
  std::string instance_id;
  int cp_u;
  int intranet_rx;
  int intranet_tx;
  int intranet_bandwidth;
  int internet_rx;
  int internet_tx;
  int internet_bandwidth;
  int io_ps_read;
  int io_ps_write;
  int bp_sread;
  int bp_swrite;
  std::string time_stamp;
};
struct DescribeInstanceMonitorDataResponseType {
  std::vector<DescribeInstanceMonitorDataInstanceMonitorDataType> monitor_data;
};
} // end namespace
#endif
