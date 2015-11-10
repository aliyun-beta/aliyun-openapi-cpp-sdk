#ifndef ALI_YUNDUN_DETECT_VUL_BY_ID_TYPESH
#define ALI_YUNDUN_DETECT_VUL_BY_ID_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunDetectVulByIdRequestType {
  std::string instance_id;
  std::string vul_id;
};
struct YundunDetectVulByIdResponseType {
};
} // end namespace
#endif
