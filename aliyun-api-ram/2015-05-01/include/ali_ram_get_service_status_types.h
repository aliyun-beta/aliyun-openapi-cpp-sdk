#ifndef ALI_RAM_GET_SERVICE_STATUS_TYPESH
#define ALI_RAM_GET_SERVICE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetServiceStatusRequestType {
  std::string account_id;
};
struct RamGetServiceStatusResponseType {
  std::string status;
};
} // end namespace
#endif
