#ifndef ALI_DRDS_DROP_INDEXES_TYPESH
#define ALI_DRDS_DROP_INDEXES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDropIndexesRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string table;
  std::string indexes;
};
struct DrdsDropIndexesResponseType {
  std::string task_id;
};
} // end namespace
#endif
