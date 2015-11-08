#ifndef ALI_DESCRIBE_SQ_LINJECTION_INFOS_TYPESH
#define ALI_DESCRIBE_SQ_LINJECTION_INFOS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeSQLInjectionInfosRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string start_time;
  std::string end_time;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct DescribeSQLInjectionInfosSQLInjectionInfoType {
  std::string db_name;
  std::string sq_ltext;
  std::string latency_time;
  std::string host_address;
  std::string execute_time;
  std::string account_name;
  std::string effect_row_count;
};
struct DescribeSQLInjectionInfosResponseType {
  std::vector<DescribeSQLInjectionInfosSQLInjectionInfoType> items;
  std::string engine;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
