#ifndef ALI_ECS_DESCRIBE_EIP_ADDRESSES_TYPESH
#define ALI_ECS_DESCRIBE_EIP_ADDRESSES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeEipAddressesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string status;
  std::string eip_address;
  std::string allocation_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
  std::string filter1_key;
  std::string filter2_key;
  std::string filter1_value;
  std::string filter2_value;
  std::string lock_reason;
  std::string associated_instance_type;
  std::string associated_instance_id;
};
struct EcsDescribeEipAddressesLockReasonType {
  std::string lock_reason;
};
struct EcsDescribeEipAddressesEipAddressType {
  std::vector<EcsDescribeEipAddressesLockReasonType> operation_locks;
  std::string region_id;
  std::string ip_address;
  std::string allocation_id;
  std::string status;
  std::string instance_id;
  std::string bandwidth;
  std::string internet_charge_type;
  std::string allocation_time;
  std::string instance_type;
};
struct EcsDescribeEipAddressesResponseType {
  std::vector<EcsDescribeEipAddressesEipAddressType> eip_addresses;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
