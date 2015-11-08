#ifndef ALI_DESCRIBE_METRIC_TYPESH
#define ALI_DESCRIBE_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeMetricRequestType {
  std::string project;
  std::string metric;
  std::string period;
  std::string start_time;
  std::string end_time;
  std::string dimensions;
};
struct DescribeMetricResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
