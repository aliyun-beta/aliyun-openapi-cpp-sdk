#ifndef ALI_DRDS_DELETE_DRDS_DB_TYPESH
#define ALI_DRDS_DELETE_DRDS_DB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDeleteDrdsDBRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DrdsDeleteDrdsDBResponseType {
  bool success;
};
} // end namespace
#endif
