#ifndef ALI_DESCRIBE_USER_INFO_TYPESH
#define ALI_DESCRIBE_USER_INFO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeUserInfoRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
};
struct DescribeUserInfoAlreadyHasResourceNumType {
  long ecs_bought;
  long kv_sbought;
};
struct DescribeUserInfoResponseType {
  DescribeUserInfoAlreadyHasResourceNumType already_has_resource_num;
  bool is_authentication;
  bool is_finance;
  long balance_amount;
};
} // end namespace
#endif
