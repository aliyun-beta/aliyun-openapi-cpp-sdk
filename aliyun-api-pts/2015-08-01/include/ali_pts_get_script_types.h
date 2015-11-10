#ifndef ALI_PTS_GET_SCRIPT_TYPESH
#define ALI_PTS_GET_SCRIPT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSGetScriptRequestType {
  std::string script_id;
  std::string tfsname;
};
struct PTSGetScriptResponseType {
  std::string script;
};
} // end namespace
#endif
