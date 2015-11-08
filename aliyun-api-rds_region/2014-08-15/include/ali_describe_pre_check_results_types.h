#ifndef ALI_DESCRIBE_PRE_CHECK_RESULTS_TYPESH
#define ALI_DESCRIBE_PRE_CHECK_RESULTS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribePreCheckResultsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string pre_check_id;
  std::string owner_account;
};
struct DescribePreCheckResultsPreCheckResultType {
  std::string pre_check_name;
  std::string pre_check_result;
  std::string fail_reasion;
  std::string repair_method;
};
struct DescribePreCheckResultsResponseType {
  std::vector<DescribePreCheckResultsPreCheckResultType> items;
  std::string db_instance_id;
};
} // end namespace
#endif
