#ifndef ALI_RAM_GET_ACCOUNT_SUMMARY_TYPESH
#define ALI_RAM_GET_ACCOUNT_SUMMARY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetAccountSummarySummaryMapType {
  int users_quota;
  int users;
  int access_keys_per_user_quota;
  int virtual_mf_adevices_quota;
  int mf_adevices;
  int mf_adevices_in_use;
  int groups_quota;
  int groups;
  int groups_per_user_quota;
  int roles_quota;
  int roles;
  int policies_quota;
  int policies;
  int policy_size_quota;
  int versions_per_policy_quota;
  int attached_policies_per_user_quota;
  int attached_policies_per_group_quota;
  int attached_policies_per_role_quota;
};
struct RamGetAccountSummaryResponseType {
  RamGetAccountSummarySummaryMapType summary_map;
};
} // end namespace
#endif
