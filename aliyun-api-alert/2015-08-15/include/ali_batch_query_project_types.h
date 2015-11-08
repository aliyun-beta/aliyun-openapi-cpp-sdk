#ifndef ALI_BATCH_QUERY_PROJECT_TYPESH
#define ALI_BATCH_QUERY_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct BatchQueryProjectRequestType {
  std::string names;
  std::string page;
  std::string page_size;
};
struct BatchQueryProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
