#ifndef ALI_LIST_INSTANCE_TYPESH
#define ALI_LIST_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListInstanceRequestType {
};
struct ListInstanceInstanceInfoType {
  std::string instance_name;
  std::string instance_id;
  std::string version;
  std::string timestamp;
};
struct ListInstanceResponseType {
  std::vector<ListInstanceInstanceInfoType> instance_infos;
};
} // end namespace
#endif
