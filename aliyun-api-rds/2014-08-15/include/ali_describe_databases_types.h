#ifndef ALI_DESCRIBE_DATABASES_TYPESH
#define ALI_DESCRIBE_DATABASES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDatabasesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string db_status;
  std::string owner_account;
};
struct DescribeDatabasesAccountPrivilegeInfoType {
  std::string account;
  std::string account_privilege;
};
struct DescribeDatabasesDatabaseType {
  std::vector<DescribeDatabasesAccountPrivilegeInfoType> accounts;
  std::string db_name;
  std::string db_instance_id;
  std::string engine;
  std::string db_status;
  std::string character_set_name;
  std::string db_description;
};
struct DescribeDatabasesResponseType {
  std::vector<DescribeDatabasesDatabaseType> databases;
};
} // end namespace
#endif
