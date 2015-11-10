#ifndef ALI_PTS_REPORT_LOG_SAMPLE_TYPESH
#define ALI_PTS_REPORT_LOG_SAMPLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSReportLogSampleRequestType {
  std::string wskey;
  std::string scenario_id;
  std::string log_sample;
};
struct PTSReportLogSampleResponseType {
};
} // end namespace
#endif
