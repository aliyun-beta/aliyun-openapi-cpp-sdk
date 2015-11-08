#ifndef ALI_LIST_CLUSTERS_TYPESH
#define ALI_LIST_CLUSTERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListClustersRequestType {
  std::string cluster_type;
  std::string pay_type;
  std::string status;
  std::string is_desc;
  std::string page_number;
  std::string page_size;
};
struct ListClustersClusterInfoType {
  long id;
  std::string name;
  int pay_type;
  int type;
  std::string create_time;
  std::string running_time;
  int status;
  std::string fail_reason;
};
struct ListClustersResponseType {
  std::vector<ListClustersClusterInfoType> clusters;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
