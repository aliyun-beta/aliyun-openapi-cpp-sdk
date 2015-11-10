#ifndef ALI_RDS_DELETE_ACCOUNT_TYPESH
#define ALI_RDS_DELETE_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDeleteAccountRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string owner_account;
};
struct RdsDeleteAccountResponseType {
};
} // end namespace
#endif
