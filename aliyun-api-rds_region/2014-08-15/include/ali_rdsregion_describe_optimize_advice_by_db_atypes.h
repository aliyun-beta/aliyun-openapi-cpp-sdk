#ifndef ALI_RDSREGION_DESCRIBE_OPTIMIZE_ADVICE_BY_DB_ATYPESH
#define ALI_RDSREGION_DESCRIBE_OPTIMIZE_ADVICE_BY_DB_ATYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeOptimizeAdviceByDBARequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsRegionDescribeOptimizeAdviceByDBAAdviceByDBAType {
  std::string optimization_text;
};
struct RdsRegionDescribeOptimizeAdviceByDBAResponseType {
  std::vector<RdsRegionDescribeOptimizeAdviceByDBAAdviceByDBAType> items;
  int total_records_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
