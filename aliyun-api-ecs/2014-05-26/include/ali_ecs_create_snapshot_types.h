#ifndef ALI_ECS_CREATE_SNAPSHOT_TYPESH
#define ALI_ECS_CREATE_SNAPSHOT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCreateSnapshotRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string disk_id;
  std::string snapshot_name;
  std::string description;
  std::string client_token;
  std::string owner_account;
};
struct EcsCreateSnapshotResponseType {
  std::string snapshot_id;
};
} // end namespace
#endif
