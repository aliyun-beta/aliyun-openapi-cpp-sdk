#ifndef ALI_DRDS_CREATE_INDEX_TYPESH
#define ALI_DRDS_CREATE_INDEX_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DrdsCreateIndexRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string ddl_sql;
};
struct DrdsCreateIndexResponseType {
  std::string task_id;
};
} // end namespace
#endif
