#ifndef ALI_MODIFY_JOB_TYPESH
#define ALI_MODIFY_JOB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyJobRequestType {
  std::string id;
  std::string name;
  std::string type;
  std::string env_parameter;
  std::string fail_act;
};
struct ModifyJobResponseType {
};
} // end namespace
#endif
