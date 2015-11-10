#ifndef ALI_RDS_DESCRIBE_OPTIMIZE_ADVICE_ON_MISS_INDEX_TYPESH
#define ALI_RDS_DESCRIBE_OPTIMIZE_ADVICE_ON_MISS_INDEX_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeOptimizeAdviceOnMissIndexRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsDescribeOptimizeAdviceOnMissIndexAdviceOnMissIndexType {
  std::string db_name;
  std::string table_name;
  std::string query_column;
  std::string sq_ltext;
};
struct RdsDescribeOptimizeAdviceOnMissIndexResponseType {
  std::vector<RdsDescribeOptimizeAdviceOnMissIndexAdviceOnMissIndexType> items;
  std::string db_instance_id;
  int total_records_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
