#ifndef ALI_DROP_TABLES_TYPESH
#define ALI_DROP_TABLES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DropTablesRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string tables;
};
struct DropTablesResponseType {
  std::string task_id;
};
} // end namespace
#endif
