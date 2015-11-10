#ifndef ALI_ACEOPS_QUERY_TYPESH
#define ALI_ACEOPS_QUERY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AceopsqueryRequestType {
  std::string group;
  std::string name;
  std::string ip;
  std::string softversion;
};
struct AceopsqueryResponseType {
  std::string url;
  std::string softversion;
};
} // end namespace
#endif
