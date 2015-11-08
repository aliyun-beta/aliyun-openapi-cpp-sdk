#ifndef ALI_GET_USER_MF_AINFO_TYPESH
#define ALI_GET_USER_MF_AINFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetUserMFAInfoRequestType {
  std::string user_name;
};
struct GetUserMFAInfoMFADeviceType {
  std::string serial_number;
};
struct GetUserMFAInfoResponseType {
  GetUserMFAInfoMFADeviceType mf_adevice;
};
} // end namespace
#endif
