#ifndef ALI_BATCH_GET_DEVICES_INFO_TYPESH
#define ALI_BATCH_GET_DEVICES_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct BatchGetDevicesInfoRequestType {
  std::string devices;
  std::string app_id;
};
struct BatchGetDevicesInfoDeviceInfoType {
  std::string device_id;
  bool is_online;
  int status;
};
struct BatchGetDevicesInfoResponseType {
  std::vector<BatchGetDevicesInfoDeviceInfoType> device_infos;
};
} // end namespace
#endif
