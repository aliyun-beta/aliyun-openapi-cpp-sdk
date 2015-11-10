#ifndef ALI_ALERT_BATCH_QUERY_PROJECT_TYPESH
#define ALI_ALERT_BATCH_QUERY_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertBatchQueryProjectRequestType {
  std::string names;
  std::string page;
  std::string page_size;
};
struct AlertBatchQueryProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
