#ifndef ALI_DESCRIBE_OPTIMIZE_ADVICE_ON_BIG_TABLE_TYPESH
#define ALI_DESCRIBE_OPTIMIZE_ADVICE_ON_BIG_TABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeOptimizeAdviceOnBigTableRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct DescribeOptimizeAdviceOnBigTableAdviceOnBigTableType {
  std::string db_name;
  std::string table_name;
  long table_size;
  long data_size;
  long index_size;
};
struct DescribeOptimizeAdviceOnBigTableResponseType {
  std::vector<DescribeOptimizeAdviceOnBigTableAdviceOnBigTableType> items;
  int total_records_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
