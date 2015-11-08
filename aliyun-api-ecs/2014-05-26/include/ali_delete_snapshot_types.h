#ifndef ALI_DELETE_SNAPSHOT_TYPESH
#define ALI_DELETE_SNAPSHOT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteSnapshotRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string snapshot_id;
  std::string owner_account;
};
struct DeleteSnapshotResponseType {
};
} // end namespace
#endif
