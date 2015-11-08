#ifndef ALI_MODIFY_POSTPAID_DB_INSTANCE_SPEC_TYPESH
#define ALI_MODIFY_POSTPAID_DB_INSTANCE_SPEC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyPostpaidDBInstanceSpecRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string db_instance_class;
  std::string db_instance_storage;
  std::string owner_account;
};
struct ModifyPostpaidDBInstanceSpecResponseType {
};
} // end namespace
#endif
