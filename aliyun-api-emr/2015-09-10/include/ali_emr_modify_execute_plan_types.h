#ifndef ALI_EMR_MODIFY_EXECUTE_PLAN_TYPESH
#define ALI_EMR_MODIFY_EXECUTE_PLAN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrModifyExecutePlanRequestType {
  std::string cluster_id;
  std::string execute_plan_id;
  std::string name;
  std::string strategy;
  std::string time_interval;
  std::string start_time;
  std::string time_unit;
  std::string job_id;
};
struct EmrModifyExecutePlanResponseType {
  long execute_plan_id;
};
} // end namespace
#endif
