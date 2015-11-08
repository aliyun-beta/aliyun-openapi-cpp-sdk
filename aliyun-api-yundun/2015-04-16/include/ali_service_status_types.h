#ifndef ALI_SERVICE_STATUS_TYPESH
#define ALI_SERVICE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ServiceStatusRequestType {
  std::string instance_id;
};
struct ServiceStatusResponseType {
  bool port_scan;
  bool vul_scan;
};
} // end namespace
#endif
