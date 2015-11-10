#ifndef ALI_DRDS_DESCRIBE_DRDS_DBS_TYPESH
#define ALI_DRDS_DESCRIBE_DRDS_DBS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDescribeDrdsDBsRequestType {
  std::string drds_instance_id;
};
struct DrdsDescribeDrdsDBsDbType {
  std::string db_name;
  int status;
  std::string create_time;
  std::string msg;
  std::string mode;
};
struct DrdsDescribeDrdsDBsResponseType {
  std::vector<DrdsDescribeDrdsDBsDbType> data;
  bool success;
};
} // end namespace
#endif
