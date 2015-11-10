#ifndef ALI_YUNDUN_SERVICE_STATUS_TYPESH
#define ALI_YUNDUN_SERVICE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunServiceStatusRequestType {
  std::string instance_id;
};
struct YundunServiceStatusResponseType {
  bool port_scan;
  bool vul_scan;
};
} // end namespace
#endif
