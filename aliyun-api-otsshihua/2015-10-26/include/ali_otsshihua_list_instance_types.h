#ifndef ALI_OTSSHIHUA_LIST_INSTANCE_TYPESH
#define ALI_OTSSHIHUA_LIST_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsShihuaListInstanceRequestType {
};
struct OtsShihuaListInstanceInstanceInfoType {
  std::string instance_name;
  std::string timestamp;
};
struct OtsShihuaListInstanceResponseType {
  std::vector<OtsShihuaListInstanceInstanceInfoType> instance_infos;
};
} // end namespace
#endif
