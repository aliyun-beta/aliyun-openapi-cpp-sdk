#ifndef ALI_MODIFY_IMAGE_SHARE_PERMISSION_TYPESH
#define ALI_MODIFY_IMAGE_SHARE_PERMISSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyImageSharePermissionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string add_account1;
  std::string add_account2;
  std::string add_account3;
  std::string add_account4;
  std::string add_account5;
  std::string add_account6;
  std::string add_account7;
  std::string add_account8;
  std::string add_account9;
  std::string add_account10;
  std::string remove_account1;
  std::string remove_account2;
  std::string remove_account3;
  std::string remove_account4;
  std::string remove_account5;
  std::string remove_account6;
  std::string remove_account7;
  std::string remove_account8;
  std::string remove_account9;
  std::string remove_account10;
  std::string owner_account;
};
struct ModifyImageSharePermissionResponseType {
};
} // end namespace
#endif
