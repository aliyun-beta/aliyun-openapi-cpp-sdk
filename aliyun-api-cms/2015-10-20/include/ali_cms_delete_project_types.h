#ifndef ALI_CMS_DELETE_PROJECT_TYPESH
#define ALI_CMS_DELETE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsDeleteProjectRequestType {
  std::string project_name;
};
struct CmsDeleteProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
