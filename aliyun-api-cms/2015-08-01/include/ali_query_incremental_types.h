#ifndef ALI_QUERY_INCREMENTAL_TYPESH
#define ALI_QUERY_INCREMENTAL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct QueryIncrementalRequestType {
  std::string project;
  std::string metric;
  std::string period;
  std::string start_time;
  std::string end_time;
  std::string dimensions;
  std::string target_period;
  std::string columns;
  std::string extend;
};
struct QueryIncrementalResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
