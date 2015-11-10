#ifndef ALI_CMS_CREATE_PROJECT_TYPESH
#define ALI_CMS_CREATE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsCreateProjectRequestType {
  std::string project;
};
struct CmsCreateProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
