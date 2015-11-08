#ifndef ALI_CREATE_VIRTUAL_MF_ADEVICE_TYPESH
#define ALI_CREATE_VIRTUAL_MF_ADEVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateVirtualMFADeviceRequestType {
  std::string virtual_mf_adevice_name;
};
struct CreateVirtualMFADeviceVirtualMFADeviceType {
  std::string serial_number;
  std::string base32_string_seed;
  std::string qr_code_pn_g;
};
struct CreateVirtualMFADeviceResponseType {
  CreateVirtualMFADeviceVirtualMFADeviceType virtual_mf_adevice;
};
} // end namespace
#endif
