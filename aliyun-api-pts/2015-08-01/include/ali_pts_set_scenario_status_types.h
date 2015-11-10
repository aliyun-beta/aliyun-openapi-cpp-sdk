#ifndef ALI_PTS_SET_SCENARIO_STATUS_TYPESH
#define ALI_PTS_SET_SCENARIO_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSSetScenarioStatusRequestType {
  std::string wskey;
  std::string scenario_id;
  std::string status;
  std::string node_ip;
};
struct PTSSetScenarioStatusResponseType {
};
} // end namespace
#endif
