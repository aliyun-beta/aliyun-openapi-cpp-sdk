#ifndef ALI_ALTER_TABLE_TYPESH
#define ALI_ALTER_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlterTableRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string ddl_sql;
};
struct AlterTableResponseType {
  std::string task_id;
};
} // end namespace
#endif
