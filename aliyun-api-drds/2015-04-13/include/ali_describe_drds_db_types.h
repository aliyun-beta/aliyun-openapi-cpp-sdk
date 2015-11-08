#ifndef ALI_DESCRIBE_DRDS_DB_TYPESH
#define ALI_DESCRIBE_DRDS_DB_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDrdsDBRequestType {
  std::string drds_instance_id;
  std::string db_name;
};
struct DescribeDrdsDBDataType {
  std::string db_name;
  int status;
  std::string create_time;
  std::string msg;
  std::string mode;
};
struct DescribeDrdsDBResponseType {
  DescribeDrdsDBDataType data;
  bool success;
};
} // end namespace
#endif
