#ifndef ALI_EMR_JOB_RESOURCE_TYPESH
#define ALI_EMR_JOB_RESOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrJobResourceRequestType {
  std::string bucket;
  std::string path;
};
struct EmrJobResourceJobResourceInfoType {
  int type;
  std::string filename;
  long size;
  std::string region;
};
struct EmrJobResourceResponseType {
  std::vector<EmrJobResourceJobResourceInfoType> job_resource_info_list;
};
} // end namespace
#endif
