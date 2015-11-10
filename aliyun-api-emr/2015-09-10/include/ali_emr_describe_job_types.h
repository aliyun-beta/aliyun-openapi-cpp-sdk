#ifndef ALI_EMR_DESCRIBE_JOB_TYPESH
#define ALI_EMR_DESCRIBE_JOB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrDescribeJobRequestType {
  std::string id;
};
struct EmrDescribeJobResponseType {
  long id;
  std::string name;
  int fail_act;
  int type;
  std::string env_param;
};
} // end namespace
#endif
