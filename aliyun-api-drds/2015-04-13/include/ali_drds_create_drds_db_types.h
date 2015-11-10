#ifndef ALI_DRDS_CREATE_DRDS_DB_TYPESH
#define ALI_DRDS_CREATE_DRDS_DB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsCreateDrdsDBRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string encode;
  std::string password;
  std::string rds_instances;
};
struct DrdsCreateDrdsDBResponseType {
  bool success;
};
} // end namespace
#endif
