#ifndef ALI_DESCRIBE_ONE_MINUTE_DATA_TYPESH
#define ALI_DESCRIBE_ONE_MINUTE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeOneMinuteDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string data_time;
};
struct DescribeOneMinuteDataResponseType {
  std::string bps;
  std::string qps;
};
} // end namespace
#endif
