#ifndef ALI_YUNDUN_DETECT_VUL_BY_IP_TYPESH
#define ALI_YUNDUN_DETECT_VUL_BY_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunDetectVulByIpRequestType {
  std::string instance_id;
  std::string vul_ip;
};
struct YundunDetectVulByIpResponseType {
};
} // end namespace
#endif
