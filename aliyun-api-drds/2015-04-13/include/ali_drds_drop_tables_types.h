#ifndef ALI_DRDS_DROP_TABLES_TYPESH
#define ALI_DRDS_DROP_TABLES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsDropTablesRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string tables;
};
struct DrdsDropTablesResponseType {
  std::string task_id;
};
} // end namespace
#endif
