#ifndef ALI_CMS_LIST_PROJECT_TYPESH
#define ALI_CMS_LIST_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsListProjectRequestType {
  std::string project_owner;
  std::string page;
  std::string page_size;
};
struct CmsListProjectResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
