#ifndef ALI_PTS_REPORT_VUSER_TYPESH
#define ALI_PTS_REPORT_VUSER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSReportVuserRequestType {
  std::string wskey;
  std::string scenario_id;
  std::string vuser;
  std::string gmt_created;
};
struct PTSReportVuserResponseType {
};
} // end namespace
#endif
