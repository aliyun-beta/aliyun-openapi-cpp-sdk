#ifndef ALI_RKVSTORE_DATA_OPERATE_TYPESH
#define ALI_RKVSTORE_DATA_OPERATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDataOperateRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string command;
};
struct RkvstoreDataOperateResponseType {
  std::string command_result;
};
} // end namespace
#endif
