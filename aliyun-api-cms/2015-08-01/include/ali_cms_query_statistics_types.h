#ifndef ALI_CMS_QUERY_STATISTICS_TYPESH
#define ALI_CMS_QUERY_STATISTICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsQueryStatisticsRequestType {
  std::string project;
  std::string metric;
  std::string period;
  std::string start_time;
  std::string end_time;
  std::string dimensions;
  std::string target_period;
  std::string function;
  std::string extend;
};
struct CmsQueryStatisticsResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
