#ifndef ALI_DETECT_VUL_BY_IP_TYPESH
#define ALI_DETECT_VUL_BY_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DetectVulByIpRequestType {
  std::string instance_id;
  std::string vul_ip;
};
struct DetectVulByIpResponseType {
};
} // end namespace
#endif
