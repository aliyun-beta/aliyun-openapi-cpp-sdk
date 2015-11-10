#ifndef ALI_EMR_LIST_CLUSTERS_TYPESH
#define ALI_EMR_LIST_CLUSTERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrListClustersRequestType {
  std::string cluster_type;
  std::string pay_type;
  std::string status;
  std::string is_desc;
  std::string page_number;
  std::string page_size;
};
struct EmrListClustersClusterInfoType {
  long id;
  std::string name;
  int pay_type;
  int type;
  std::string create_time;
  std::string running_time;
  int status;
  std::string fail_reason;
};
struct EmrListClustersResponseType {
  std::vector<EmrListClustersClusterInfoType> clusters;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
