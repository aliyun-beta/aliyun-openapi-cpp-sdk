#ifndef ALI_RDS_DESCRIBE_OPTIMIZE_ADVICE_ON_STORAGE_TYPESH
#define ALI_RDS_DESCRIBE_OPTIMIZE_ADVICE_ON_STORAGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeOptimizeAdviceOnStorageRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct RdsDescribeOptimizeAdviceOnStorageAdviceOnStorageType {
  std::string db_name;
  std::string table_name;
  std::string current_engine;
  std::string advise_engine;
};
struct RdsDescribeOptimizeAdviceOnStorageResponseType {
  std::vector<RdsDescribeOptimizeAdviceOnStorageAdviceOnStorageType> items;
  std::string db_instance_id;
  int total_records_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
