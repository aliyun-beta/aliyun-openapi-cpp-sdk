#ifndef ALI_DROP_INDEXES_TYPESH
#define ALI_DROP_INDEXES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DropIndexesRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string table;
  std::string indexes;
};
struct DropIndexesResponseType {
  std::string task_id;
};
} // end namespace
#endif
