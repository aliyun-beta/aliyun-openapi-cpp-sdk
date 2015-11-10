#ifndef ALI_RDSREGION_DESCRIBE_OPTIMIZE_ADVICE_ON_EXCESS_INDEX_TYPESH
#define ALI_RDSREGION_DESCRIBE_OPTIMIZE_ADVICE_ON_EXCESS_INDEX_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeOptimizeAdviceOnExcessIndexRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsRegionDescribeOptimizeAdviceOnExcessIndexAdviceOnExcessIndexType {
  std::string db_name;
  std::string table_name;
  long index_count;
};
struct RdsRegionDescribeOptimizeAdviceOnExcessIndexResponseType {
  std::vector<RdsRegionDescribeOptimizeAdviceOnExcessIndexAdviceOnExcessIndexType> items;
  int total_records_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
