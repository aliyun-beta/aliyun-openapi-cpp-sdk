#ifndef ALI_RAM_BIND_MF_ADEVICE_TYPESH
#define ALI_RAM_BIND_MF_ADEVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamBindMFADeviceRequestType {
  std::string serial_number;
  std::string user_name;
  std::string authentication_code1;
  std::string authentication_code2;
};
struct RamBindMFADeviceResponseType {
};
} // end namespace
#endif
