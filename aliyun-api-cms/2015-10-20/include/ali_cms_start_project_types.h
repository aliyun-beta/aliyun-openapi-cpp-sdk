#ifndef ALI_CMS_START_PROJECT_TYPESH
#define ALI_CMS_START_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsStartProjectRequestType {
  std::string project_name;
};
struct CmsStartProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
