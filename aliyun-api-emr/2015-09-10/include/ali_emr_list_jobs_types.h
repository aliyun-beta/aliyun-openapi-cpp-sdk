#ifndef ALI_EMR_LIST_JOBS_TYPESH
#define ALI_EMR_LIST_JOBS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListJobsRequestType {
  std::string is_desc;
  std::string page_number;
  std::string page_size;
};
struct EmrListJobsJobInfoType {
  long job_id;
  std::string job_name;
  int job_type;
  std::string env_config;
  int job_fail_act;
};
struct EmrListJobsResponseType {
  std::vector<EmrListJobsJobInfoType> jobs;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
