#ifndef ALI_OCS_DATA_OPERATE_TYPESH
#define ALI_OCS_DATA_OPERATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsDataOperateRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string command;
};
struct OcsDataOperateResponseType {
  std::string command_result;
};
} // end namespace
#endif
