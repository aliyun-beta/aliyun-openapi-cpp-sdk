#ifndef ALI_DESCRIBE_DISKS_TYPESH
#define ALI_DESCRIBE_DISKS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDisksRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string zone_id;
  std::string disk_ids;
  std::string instance_id;
  std::string disk_type;
  std::string category;
  std::string status;
  std::string snapshot_id;
  std::string portable;
  std::string delete_with_instance;
  std::string delete_auto_snapshot;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
  std::string disk_name;
  std::string enable_auto_snapshot;
  std::string disk_charge_type;
  std::string lock_reason;
  std::string filter1_key;
  std::string filter2_key;
  std::string filter1_value;
  std::string filter2_value;
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
struct DescribeDisksOperationLockType {
  std::string lock_reason;
};
struct DescribeDisksTagType {
  std::string tag_key;
  std::string tag_value;
};
struct DescribeDisksDiskType {
  std::vector<DescribeDisksOperationLockType> operation_locks;
  std::vector<DescribeDisksTagType> tags;
  std::string disk_id;
  std::string region_id;
  std::string zone_id;
  std::string disk_name;
  std::string description;
  std::string type;
  std::string category;
  int size;
  std::string image_id;
  std::string source_snapshot_id;
  std::string product_code;
  bool portable;
  std::string status;
  std::string instance_id;
  std::string device;
  bool delete_with_instance;
  bool delete_auto_snapshot;
  bool enable_auto_snapshot;
  std::string creation_time;
  std::string attached_time;
  std::string detached_time;
  std::string disk_charge_type;
  std::string expired_time;
};
struct DescribeDisksResponseType {
  std::vector<DescribeDisksDiskType> disks;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
