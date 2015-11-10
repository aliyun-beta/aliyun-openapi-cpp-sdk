#ifndef ALI_RDS_DESCRIBE_ACCOUNTS_TYPESH
#define ALI_RDS_DESCRIBE_ACCOUNTS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeAccountsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string owner_account;
};
struct RdsDescribeAccountsDatabasePrivilegeType {
  std::string db_name;
  std::string account_privilege;
};
struct RdsDescribeAccountsDBInstanceAccountType {
  std::vector<RdsDescribeAccountsDatabasePrivilegeType> database_privileges;
  std::string db_instance_id;
  std::string account_name;
  std::string account_status;
  std::string account_description;
};
struct RdsDescribeAccountsResponseType {
  std::vector<RdsDescribeAccountsDBInstanceAccountType> accounts;
};
} // end namespace
#endif
