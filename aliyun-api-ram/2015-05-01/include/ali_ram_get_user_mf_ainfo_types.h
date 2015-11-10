#ifndef ALI_RAM_GET_USER_MF_AINFO_TYPESH
#define ALI_RAM_GET_USER_MF_AINFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetUserMFAInfoRequestType {
  std::string user_name;
};
struct RamGetUserMFAInfoMFADeviceType {
  std::string serial_number;
};
struct RamGetUserMFAInfoResponseType {
  RamGetUserMFAInfoMFADeviceType mf_adevice;
};
} // end namespace
#endif
