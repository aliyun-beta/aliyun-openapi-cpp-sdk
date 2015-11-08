#ifndef ALI_DESCRIBE_DISK_MONITOR_DATA_TYPESH
#define ALI_DESCRIBE_DISK_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDiskMonitorDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string disk_id;
  std::string start_time;
  std::string end_time;
  std::string period;
  std::string owner_account;
};
struct DescribeDiskMonitorDataDiskMonitorDataType {
  std::string disk_id;
  int io_ps_read;
  int io_ps_write;
  int io_ps_total;
  int bp_sread;
  int bp_swrite;
  int bp_stotal;
  std::string time_stamp;
};
struct DescribeDiskMonitorDataResponseType {
  std::vector<DescribeDiskMonitorDataDiskMonitorDataType> monitor_data;
  int total_count;
};
} // end namespace
#endif
