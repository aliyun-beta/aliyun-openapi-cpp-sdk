#ifndef ALI_CMS_UPDATE_PROJECT_TYPESH
#define ALI_CMS_UPDATE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsUpdateProjectRequestType {
  std::string project_name;
  std::string project;
};
struct CmsUpdateProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
