#ifndef ALI_CMS_STOP_PROJECT_TYPESH
#define ALI_CMS_STOP_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsStopProjectRequestType {
  std::string project_name;
};
struct CmsStopProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
