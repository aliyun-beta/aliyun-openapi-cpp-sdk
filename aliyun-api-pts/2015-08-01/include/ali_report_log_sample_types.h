#ifndef ALI_REPORT_LOG_SAMPLE_TYPESH
#define ALI_REPORT_LOG_SAMPLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ReportLogSampleRequestType {
  std::string wskey;
  std::string scenario_id;
  std::string log_sample;
};
struct ReportLogSampleResponseType {
};
} // end namespace
#endif
