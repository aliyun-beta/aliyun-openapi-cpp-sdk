#ifndef ALI_DRDS_DESCRIBE_DRDS_DB_TYPESH
#define ALI_DRDS_DESCRIBE_DRDS_DB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeDrdsDBRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DrdsDescribeDrdsDBDataType {
  std::string db_name;
  int status;
  std::string create_time;
  std::string msg;
  std::string mode;
};
struct DrdsDescribeDrdsDBResponseType {
  DrdsDescribeDrdsDBDataType data;
  bool success;
};
} // end namespace
#endif
