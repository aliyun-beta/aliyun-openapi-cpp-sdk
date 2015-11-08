#ifndef ALI_JOB_RESOURCE_TYPESH
#define ALI_JOB_RESOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct JobResourceRequestType {
  std::string bucket;
  std::string path;
};
struct JobResourceJobResourceInfoType {
  int type;
  std::string filename;
  long size;
  std::string region;
};
struct JobResourceResponseType {
  std::vector<JobResourceJobResourceInfoType> job_resource_info_list;
};
} // end namespace
#endif
