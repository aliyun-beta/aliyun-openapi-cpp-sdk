#ifndef ALI_MODIFY_SNAPSHOT_ATTRIBUTE_TYPESH
#define ALI_MODIFY_SNAPSHOT_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifySnapshotAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string snapshot_id;
  std::string snapshot_name;
  std::string description;
};
struct ModifySnapshotAttributeResponseType {
};
} // end namespace
#endif
