#ifndef ALI_DESCRIBE_DRDS_DBS_TYPESH
#define ALI_DESCRIBE_DRDS_DBS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDrdsDBsRequestType {
  std::string drds_instance_id;
};
struct DescribeDrdsDBsDbType {
  std::string db_name;
  int status;
  std::string create_time;
  std::string msg;
  std::string mode;
};
struct DescribeDrdsDBsResponseType {
  std::vector<DescribeDrdsDBsDbType> data;
  bool success;
};
} // end namespace
#endif
