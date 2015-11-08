#ifndef ALI_LIST_VIRTUAL_MF_ADEVICES_TYPESH
#define ALI_LIST_VIRTUAL_MF_ADEVICES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListVirtualMFADevicesRequestType {
};
struct ListVirtualMFADevicesUserType {
  std::string user_id;
  std::string user_name;
  std::string display_name;
};
struct ListVirtualMFADevicesVirtualMFADeviceType {
  ListVirtualMFADevicesUserType user;
  std::string serial_number;
  std::string activate_date;
};
struct ListVirtualMFADevicesResponseType {
  std::vector<ListVirtualMFADevicesVirtualMFADeviceType> virtual_mf_adevices;
};
} // end namespace
#endif
