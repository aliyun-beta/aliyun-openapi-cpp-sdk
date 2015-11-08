#ifndef ALI_CHECK_DB_NAME_AVAILABLE_TYPESH
#define ALI_CHECK_DB_NAME_AVAILABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CheckDBNameAvailableRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string db_name;
  std::string owner_account;
};
struct CheckDBNameAvailableResponseType {
};
} // end namespace
#endif
