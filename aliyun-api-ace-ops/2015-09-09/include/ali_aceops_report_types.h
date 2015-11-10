#ifndef ALI_ACEOPS_REPORT_TYPESH
#define ALI_ACEOPS_REPORT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AceopsreportRequestType {
  std::string group;
  std::string name;
  std::string ip;
  std::string type;
  std::string softversion;
  std::string config;
};
struct AceopsreportResponseType {
};
} // end namespace
#endif
