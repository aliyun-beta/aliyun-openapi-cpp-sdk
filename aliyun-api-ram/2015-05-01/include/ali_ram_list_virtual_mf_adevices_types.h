#ifndef ALI_RAM_LIST_VIRTUAL_MF_ADEVICES_TYPESH
#define ALI_RAM_LIST_VIRTUAL_MF_ADEVICES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListVirtualMFADevicesRequestType {
};
struct RamListVirtualMFADevicesUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
};
struct RamListVirtualMFADevicesVirtualMFADeviceType {
  RamListVirtualMFADevicesUserType user;
  std::string serial_number;
  std::string activate_date;
};
struct RamListVirtualMFADevicesResponseType {
  std::vector<RamListVirtualMFADevicesVirtualMFADeviceType> virtual_mf_adevices;
};
} // end namespace
#endif
