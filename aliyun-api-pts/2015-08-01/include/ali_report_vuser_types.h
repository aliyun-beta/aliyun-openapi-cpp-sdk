#ifndef ALI_REPORT_VUSER_TYPESH
#define ALI_REPORT_VUSER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ReportVuserRequestType {
  std::string wskey;
  std::string scenario_id;
  std::string vuser;
  std::string gmt_created;
};
struct ReportVuserResponseType {
};
} // end namespace
#endif
