#ifndef ALI_DETECT_VUL_BY_ID_TYPESH
#define ALI_DETECT_VUL_BY_ID_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DetectVulByIdRequestType {
  std::string instance_id;
  std::string vul_id;
};
struct DetectVulByIdResponseType {
};
} // end namespace
#endif
