#ifndef ALI_CREATE_INDEX_TYPESH
#define ALI_CREATE_INDEX_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateIndexRequestType {
  std::string drds_instance_id;
  std::string db_name;
  std::string ddl_sql;
};
struct CreateIndexResponseType {
  std::string task_id;
};
} // end namespace
#endif
