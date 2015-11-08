#ifndef ALI_DESCRIBE_SNAPSHOTS_TYPESH
#define ALI_DESCRIBE_SNAPSHOTS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeSnapshotsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string disk_id;
  std::string snapshot_ids;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
  std::string snapshot_name;
  std::string status;
  std::string snapshot_type;
  std::string filter1_key;
  std::string filter2_key;
  std::string filter1_value;
  std::string filter2_value;
  std::string usage;
  std::string source_disk_type;
  std::string tag1_key;
  std::string tag2_key;
  std::string tag3_key;
  std::string tag4_key;
  std::string tag5_key;
  std::string tag1_value;
  std::string tag2_value;
  std::string tag3_value;
  std::string tag4_value;
  std::string tag5_value;
};
struct DescribeSnapshotsTagType {
  std::string tag_key;
  std::string tag_value;
};
struct DescribeSnapshotsSnapshotType {
  std::vector<DescribeSnapshotsTagType> tags;
  std::string snapshot_id;
  std::string snapshot_name;
  std::string progress;
  std::string product_code;
  std::string source_disk_id;
  std::string source_disk_type;
  std::string source_disk_size;
  std::string description;
  std::string creation_time;
  std::string status;
  std::string usage;
};
struct DescribeSnapshotsResponseType {
  std::vector<DescribeSnapshotsSnapshotType> snapshots;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
