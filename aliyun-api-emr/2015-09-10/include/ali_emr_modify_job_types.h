#ifndef ALI_EMR_MODIFY_JOB_TYPESH
#define ALI_EMR_MODIFY_JOB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrModifyJobRequestType {
  std::string id;
  std::string name;
  std::string type;
  std::string env_parameter;
  std::string fail_act;
};
struct EmrModifyJobResponseType {
};
} // end namespace
#endif
