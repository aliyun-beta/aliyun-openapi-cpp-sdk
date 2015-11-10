#ifndef ALI_PUSH_BATCH_GET_DEVICES_INFO_TYPESH
#define ALI_PUSH_BATCH_GET_DEVICES_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PushBatchGetDevicesInfoRequestType {
  std::string devices;
  std::string app_id;
};
struct PushBatchGetDevicesInfoDeviceInfoType {
  std::string device_id;
  bool is_online;
  int status;
};
struct PushBatchGetDevicesInfoResponseType {
  std::vector<PushBatchGetDevicesInfoDeviceInfoType> device_infos;
};
} // end namespace
#endif
