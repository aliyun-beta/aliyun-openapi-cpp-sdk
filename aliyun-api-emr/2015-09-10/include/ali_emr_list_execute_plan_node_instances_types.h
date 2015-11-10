#ifndef ALI_EMR_LIST_EXECUTE_PLAN_NODE_INSTANCES_TYPESH
#define ALI_EMR_LIST_EXECUTE_PLAN_NODE_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListExecutePlanNodeInstancesRequestType {
  std::string execute_plan_work_node_id;
};
struct EmrListExecutePlanNodeInstancesExecutePlanNodeInstanceInfoType {
  std::string application_id;
  std::string instance_info;
  std::string container_info;
};
struct EmrListExecutePlanNodeInstancesResponseType {
  std::vector<EmrListExecutePlanNodeInstancesExecutePlanNodeInstanceInfoType> execute_plan_node_instance;
};
} // end namespace
#endif
