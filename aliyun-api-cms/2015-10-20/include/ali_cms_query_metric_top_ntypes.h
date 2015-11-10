#ifndef ALI_CMS_QUERY_METRIC_TOP_NTYPESH
#define ALI_CMS_QUERY_METRIC_TOP_NTYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsQueryMetricTopNRequestType {
  std::string project;
  std::string metric;
  std::string period;
  std::string start_time;
  std::string end_time;
  std::string dimensions;
  std::string value_key;
  std::string top;
  std::string extend;
};
struct CmsQueryMetricTopNResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
