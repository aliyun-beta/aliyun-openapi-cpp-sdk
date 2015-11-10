#ifndef ALI_OTS_LIST_INSTANCE_TYPESH
#define ALI_OTS_LIST_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsListInstanceRequestType {
};
struct OtsListInstanceInstanceInfoType {
  std::string instance_name;
  std::string instance_id;
  std::string version;
  std::string timestamp;
};
struct OtsListInstanceResponseType {
  std::vector<OtsListInstanceInstanceInfoType> instance_infos;
};
} // end namespace
#endif
