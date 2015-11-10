#ifndef ALI_ECS_MODIFY_SNAPSHOT_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_SNAPSHOT_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifySnapshotAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string snapshot_id;
  std::string snapshot_name;
  std::string description;
};
struct EcsModifySnapshotAttributeResponseType {
};
} // end namespace
#endif
