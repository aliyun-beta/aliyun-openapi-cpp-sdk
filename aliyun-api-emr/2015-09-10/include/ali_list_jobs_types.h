#ifndef ALI_LIST_JOBS_TYPESH
#define ALI_LIST_JOBS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListJobsRequestType {
  std::string is_desc;
  std::string page_number;
  std::string page_size;
};
struct ListJobsJobInfoType {
  long job_id;
  std::string job_name;
  int job_type;
  std::string env_config;
  int job_fail_act;
};
struct ListJobsResponseType {
  std::vector<ListJobsJobInfoType> jobs;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
