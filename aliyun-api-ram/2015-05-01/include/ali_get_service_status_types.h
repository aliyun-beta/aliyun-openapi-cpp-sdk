#ifndef ALI_GET_SERVICE_STATUS_TYPESH
#define ALI_GET_SERVICE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetServiceStatusRequestType {
  std::string account_id;
};
struct GetServiceStatusResponseType {
  std::string status;
};
} // end namespace
#endif
