#ifndef ALI_CMS_STATUS_PROJECT_TYPESH
#define ALI_CMS_STATUS_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsStatusProjectRequestType {
  std::string project_name;
};
struct CmsStatusProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
