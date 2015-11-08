#ifndef ALI_DESCRIBE_JOB_TYPESH
#define ALI_DESCRIBE_JOB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeJobRequestType {
  std::string id;
};
struct DescribeJobResponseType {
  long id;
  std::string name;
  int fail_act;
  int type;
  std::string env_param;
};
} // end namespace
#endif
