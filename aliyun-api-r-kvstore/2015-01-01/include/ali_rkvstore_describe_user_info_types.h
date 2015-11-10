#ifndef ALI_RKVSTORE_DESCRIBE_USER_INFO_TYPESH
#define ALI_RKVSTORE_DESCRIBE_USER_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeUserInfoRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct RkvstoreDescribeUserInfoAlreadyHasResourceNumType {
  long ecs_bought;
  long kv_sbought;
};
struct RkvstoreDescribeUserInfoResponseType {
  RkvstoreDescribeUserInfoAlreadyHasResourceNumType already_has_resource_num;
  bool is_authentication;
  bool is_finance;
  long balance_amount;
};
} // end namespace
#endif
