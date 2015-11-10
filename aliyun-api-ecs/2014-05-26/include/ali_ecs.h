#ifndef ALI_ECSH
#define ALI_ECSH
#include <string>
#include "ali_ecs_add_tags_types.h"
#include "ali_ecs_allocate_eip_address_types.h"
#include "ali_ecs_allocate_public_ip_address_types.h"
#include "ali_ecs_associate_eip_address_types.h"
#include "ali_ecs_associate_ha_vip_types.h"
#include "ali_ecs_attach_disk_types.h"
#include "ali_ecs_authorize_security_group_types.h"
#include "ali_ecs_authorize_security_group_egress_types.h"
#include "ali_ecs_cancel_copy_image_types.h"
#include "ali_ecs_check_auto_snapshot_policy_types.h"
#include "ali_ecs_check_disk_enable_auto_snapshot_validation_types.h"
#include "ali_ecs_copy_image_types.h"
#include "ali_ecs_create_disk_types.h"
#include "ali_ecs_create_ha_vip_types.h"
#include "ali_ecs_create_image_types.h"
#include "ali_ecs_create_instance_types.h"
#include "ali_ecs_create_route_entry_types.h"
#include "ali_ecs_create_security_group_types.h"
#include "ali_ecs_create_snapshot_types.h"
#include "ali_ecs_create_vpc_types.h"
#include "ali_ecs_create_vswitch_types.h"
#include "ali_ecs_delete_disk_types.h"
#include "ali_ecs_delete_ha_vip_types.h"
#include "ali_ecs_delete_image_types.h"
#include "ali_ecs_delete_instance_types.h"
#include "ali_ecs_delete_route_entry_types.h"
#include "ali_ecs_delete_security_group_types.h"
#include "ali_ecs_delete_snapshot_types.h"
#include "ali_ecs_delete_vpc_types.h"
#include "ali_ecs_delete_vswitch_types.h"
#include "ali_ecs_describe_auto_snapshot_policy_types.h"
#include "ali_ecs_describe_disk_monitor_data_types.h"
#include "ali_ecs_describe_disks_types.h"
#include "ali_ecs_describe_eip_addresses_types.h"
#include "ali_ecs_describe_eip_monitor_data_types.h"
#include "ali_ecs_describe_ha_vips_types.h"
#include "ali_ecs_describe_images_types.h"
#include "ali_ecs_describe_image_share_permission_types.h"
#include "ali_ecs_describe_instance_attribute_types.h"
#include "ali_ecs_describe_instance_monitor_data_types.h"
#include "ali_ecs_describe_instances_types.h"
#include "ali_ecs_describe_instance_status_types.h"
#include "ali_ecs_describe_instance_types_types.h"
#include "ali_ecs_describe_instance_vnc_passwd_types.h"
#include "ali_ecs_describe_instance_vnc_url_types.h"
#include "ali_ecs_describe_limitation_types.h"
#include "ali_ecs_describe_regions_types.h"
#include "ali_ecs_describe_resource_by_tags_types.h"
#include "ali_ecs_describe_route_tables_types.h"
#include "ali_ecs_describe_security_group_attribute_types.h"
#include "ali_ecs_describe_security_groups_types.h"
#include "ali_ecs_describe_snapshots_types.h"
#include "ali_ecs_describe_tag_keys_types.h"
#include "ali_ecs_describe_tags_types.h"
#include "ali_ecs_describe_vpcs_types.h"
#include "ali_ecs_describe_vrouters_types.h"
#include "ali_ecs_describe_vswitches_types.h"
#include "ali_ecs_describe_zones_types.h"
#include "ali_ecs_detach_disk_types.h"
#include "ali_ecs_join_security_group_types.h"
#include "ali_ecs_leave_security_group_types.h"
#include "ali_ecs_modify_auto_snapshot_policy_types.h"
#include "ali_ecs_modify_disk_attribute_types.h"
#include "ali_ecs_modify_eip_address_attribute_types.h"
#include "ali_ecs_modify_ha_vip_attribute_types.h"
#include "ali_ecs_modify_image_attribute_types.h"
#include "ali_ecs_modify_image_share_group_permission_types.h"
#include "ali_ecs_modify_image_share_permission_types.h"
#include "ali_ecs_modify_instance_attribute_types.h"
#include "ali_ecs_modify_instance_network_spec_types.h"
#include "ali_ecs_modify_instance_vnc_passwd_types.h"
#include "ali_ecs_modify_instance_vpc_attribute_types.h"
#include "ali_ecs_modify_security_group_attribute_types.h"
#include "ali_ecs_modify_snapshot_attribute_types.h"
#include "ali_ecs_modify_vpc_attribute_types.h"
#include "ali_ecs_modify_vrouter_attribute_types.h"
#include "ali_ecs_modify_vswitch_attribute_types.h"
#include "ali_ecs_reboot_instance_types.h"
#include "ali_ecs_re_init_disk_types.h"
#include "ali_ecs_release_eip_address_types.h"
#include "ali_ecs_remove_tags_types.h"
#include "ali_ecs_renew_instance_types.h"
#include "ali_ecs_replace_system_disk_types.h"
#include "ali_ecs_reset_disk_types.h"
#include "ali_ecs_resize_disk_types.h"
#include "ali_ecs_revoke_security_group_types.h"
#include "ali_ecs_revoke_security_group_egress_types.h"
#include "ali_ecs_start_instance_types.h"
#include "ali_ecs_stop_instance_types.h"
#include "ali_ecs_unassociate_eip_address_types.h"
#include "ali_ecs_unassociate_ha_vip_types.h"
namespace aliyun {
struct EcsErrorInfo {
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
  int AddTags(const EcsAddTagsRequestType& req,
          EcsAddTagsResponseType* resp,
          EcsErrorInfo* error_info);

  int AllocateEipAddress(const EcsAllocateEipAddressRequestType& req,
          EcsAllocateEipAddressResponseType* resp,
          EcsErrorInfo* error_info);

  int AllocatePublicIpAddress(const EcsAllocatePublicIpAddressRequestType& req,
          EcsAllocatePublicIpAddressResponseType* resp,
          EcsErrorInfo* error_info);

  int AssociateEipAddress(const EcsAssociateEipAddressRequestType& req,
          EcsAssociateEipAddressResponseType* resp,
          EcsErrorInfo* error_info);

  int AssociateHaVip(const EcsAssociateHaVipRequestType& req,
          EcsAssociateHaVipResponseType* resp,
          EcsErrorInfo* error_info);

  int AttachDisk(const EcsAttachDiskRequestType& req,
          EcsAttachDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int AuthorizeSecurityGroup(const EcsAuthorizeSecurityGroupRequestType& req,
          EcsAuthorizeSecurityGroupResponseType* resp,
          EcsErrorInfo* error_info);

  int AuthorizeSecurityGroupEgress(const EcsAuthorizeSecurityGroupEgressRequestType& req,
          EcsAuthorizeSecurityGroupEgressResponseType* resp,
          EcsErrorInfo* error_info);

  int CancelCopyImage(const EcsCancelCopyImageRequestType& req,
          EcsCancelCopyImageResponseType* resp,
          EcsErrorInfo* error_info);

  int CheckAutoSnapshotPolicy(const EcsCheckAutoSnapshotPolicyRequestType& req,
          EcsCheckAutoSnapshotPolicyResponseType* resp,
          EcsErrorInfo* error_info);

  int CheckDiskEnableAutoSnapshotValidation(const EcsCheckDiskEnableAutoSnapshotValidationRequestType& req,
          EcsCheckDiskEnableAutoSnapshotValidationResponseType* resp,
          EcsErrorInfo* error_info);

  int CopyImage(const EcsCopyImageRequestType& req,
          EcsCopyImageResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateDisk(const EcsCreateDiskRequestType& req,
          EcsCreateDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateHaVip(const EcsCreateHaVipRequestType& req,
          EcsCreateHaVipResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateImage(const EcsCreateImageRequestType& req,
          EcsCreateImageResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateInstance(const EcsCreateInstanceRequestType& req,
          EcsCreateInstanceResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateRouteEntry(const EcsCreateRouteEntryRequestType& req,
          EcsCreateRouteEntryResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateSecurityGroup(const EcsCreateSecurityGroupRequestType& req,
          EcsCreateSecurityGroupResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateSnapshot(const EcsCreateSnapshotRequestType& req,
          EcsCreateSnapshotResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateVpc(const EcsCreateVpcRequestType& req,
          EcsCreateVpcResponseType* resp,
          EcsErrorInfo* error_info);

  int CreateVSwitch(const EcsCreateVSwitchRequestType& req,
          EcsCreateVSwitchResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteDisk(const EcsDeleteDiskRequestType& req,
          EcsDeleteDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteHaVip(const EcsDeleteHaVipRequestType& req,
          EcsDeleteHaVipResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteImage(const EcsDeleteImageRequestType& req,
          EcsDeleteImageResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteInstance(const EcsDeleteInstanceRequestType& req,
          EcsDeleteInstanceResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteRouteEntry(const EcsDeleteRouteEntryRequestType& req,
          EcsDeleteRouteEntryResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteSecurityGroup(const EcsDeleteSecurityGroupRequestType& req,
          EcsDeleteSecurityGroupResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteSnapshot(const EcsDeleteSnapshotRequestType& req,
          EcsDeleteSnapshotResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteVpc(const EcsDeleteVpcRequestType& req,
          EcsDeleteVpcResponseType* resp,
          EcsErrorInfo* error_info);

  int DeleteVSwitch(const EcsDeleteVSwitchRequestType& req,
          EcsDeleteVSwitchResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeAutoSnapshotPolicy(const EcsDescribeAutoSnapshotPolicyRequestType& req,
          EcsDescribeAutoSnapshotPolicyResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeDiskMonitorData(const EcsDescribeDiskMonitorDataRequestType& req,
          EcsDescribeDiskMonitorDataResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeDisks(const EcsDescribeDisksRequestType& req,
          EcsDescribeDisksResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeEipAddresses(const EcsDescribeEipAddressesRequestType& req,
          EcsDescribeEipAddressesResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeEipMonitorData(const EcsDescribeEipMonitorDataRequestType& req,
          EcsDescribeEipMonitorDataResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeHaVips(const EcsDescribeHaVipsRequestType& req,
          EcsDescribeHaVipsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeImages(const EcsDescribeImagesRequestType& req,
          EcsDescribeImagesResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeImageSharePermission(const EcsDescribeImageSharePermissionRequestType& req,
          EcsDescribeImageSharePermissionResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstanceAttribute(const EcsDescribeInstanceAttributeRequestType& req,
          EcsDescribeInstanceAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstanceMonitorData(const EcsDescribeInstanceMonitorDataRequestType& req,
          EcsDescribeInstanceMonitorDataResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstances(const EcsDescribeInstancesRequestType& req,
          EcsDescribeInstancesResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstanceStatus(const EcsDescribeInstanceStatusRequestType& req,
          EcsDescribeInstanceStatusResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstanceTypes(const EcsDescribeInstanceTypesRequestType& req,
          EcsDescribeInstanceTypesResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstanceVncPasswd(const EcsDescribeInstanceVncPasswdRequestType& req,
          EcsDescribeInstanceVncPasswdResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeInstanceVncUrl(const EcsDescribeInstanceVncUrlRequestType& req,
          EcsDescribeInstanceVncUrlResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeLimitation(const EcsDescribeLimitationRequestType& req,
          EcsDescribeLimitationResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeRegions(const EcsDescribeRegionsRequestType& req,
          EcsDescribeRegionsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeResourceByTags(const EcsDescribeResourceByTagsRequestType& req,
          EcsDescribeResourceByTagsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeRouteTables(const EcsDescribeRouteTablesRequestType& req,
          EcsDescribeRouteTablesResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeSecurityGroupAttribute(const EcsDescribeSecurityGroupAttributeRequestType& req,
          EcsDescribeSecurityGroupAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeSecurityGroups(const EcsDescribeSecurityGroupsRequestType& req,
          EcsDescribeSecurityGroupsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeSnapshots(const EcsDescribeSnapshotsRequestType& req,
          EcsDescribeSnapshotsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeTagKeys(const EcsDescribeTagKeysRequestType& req,
          EcsDescribeTagKeysResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeTags(const EcsDescribeTagsRequestType& req,
          EcsDescribeTagsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeVpcs(const EcsDescribeVpcsRequestType& req,
          EcsDescribeVpcsResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeVRouters(const EcsDescribeVRoutersRequestType& req,
          EcsDescribeVRoutersResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeVSwitches(const EcsDescribeVSwitchesRequestType& req,
          EcsDescribeVSwitchesResponseType* resp,
          EcsErrorInfo* error_info);

  int DescribeZones(const EcsDescribeZonesRequestType& req,
          EcsDescribeZonesResponseType* resp,
          EcsErrorInfo* error_info);

  int DetachDisk(const EcsDetachDiskRequestType& req,
          EcsDetachDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int JoinSecurityGroup(const EcsJoinSecurityGroupRequestType& req,
          EcsJoinSecurityGroupResponseType* resp,
          EcsErrorInfo* error_info);

  int LeaveSecurityGroup(const EcsLeaveSecurityGroupRequestType& req,
          EcsLeaveSecurityGroupResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyAutoSnapshotPolicy(const EcsModifyAutoSnapshotPolicyRequestType& req,
          EcsModifyAutoSnapshotPolicyResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyDiskAttribute(const EcsModifyDiskAttributeRequestType& req,
          EcsModifyDiskAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyEipAddressAttribute(const EcsModifyEipAddressAttributeRequestType& req,
          EcsModifyEipAddressAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyHaVipAttribute(const EcsModifyHaVipAttributeRequestType& req,
          EcsModifyHaVipAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyImageAttribute(const EcsModifyImageAttributeRequestType& req,
          EcsModifyImageAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyImageShareGroupPermission(const EcsModifyImageShareGroupPermissionRequestType& req,
          EcsModifyImageShareGroupPermissionResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyImageSharePermission(const EcsModifyImageSharePermissionRequestType& req,
          EcsModifyImageSharePermissionResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyInstanceAttribute(const EcsModifyInstanceAttributeRequestType& req,
          EcsModifyInstanceAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyInstanceNetworkSpec(const EcsModifyInstanceNetworkSpecRequestType& req,
          EcsModifyInstanceNetworkSpecResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyInstanceVncPasswd(const EcsModifyInstanceVncPasswdRequestType& req,
          EcsModifyInstanceVncPasswdResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyInstanceVpcAttribute(const EcsModifyInstanceVpcAttributeRequestType& req,
          EcsModifyInstanceVpcAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifySecurityGroupAttribute(const EcsModifySecurityGroupAttributeRequestType& req,
          EcsModifySecurityGroupAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifySnapshotAttribute(const EcsModifySnapshotAttributeRequestType& req,
          EcsModifySnapshotAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyVpcAttribute(const EcsModifyVpcAttributeRequestType& req,
          EcsModifyVpcAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyVRouterAttribute(const EcsModifyVRouterAttributeRequestType& req,
          EcsModifyVRouterAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int ModifyVSwitchAttribute(const EcsModifyVSwitchAttributeRequestType& req,
          EcsModifyVSwitchAttributeResponseType* resp,
          EcsErrorInfo* error_info);

  int RebootInstance(const EcsRebootInstanceRequestType& req,
          EcsRebootInstanceResponseType* resp,
          EcsErrorInfo* error_info);

  int ReInitDisk(const EcsReInitDiskRequestType& req,
          EcsReInitDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int ReleaseEipAddress(const EcsReleaseEipAddressRequestType& req,
          EcsReleaseEipAddressResponseType* resp,
          EcsErrorInfo* error_info);

  int RemoveTags(const EcsRemoveTagsRequestType& req,
          EcsRemoveTagsResponseType* resp,
          EcsErrorInfo* error_info);

  int RenewInstance(const EcsRenewInstanceRequestType& req,
          EcsRenewInstanceResponseType* resp,
          EcsErrorInfo* error_info);

  int ReplaceSystemDisk(const EcsReplaceSystemDiskRequestType& req,
          EcsReplaceSystemDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int ResetDisk(const EcsResetDiskRequestType& req,
          EcsResetDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int ResizeDisk(const EcsResizeDiskRequestType& req,
          EcsResizeDiskResponseType* resp,
          EcsErrorInfo* error_info);

  int RevokeSecurityGroup(const EcsRevokeSecurityGroupRequestType& req,
          EcsRevokeSecurityGroupResponseType* resp,
          EcsErrorInfo* error_info);

  int RevokeSecurityGroupEgress(const EcsRevokeSecurityGroupEgressRequestType& req,
          EcsRevokeSecurityGroupEgressResponseType* resp,
          EcsErrorInfo* error_info);

  int StartInstance(const EcsStartInstanceRequestType& req,
          EcsStartInstanceResponseType* resp,
          EcsErrorInfo* error_info);

  int StopInstance(const EcsStopInstanceRequestType& req,
          EcsStopInstanceResponseType* resp,
          EcsErrorInfo* error_info);

  int UnassociateEipAddress(const EcsUnassociateEipAddressRequestType& req,
          EcsUnassociateEipAddressResponseType* resp,
          EcsErrorInfo* error_info);

  int UnassociateHaVip(const EcsUnassociateHaVipRequestType& req,
          EcsUnassociateHaVipResponseType* resp,
          EcsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
