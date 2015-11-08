#ifndef ALI_ECSH
#define ALI_ECSH
#include <string>
#include "ali_add_tags_types.h"
#include "ali_allocate_eip_address_types.h"
#include "ali_allocate_public_ip_address_types.h"
#include "ali_associate_eip_address_types.h"
#include "ali_associate_ha_vip_types.h"
#include "ali_attach_disk_types.h"
#include "ali_authorize_security_group_types.h"
#include "ali_authorize_security_group_egress_types.h"
#include "ali_cancel_copy_image_types.h"
#include "ali_check_auto_snapshot_policy_types.h"
#include "ali_check_disk_enable_auto_snapshot_validation_types.h"
#include "ali_copy_image_types.h"
#include "ali_create_disk_types.h"
#include "ali_create_ha_vip_types.h"
#include "ali_create_image_types.h"
#include "ali_create_instance_types.h"
#include "ali_create_route_entry_types.h"
#include "ali_create_security_group_types.h"
#include "ali_create_snapshot_types.h"
#include "ali_create_vpc_types.h"
#include "ali_create_vswitch_types.h"
#include "ali_delete_disk_types.h"
#include "ali_delete_ha_vip_types.h"
#include "ali_delete_image_types.h"
#include "ali_delete_instance_types.h"
#include "ali_delete_route_entry_types.h"
#include "ali_delete_security_group_types.h"
#include "ali_delete_snapshot_types.h"
#include "ali_delete_vpc_types.h"
#include "ali_delete_vswitch_types.h"
#include "ali_describe_auto_snapshot_policy_types.h"
#include "ali_describe_disk_monitor_data_types.h"
#include "ali_describe_disks_types.h"
#include "ali_describe_eip_addresses_types.h"
#include "ali_describe_eip_monitor_data_types.h"
#include "ali_describe_ha_vips_types.h"
#include "ali_describe_images_types.h"
#include "ali_describe_image_share_permission_types.h"
#include "ali_describe_instance_attribute_types.h"
#include "ali_describe_instance_monitor_data_types.h"
#include "ali_describe_instances_types.h"
#include "ali_describe_instance_status_types.h"
#include "ali_describe_instance_types_types.h"
#include "ali_describe_instance_vnc_passwd_types.h"
#include "ali_describe_instance_vnc_url_types.h"
#include "ali_describe_limitation_types.h"
#include "ali_describe_regions_types.h"
#include "ali_describe_resource_by_tags_types.h"
#include "ali_describe_route_tables_types.h"
#include "ali_describe_security_group_attribute_types.h"
#include "ali_describe_security_groups_types.h"
#include "ali_describe_snapshots_types.h"
#include "ali_describe_tag_keys_types.h"
#include "ali_describe_tags_types.h"
#include "ali_describe_vpcs_types.h"
#include "ali_describe_vrouters_types.h"
#include "ali_describe_vswitches_types.h"
#include "ali_describe_zones_types.h"
#include "ali_detach_disk_types.h"
#include "ali_join_security_group_types.h"
#include "ali_leave_security_group_types.h"
#include "ali_modify_auto_snapshot_policy_types.h"
#include "ali_modify_disk_attribute_types.h"
#include "ali_modify_eip_address_attribute_types.h"
#include "ali_modify_ha_vip_attribute_types.h"
#include "ali_modify_image_attribute_types.h"
#include "ali_modify_image_share_group_permission_types.h"
#include "ali_modify_image_share_permission_types.h"
#include "ali_modify_instance_attribute_types.h"
#include "ali_modify_instance_network_spec_types.h"
#include "ali_modify_instance_vnc_passwd_types.h"
#include "ali_modify_instance_vpc_attribute_types.h"
#include "ali_modify_security_group_attribute_types.h"
#include "ali_modify_snapshot_attribute_types.h"
#include "ali_modify_vpc_attribute_types.h"
#include "ali_modify_vrouter_attribute_types.h"
#include "ali_modify_vswitch_attribute_types.h"
#include "ali_reboot_instance_types.h"
#include "ali_re_init_disk_types.h"
#include "ali_release_eip_address_types.h"
#include "ali_remove_tags_types.h"
#include "ali_renew_instance_types.h"
#include "ali_replace_system_disk_types.h"
#include "ali_reset_disk_types.h"
#include "ali_resize_disk_types.h"
#include "ali_revoke_security_group_types.h"
#include "ali_revoke_security_group_egress_types.h"
#include "ali_start_instance_types.h"
#include "ali_stop_instance_types.h"
#include "ali_unassociate_eip_address_types.h"
#include "ali_unassociate_ha_vip_types.h"
namespace aliyun {
struct AliEcsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ecs {
public:
  static Ecs* CreateEcsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ecs(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-05-26"),
  host_(host) {}
public:
  int AddTags(const AddTagsRequestType& req,
          AddTagsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AllocateEipAddress(const AllocateEipAddressRequestType& req,
          AllocateEipAddressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AllocatePublicIpAddress(const AllocatePublicIpAddressRequestType& req,
          AllocatePublicIpAddressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AssociateEipAddress(const AssociateEipAddressRequestType& req,
          AssociateEipAddressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AssociateHaVip(const AssociateHaVipRequestType& req,
          AssociateHaVipResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AttachDisk(const AttachDiskRequestType& req,
          AttachDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AuthorizeSecurityGroup(const AuthorizeSecurityGroupRequestType& req,
          AuthorizeSecurityGroupResponseType* resp,
          AliEcsErrorInfo* error_info);

  int AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequestType& req,
          AuthorizeSecurityGroupEgressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CancelCopyImage(const CancelCopyImageRequestType& req,
          CancelCopyImageResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CheckAutoSnapshotPolicy(const CheckAutoSnapshotPolicyRequestType& req,
          CheckAutoSnapshotPolicyResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CheckDiskEnableAutoSnapshotValidation(const CheckDiskEnableAutoSnapshotValidationRequestType& req,
          CheckDiskEnableAutoSnapshotValidationResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CopyImage(const CopyImageRequestType& req,
          CopyImageResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateDisk(const CreateDiskRequestType& req,
          CreateDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateHaVip(const CreateHaVipRequestType& req,
          CreateHaVipResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateImage(const CreateImageRequestType& req,
          CreateImageResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateInstance(const CreateInstanceRequestType& req,
          CreateInstanceResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateRouteEntry(const CreateRouteEntryRequestType& req,
          CreateRouteEntryResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateSecurityGroup(const CreateSecurityGroupRequestType& req,
          CreateSecurityGroupResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateSnapshot(const CreateSnapshotRequestType& req,
          CreateSnapshotResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateVpc(const CreateVpcRequestType& req,
          CreateVpcResponseType* resp,
          AliEcsErrorInfo* error_info);

  int CreateVSwitch(const CreateVSwitchRequestType& req,
          CreateVSwitchResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteDisk(const DeleteDiskRequestType& req,
          DeleteDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteHaVip(const DeleteHaVipRequestType& req,
          DeleteHaVipResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteImage(const DeleteImageRequestType& req,
          DeleteImageResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteInstance(const DeleteInstanceRequestType& req,
          DeleteInstanceResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteRouteEntry(const DeleteRouteEntryRequestType& req,
          DeleteRouteEntryResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteSecurityGroup(const DeleteSecurityGroupRequestType& req,
          DeleteSecurityGroupResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteSnapshot(const DeleteSnapshotRequestType& req,
          DeleteSnapshotResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteVpc(const DeleteVpcRequestType& req,
          DeleteVpcResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DeleteVSwitch(const DeleteVSwitchRequestType& req,
          DeleteVSwitchResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeAutoSnapshotPolicy(const DescribeAutoSnapshotPolicyRequestType& req,
          DescribeAutoSnapshotPolicyResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeDiskMonitorData(const DescribeDiskMonitorDataRequestType& req,
          DescribeDiskMonitorDataResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeDisks(const DescribeDisksRequestType& req,
          DescribeDisksResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeEipAddresses(const DescribeEipAddressesRequestType& req,
          DescribeEipAddressesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeEipMonitorData(const DescribeEipMonitorDataRequestType& req,
          DescribeEipMonitorDataResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeHaVips(const DescribeHaVipsRequestType& req,
          DescribeHaVipsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeImages(const DescribeImagesRequestType& req,
          DescribeImagesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeImageSharePermission(const DescribeImageSharePermissionRequestType& req,
          DescribeImageSharePermissionResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstanceAttribute(const DescribeInstanceAttributeRequestType& req,
          DescribeInstanceAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstanceMonitorData(const DescribeInstanceMonitorDataRequestType& req,
          DescribeInstanceMonitorDataResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstances(const DescribeInstancesRequestType& req,
          DescribeInstancesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstanceStatus(const DescribeInstanceStatusRequestType& req,
          DescribeInstanceStatusResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstanceTypes(const DescribeInstanceTypesRequestType& req,
          DescribeInstanceTypesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstanceVncPasswd(const DescribeInstanceVncPasswdRequestType& req,
          DescribeInstanceVncPasswdResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeInstanceVncUrl(const DescribeInstanceVncUrlRequestType& req,
          DescribeInstanceVncUrlResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeLimitation(const DescribeLimitationRequestType& req,
          DescribeLimitationResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeRegions(const DescribeRegionsRequestType& req,
          DescribeRegionsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeResourceByTags(const DescribeResourceByTagsRequestType& req,
          DescribeResourceByTagsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeRouteTables(const DescribeRouteTablesRequestType& req,
          DescribeRouteTablesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequestType& req,
          DescribeSecurityGroupAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeSecurityGroups(const DescribeSecurityGroupsRequestType& req,
          DescribeSecurityGroupsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeSnapshots(const DescribeSnapshotsRequestType& req,
          DescribeSnapshotsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeTagKeys(const DescribeTagKeysRequestType& req,
          DescribeTagKeysResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeTags(const DescribeTagsRequestType& req,
          DescribeTagsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeVpcs(const DescribeVpcsRequestType& req,
          DescribeVpcsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeVRouters(const DescribeVRoutersRequestType& req,
          DescribeVRoutersResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeVSwitches(const DescribeVSwitchesRequestType& req,
          DescribeVSwitchesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DescribeZones(const DescribeZonesRequestType& req,
          DescribeZonesResponseType* resp,
          AliEcsErrorInfo* error_info);

  int DetachDisk(const DetachDiskRequestType& req,
          DetachDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int JoinSecurityGroup(const JoinSecurityGroupRequestType& req,
          JoinSecurityGroupResponseType* resp,
          AliEcsErrorInfo* error_info);

  int LeaveSecurityGroup(const LeaveSecurityGroupRequestType& req,
          LeaveSecurityGroupResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequestType& req,
          ModifyAutoSnapshotPolicyResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyDiskAttribute(const ModifyDiskAttributeRequestType& req,
          ModifyDiskAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyEipAddressAttribute(const ModifyEipAddressAttributeRequestType& req,
          ModifyEipAddressAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyHaVipAttribute(const ModifyHaVipAttributeRequestType& req,
          ModifyHaVipAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyImageAttribute(const ModifyImageAttributeRequestType& req,
          ModifyImageAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyImageShareGroupPermission(const ModifyImageShareGroupPermissionRequestType& req,
          ModifyImageShareGroupPermissionResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyImageSharePermission(const ModifyImageSharePermissionRequestType& req,
          ModifyImageSharePermissionResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyInstanceAttribute(const ModifyInstanceAttributeRequestType& req,
          ModifyInstanceAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyInstanceNetworkSpec(const ModifyInstanceNetworkSpecRequestType& req,
          ModifyInstanceNetworkSpecResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyInstanceVncPasswd(const ModifyInstanceVncPasswdRequestType& req,
          ModifyInstanceVncPasswdResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyInstanceVpcAttribute(const ModifyInstanceVpcAttributeRequestType& req,
          ModifyInstanceVpcAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequestType& req,
          ModifySecurityGroupAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifySnapshotAttribute(const ModifySnapshotAttributeRequestType& req,
          ModifySnapshotAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyVpcAttribute(const ModifyVpcAttributeRequestType& req,
          ModifyVpcAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyVRouterAttribute(const ModifyVRouterAttributeRequestType& req,
          ModifyVRouterAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ModifyVSwitchAttribute(const ModifyVSwitchAttributeRequestType& req,
          ModifyVSwitchAttributeResponseType* resp,
          AliEcsErrorInfo* error_info);

  int RebootInstance(const RebootInstanceRequestType& req,
          RebootInstanceResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ReInitDisk(const ReInitDiskRequestType& req,
          ReInitDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ReleaseEipAddress(const ReleaseEipAddressRequestType& req,
          ReleaseEipAddressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int RemoveTags(const RemoveTagsRequestType& req,
          RemoveTagsResponseType* resp,
          AliEcsErrorInfo* error_info);

  int RenewInstance(const RenewInstanceRequestType& req,
          RenewInstanceResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ReplaceSystemDisk(const ReplaceSystemDiskRequestType& req,
          ReplaceSystemDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ResetDisk(const ResetDiskRequestType& req,
          ResetDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int ResizeDisk(const ResizeDiskRequestType& req,
          ResizeDiskResponseType* resp,
          AliEcsErrorInfo* error_info);

  int RevokeSecurityGroup(const RevokeSecurityGroupRequestType& req,
          RevokeSecurityGroupResponseType* resp,
          AliEcsErrorInfo* error_info);

  int RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequestType& req,
          RevokeSecurityGroupEgressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int StartInstance(const StartInstanceRequestType& req,
          StartInstanceResponseType* resp,
          AliEcsErrorInfo* error_info);

  int StopInstance(const StopInstanceRequestType& req,
          StopInstanceResponseType* resp,
          AliEcsErrorInfo* error_info);

  int UnassociateEipAddress(const UnassociateEipAddressRequestType& req,
          UnassociateEipAddressResponseType* resp,
          AliEcsErrorInfo* error_info);

  int UnassociateHaVip(const UnassociateHaVipRequestType& req,
          UnassociateHaVipResponseType* resp,
          AliEcsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
