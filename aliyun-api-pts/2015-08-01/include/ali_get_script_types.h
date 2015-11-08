#ifndef ALI_GET_SCRIPT_TYPESH
#define ALI_GET_SCRIPT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetScriptRequestType {
  std::string script_id;
  std::string tfsname;
};
struct GetScriptResponseType {
  std::string script;
};
} // end namespace
#endif
