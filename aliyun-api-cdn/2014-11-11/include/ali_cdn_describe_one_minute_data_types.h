#ifndef ALI_CDN_DESCRIBE_ONE_MINUTE_DATA_TYPESH
#define ALI_CDN_DESCRIBE_ONE_MINUTE_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnDescribeOneMinuteDataRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string data_time;
};
struct CdnDescribeOneMinuteDataResponseType {
  std::string bps;
  std::string qps;
};
} // end namespace
#endif
