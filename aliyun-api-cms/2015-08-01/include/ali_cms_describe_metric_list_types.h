#ifndef ALI_CMS_DESCRIBE_METRIC_LIST_TYPESH
#define ALI_CMS_DESCRIBE_METRIC_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsDescribeMetricListRequestType {
  std::string project;
  std::string metric;
  std::string period;
  std::string start_time;
  std::string end_time;
  std::string dimensions;
  std::string page;
  std::string length;
};
struct CmsDescribeMetricListResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
