#ifndef ALI_EMR_MODIFY_CLUSTER_NAME_TYPESH
#define ALI_EMR_MODIFY_CLUSTER_NAME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EmrModifyClusterNameRequestType {
  std::string cluster_id;
  std::string cluster_name;
};
struct EmrModifyClusterNameResponseType {
};
} // end namespace
#endif
