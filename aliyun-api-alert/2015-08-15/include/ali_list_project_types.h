#ifndef ALI_LIST_PROJECT_TYPESH
#define ALI_LIST_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListProjectRequestType {
  std::string project_owner;
  std::string page;
  std::string page_size;
};
struct ListProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
