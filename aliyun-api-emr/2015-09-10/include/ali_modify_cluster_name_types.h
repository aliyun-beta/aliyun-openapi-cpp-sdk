#ifndef ALI_MODIFY_CLUSTER_NAME_TYPESH
#define ALI_MODIFY_CLUSTER_NAME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyClusterNameRequestType {
  std::string cluster_id;
  std::string cluster_name;
};
struct ModifyClusterNameResponseType {
};
} // end namespace
#endif
