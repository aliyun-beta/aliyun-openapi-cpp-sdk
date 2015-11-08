#ifndef ALI_CREATE_JOB_TYPESH
#define ALI_CREATE_JOB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateJobRequestType {
  std::string job_name;
  std::string job_type;
  std::string parameter;
  std::string job_fail_act;
};
struct CreateJobResponseType {
  long id;
};
} // end namespace
#endif
