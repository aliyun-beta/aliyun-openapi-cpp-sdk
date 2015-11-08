#ifndef ALI_DESCRIBE_ACCOUNTS_TYPESH
#define ALI_DESCRIBE_ACCOUNTS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeAccountsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string owner_account;
};
struct DescribeAccountsDatabasePrivilegeType {
  std::string db_name;
  std::string account_privilege;
};
struct DescribeAccountsDBInstanceAccountType {
  std::vector<DescribeAccountsDatabasePrivilegeType> database_privileges;
  std::string db_instance_id;
  std::string account_name;
  std::string account_status;
  std::string account_description;
};
struct DescribeAccountsResponseType {
  std::vector<DescribeAccountsDBInstanceAccountType> accounts;
};
} // end namespace
#endif
