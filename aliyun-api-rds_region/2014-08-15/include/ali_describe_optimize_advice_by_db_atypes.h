#ifndef ALI_DESCRIBE_OPTIMIZE_ADVICE_BY_DB_ATYPESH
#define ALI_DESCRIBE_OPTIMIZE_ADVICE_BY_DB_ATYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeOptimizeAdviceByDBARequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct DescribeOptimizeAdviceByDBAAdviceByDBAType {
  std::string optimization_text;
};
struct DescribeOptimizeAdviceByDBAResponseType {
  std::vector<DescribeOptimizeAdviceByDBAAdviceByDBAType> items;
  int total_records_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
