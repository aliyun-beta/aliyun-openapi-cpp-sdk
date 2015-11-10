#ifndef ALI_DRDS_CREATE_TABLE_TYPESH
#define ALI_DRDS_CREATE_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsCreateTableRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string ddl_sql;
  std::string shard_type;
  std::string shard_key;
  std::string allow_full_table_scan;
};
struct DrdsCreateTableResponseType {
  std::string task_id;
};
} // end namespace
#endif
