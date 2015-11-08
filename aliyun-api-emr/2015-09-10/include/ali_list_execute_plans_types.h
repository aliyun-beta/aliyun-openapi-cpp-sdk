#ifndef ALI_LIST_EXECUTE_PLANS_TYPESH
#define ALI_LIST_EXECUTE_PLANS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListExecutePlansRequestType {
  std::string strategy;
  std::string status;
  std::string is_desc;
  std::string page_number;
  std::string page_size;
};
struct ListExecutePlansExecutePlanInfoType {
  long id;
  std::string name;
  std::string last_run_status;
  long run_time;
  std::string cluster_name;
  bool is_create_cluster;
  int stragety;
  std::string status;
  int time_interval;
  std::string start_time;
  std::string time_unit;
};
struct ListExecutePlansResponseType {
  std::vector<ListExecutePlansExecutePlanInfoType> execute_plans;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
