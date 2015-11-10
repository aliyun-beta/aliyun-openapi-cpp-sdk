#ifndef ALI_EMR_CREATE_JOB_TYPESH
#define ALI_EMR_CREATE_JOB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrCreateJobRequestType {
  std::string job_name;
  std::string job_type;
  std::string parameter;
  std::string job_fail_act;
};
struct EmrCreateJobResponseType {
  long id;
};
} // end namespace
#endif
