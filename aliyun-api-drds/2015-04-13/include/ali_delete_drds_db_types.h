#ifndef ALI_DELETE_DRDS_DB_TYPESH
#define ALI_DELETE_DRDS_DB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteDrdsDBRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DeleteDrdsDBResponseType {
  bool success;
};
} // end namespace
#endif
