#include "ali_ecs.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_tags_response = "{}";
static int test_add_tags() {
  EcsAddTagsRequestType req;
  EcsAddTagsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_tags_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.resource_type = "ResourceType";
  req.resource_id = "ResourceId";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->AddTags(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_allocate_eip_address_response = "{"
"  \"AllocationId\": \"AllocationId\","
"  \"EipAddress\": \"EipAddress\""
"}";
static int test_allocate_eip_address() {
  EcsAllocateEipAddressRequestType req;
  EcsAllocateEipAddressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_allocate_eip_address_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.bandwidth = "Bandwidth";
  req.internet_charge_type = "InternetChargeType";
  req.owner_account = "OwnerAccount";
  int ret = ecs->AllocateEipAddress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_allocate_public_ip_address_response = "{"
"  \"IpAddress\": \"IpAddress\""
"}";
static int test_allocate_public_ip_address() {
  EcsAllocatePublicIpAddressRequestType req;
  EcsAllocatePublicIpAddressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_allocate_public_ip_address_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.ip_address = "IpAddress";
  req.vlan_id = "VlanId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->AllocatePublicIpAddress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_associate_eip_address_response = "{}";
static int test_associate_eip_address() {
  EcsAssociateEipAddressRequestType req;
  EcsAssociateEipAddressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_associate_eip_address_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.allocation_id = "AllocationId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  req.instance_type = "InstanceType";
  int ret = ecs->AssociateEipAddress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_associate_ha_vip_response = "{}";
static int test_associate_ha_vip() {
  EcsAssociateHaVipRequestType req;
  EcsAssociateHaVipResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_associate_ha_vip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.client_token = "ClientToken";
  req.ha_vip_id = "HaVipId";
  req.instance_id = "InstanceId";
  int ret = ecs->AssociateHaVip(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_attach_disk_response = "{}";
static int test_attach_disk() {
  EcsAttachDiskRequestType req;
  EcsAttachDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_attach_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.disk_id = "DiskId";
  req.device = "Device";
  req.delete_with_instance = "DeleteWithInstance";
  req.owner_account = "OwnerAccount";
  int ret = ecs->AttachDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_authorize_security_group_response = "{}";
static int test_authorize_security_group() {
  EcsAuthorizeSecurityGroupRequestType req;
  EcsAuthorizeSecurityGroupResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_authorize_security_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.ip_protocol = "IpProtocol";
  req.port_range = "PortRange";
  req.source_group_id = "SourceGroupId";
  req.source_group_owner_account = "SourceGroupOwnerAccount";
  req.source_cidr_ip = "SourceCidrIp";
  req.policy = "Policy";
  req.priority = "Priority";
  req.nic_type = "NicType";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->AuthorizeSecurityGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_authorize_security_group_egress_response = "{}";
static int test_authorize_security_group_egress() {
  EcsAuthorizeSecurityGroupEgressRequestType req;
  EcsAuthorizeSecurityGroupEgressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_authorize_security_group_egress_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.ip_protocol = "IpProtocol";
  req.port_range = "PortRange";
  req.dest_group_id = "DestGroupId";
  req.dest_group_owner_account = "DestGroupOwnerAccount";
  req.dest_cidr_ip = "DestCidrIp";
  req.policy = "Policy";
  req.priority = "Priority";
  req.nic_type = "NicType";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->AuthorizeSecurityGroupEgress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_cancel_copy_image_response = "{}";
static int test_cancel_copy_image() {
  EcsCancelCopyImageRequestType req;
  EcsCancelCopyImageResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_cancel_copy_image_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CancelCopyImage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_check_auto_snapshot_policy_response = "{"
"  \"AutoSnapshotOccupation\": 0,"
"  \"IsPermittedModify\": \"IsPermittedModify\""
"}";
static int test_check_auto_snapshot_policy() {
  EcsCheckAutoSnapshotPolicyRequestType req;
  EcsCheckAutoSnapshotPolicyResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_check_auto_snapshot_policy_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.system_disk_policy_enabled = "SystemDiskPolicyEnabled";
  req.system_disk_policy_time_period = "SystemDiskPolicyTimePeriod";
  req.system_disk_policy_retention_days = "SystemDiskPolicyRetentionDays";
  req.system_disk_policy_retention_last_week = "SystemDiskPolicyRetentionLastWeek";
  req.data_disk_policy_enabled = "DataDiskPolicyEnabled";
  req.data_disk_policy_time_period = "DataDiskPolicyTimePeriod";
  req.data_disk_policy_retention_days = "DataDiskPolicyRetentionDays";
  req.data_disk_policy_retention_last_week = "DataDiskPolicyRetentionLastWeek";
  int ret = ecs->CheckAutoSnapshotPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_check_disk_enable_auto_snapshot_validation_response = "{"
"  \"IsPermitted\": \"IsPermitted\","
"  \"AutoSnapshotOccupation\": 0"
"}";
static int test_check_disk_enable_auto_snapshot_validation() {
  EcsCheckDiskEnableAutoSnapshotValidationRequestType req;
  EcsCheckDiskEnableAutoSnapshotValidationResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_check_disk_enable_auto_snapshot_validation_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.disk_ids = "DiskIds";
  int ret = ecs->CheckDiskEnableAutoSnapshotValidation(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_copy_image_response = "{"
"  \"ImageId\": \"ImageId\""
"}";
static int test_copy_image() {
  EcsCopyImageRequestType req;
  EcsCopyImageResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_copy_image_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.destination_image_name = "DestinationImageName";
  req.destination_description = "DestinationDescription";
  req.image_id = "ImageId";
  req.destination_region_id = "DestinationRegionId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CopyImage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_disk_response = "{"
"  \"DiskId\": \"DiskId\""
"}";
static int test_create_disk() {
  EcsCreateDiskRequestType req;
  EcsCreateDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.zone_id = "ZoneId";
  req.snapshot_id = "SnapshotId";
  req.disk_name = "DiskName";
  req.size = "Size";
  req.disk_category = "DiskCategory";
  req.description = "Description";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CreateDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_ha_vip_response = "{"
"  \"HaVipId\": \"HaVipId\""
"}";
static int test_create_ha_vip() {
  EcsCreateHaVipRequestType req;
  EcsCreateHaVipResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_ha_vip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.client_token = "ClientToken";
  req.vswitch_id = "VSwitchId";
  req.ip_address = "IpAddress";
  req.description = "Description";
  int ret = ecs->CreateHaVip(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_image_response = "{"
"  \"ImageId\": \"ImageId\""
"}";
static int test_create_image() {
  EcsCreateImageRequestType req;
  EcsCreateImageResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_image_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.snapshot_id = "SnapshotId";
  req.image_name = "ImageName";
  req.image_version = "ImageVersion";
  req.description = "Description";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CreateImage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_instance_response = "{"
"  \"InstanceId\": \"InstanceId\""
"}";
static int test_create_instance() {
  EcsCreateInstanceRequestType req;
  EcsCreateInstanceResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.instance_type = "InstanceType";
  req.security_group_id = "SecurityGroupId";
  req.instance_name = "InstanceName";
  req.internet_charge_type = "InternetChargeType";
  req.internet_max_bandwidth_in = "InternetMaxBandwidthIn";
  req.internet_max_bandwidth_out = "InternetMaxBandwidthOut";
  req.host_name = "HostName";
  req.password = "Password";
  req.zone_id = "ZoneId";
  req.cluster_id = "ClusterId";
  req.client_token = "ClientToken";
  req.vlan_id = "VlanId";
  req.inner_ip_address = "InnerIpAddress";
  req.system_disk_category = "SystemDisk.Category";
  req.system_disk_disk_name = "SystemDisk.DiskName";
  req.system_disk_description = "SystemDisk.Description";
  req.data_disk1_size = "DataDisk.1.Size";
  req.data_disk1_category = "DataDisk.1.Category";
  req.data_disk1_snapshot_id = "DataDisk.1.SnapshotId";
  req.data_disk1_disk_name = "DataDisk.1.DiskName";
  req.data_disk1_description = "DataDisk.1.Description";
  req.data_disk1_device = "DataDisk.1.Device";
  req.data_disk1_delete_with_instance = "DataDisk.1.DeleteWithInstance";
  req.data_disk2_size = "DataDisk.2.Size";
  req.data_disk2_category = "DataDisk.2.Category";
  req.data_disk2_snapshot_id = "DataDisk.2.SnapshotId";
  req.data_disk2_disk_name = "DataDisk.2.DiskName";
  req.data_disk2_description = "DataDisk.2.Description";
  req.data_disk2_device = "DataDisk.2.Device";
  req.data_disk2_delete_with_instance = "DataDisk.2.DeleteWithInstance";
  req.data_disk3_size = "DataDisk.3.Size";
  req.data_disk3_category = "DataDisk.3.Category";
  req.data_disk3_snapshot_id = "DataDisk.3.SnapshotId";
  req.data_disk3_disk_name = "DataDisk.3.DiskName";
  req.data_disk3_description = "DataDisk.3.Description";
  req.data_disk3_device = "DataDisk.3.Device";
  req.data_disk3_delete_with_instance = "DataDisk.3.DeleteWithInstance";
  req.data_disk4_size = "DataDisk.4.Size";
  req.data_disk4_category = "DataDisk.4.Category";
  req.data_disk4_snapshot_id = "DataDisk.4.SnapshotId";
  req.data_disk4_disk_name = "DataDisk.4.DiskName";
  req.data_disk4_description = "DataDisk.4.Description";
  req.data_disk4_device = "DataDisk.4.Device";
  req.data_disk4_delete_with_instance = "DataDisk.4.DeleteWithInstance";
  req.node_controller_id = "NodeControllerId";
  req.description = "Description";
  req.vswitch_id = "VSwitchId";
  req.private_ip_address = "PrivateIpAddress";
  req.io_optimized = "IoOptimized";
  req.owner_account = "OwnerAccount";
  req.use_additional_service = "UseAdditionalService";
  req.instance_charge_type = "InstanceChargeType";
  req.period = "Period";
  int ret = ecs->CreateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_route_entry_response = "{}";
static int test_create_route_entry() {
  EcsCreateRouteEntryRequestType req;
  EcsCreateRouteEntryResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_route_entry_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.route_table_id = "RouteTableId";
  req.destination_cidr_block = "DestinationCidrBlock";
  req.next_hop_id = "NextHopId";
  req.client_token = "ClientToken";
  req.next_hop_type = "NextHopType";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CreateRouteEntry(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_security_group_response = "{"
"  \"SecurityGroupId\": \"SecurityGroupId\""
"}";
static int test_create_security_group() {
  EcsCreateSecurityGroupRequestType req;
  EcsCreateSecurityGroupResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_security_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.description = "Description";
  req.client_token = "ClientToken";
  req.security_group_name = "SecurityGroupName";
  req.vpc_id = "VpcId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CreateSecurityGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_snapshot_response = "{"
"  \"SnapshotId\": \"SnapshotId\""
"}";
static int test_create_snapshot() {
  EcsCreateSnapshotRequestType req;
  EcsCreateSnapshotResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_snapshot_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.snapshot_name = "SnapshotName";
  req.description = "Description";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CreateSnapshot(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_vpc_response = "{"
"  \"VpcId\": \"VpcId\","
"  \"VRouterId\": \"VRouterId\","
"  \"RouteTableId\": \"RouteTableId\""
"}";
static int test_create_vpc() {
  EcsCreateVpcRequestType req;
  EcsCreateVpcResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_vpc_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.cidr_block = "CidrBlock";
  req.vpc_name = "VpcName";
  req.description = "Description";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  req.user_cidr = "UserCidr";
  int ret = ecs->CreateVpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_create_vswitch_response = "{"
"  \"VSwitchId\": \"VSwitchId\""
"}";
static int test_create_vswitch() {
  EcsCreateVSwitchRequestType req;
  EcsCreateVSwitchResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_vswitch_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.zone_id = "ZoneId";
  req.cidr_block = "CidrBlock";
  req.vpc_id = "VpcId";
  req.vswitch_name = "VSwitchName";
  req.description = "Description";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->CreateVSwitch(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_disk_response = "{}";
static int test_delete_disk() {
  EcsDeleteDiskRequestType req;
  EcsDeleteDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_ha_vip_response = "{}";
static int test_delete_ha_vip() {
  EcsDeleteHaVipRequestType req;
  EcsDeleteHaVipResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_ha_vip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.client_token = "ClientToken";
  req.ha_vip_id = "HaVipId";
  int ret = ecs->DeleteHaVip(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_image_response = "{}";
static int test_delete_image() {
  EcsDeleteImageRequestType req;
  EcsDeleteImageResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_image_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteImage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_instance_response = "{}";
static int test_delete_instance() {
  EcsDeleteInstanceRequestType req;
  EcsDeleteInstanceResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_route_entry_response = "{}";
static int test_delete_route_entry() {
  EcsDeleteRouteEntryRequestType req;
  EcsDeleteRouteEntryResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_route_entry_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.route_table_id = "RouteTableId";
  req.destination_cidr_block = "DestinationCidrBlock";
  req.next_hop_id = "NextHopId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteRouteEntry(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_security_group_response = "{}";
static int test_delete_security_group() {
  EcsDeleteSecurityGroupRequestType req;
  EcsDeleteSecurityGroupResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_security_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteSecurityGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_snapshot_response = "{}";
static int test_delete_snapshot() {
  EcsDeleteSnapshotRequestType req;
  EcsDeleteSnapshotResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_snapshot_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.snapshot_id = "SnapshotId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteSnapshot(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_vpc_response = "{}";
static int test_delete_vpc() {
  EcsDeleteVpcRequestType req;
  EcsDeleteVpcResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_vpc_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vpc_id = "VpcId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteVpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_delete_vswitch_response = "{}";
static int test_delete_vswitch() {
  EcsDeleteVSwitchRequestType req;
  EcsDeleteVSwitchResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_vswitch_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vswitch_id = "VSwitchId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DeleteVSwitch(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_auto_snapshot_policy_response = "{"
"  \"AutoSnapshotPolicy\": {"
"    \"SystemDiskPolicyEnabled\": \"SystemDiskPolicyEnabled\","
"    \"SystemDiskPolicyTimePeriod\": \"SystemDiskPolicyTimePeriod\","
"    \"SystemDiskPolicyRetentionDays\": \"SystemDiskPolicyRetentionDays\","
"    \"SystemDiskPolicyRetentionLastWeek\": \"SystemDiskPolicyRetentionLastWeek\","
"    \"DataDiskPolicyEnabled\": \"DataDiskPolicyEnabled\","
"    \"DataDiskPolicyTimePeriod\": \"DataDiskPolicyTimePeriod\","
"    \"DataDiskPolicyRetentionDays\": \"DataDiskPolicyRetentionDays\","
"    \"DataDiskPolicyRetentionLastWeek\": \"DataDiskPolicyRetentionLastWeek\""
"  },"
"  \"AutoSnapshotExcutionStatus\": {"
"    \"SystemDiskExcutionStatus\": \"SystemDiskExcutionStatus\","
"    \"DataDiskExcutionStatus\": \"DataDiskExcutionStatus\""
"  },"
"  \"AutoSnapshotOccupation\": 0"
"}";
static int test_describe_auto_snapshot_policy() {
  EcsDescribeAutoSnapshotPolicyRequestType req;
  EcsDescribeAutoSnapshotPolicyResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_auto_snapshot_policy_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeAutoSnapshotPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_disk_monitor_data_response = "{"
"  \"MonitorData\": {"
"    \"DiskMonitorData\": ["
"      {"
"        \"DiskId\": \"DiskId\","
"        \"IOPSRead\": 0,"
"        \"IOPSWrite\": 0,"
"        \"IOPSTotal\": 0,"
"        \"BPSRead\": 0,"
"        \"BPSWrite\": 0,"
"        \"BPSTotal\": 0,"
"        \"TimeStamp\": \"TimeStamp\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0"
"}";
static int test_describe_disk_monitor_data() {
  EcsDescribeDiskMonitorDataRequestType req;
  EcsDescribeDiskMonitorDataResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_disk_monitor_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.period = "Period";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeDiskMonitorData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_disks_response = "{"
"  \"Disks\": {"
"    \"Disk\": ["
"      {"
"        \"OperationLocks\": {"
"          \"OperationLock\": ["
"            {"
"              \"LockReason\": \"LockReason\""
"            }"
"          ]"
"        },"
"        \"Tags\": {"
"          \"Tag\": ["
"            {"
"              \"TagKey\": \"TagKey\","
"              \"TagValue\": \"TagValue\""
"            }"
"          ]"
"        },"
"        \"DiskId\": \"DiskId\","
"        \"RegionId\": \"RegionId\","
"        \"ZoneId\": \"ZoneId\","
"        \"DiskName\": \"DiskName\","
"        \"Description\": \"Description\","
"        \"Type\": \"Type\","
"        \"Category\": \"Category\","
"        \"Size\": 0,"
"        \"ImageId\": \"ImageId\","
"        \"SourceSnapshotId\": \"SourceSnapshotId\","
"        \"ProductCode\": \"ProductCode\","
"        \"Portable\": 0,"
"        \"Status\": \"Status\","
"        \"InstanceId\": \"InstanceId\","
"        \"Device\": \"Device\","
"        \"DeleteWithInstance\": 0,"
"        \"DeleteAutoSnapshot\": 0,"
"        \"EnableAutoSnapshot\": 0,"
"        \"CreationTime\": \"CreationTime\","
"        \"AttachedTime\": \"AttachedTime\","
"        \"DetachedTime\": \"DetachedTime\","
"        \"DiskChargeType\": \"DiskChargeType\","
"        \"ExpiredTime\": \"ExpiredTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_disks() {
  EcsDescribeDisksRequestType req;
  EcsDescribeDisksResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_disks_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.zone_id = "ZoneId";
  req.disk_ids = "DiskIds";
  req.instance_id = "InstanceId";
  req.disk_type = "DiskType";
  req.category = "Category";
  req.status = "Status";
  req.snapshot_id = "SnapshotId";
  req.portable = "Portable";
  req.delete_with_instance = "DeleteWithInstance";
  req.delete_auto_snapshot = "DeleteAutoSnapshot";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  req.disk_name = "DiskName";
  req.enable_auto_snapshot = "EnableAutoSnapshot";
  req.disk_charge_type = "DiskChargeType";
  req.lock_reason = "LockReason";
  req.filter1_key = "Filter.1.Key";
  req.filter2_key = "Filter.2.Key";
  req.filter1_value = "Filter.1.Value";
  req.filter2_value = "Filter.2.Value";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->DescribeDisks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_eip_addresses_response = "{"
"  \"EipAddresses\": {"
"    \"EipAddress\": ["
"      {"
"        \"OperationLocks\": {"
"          \"LockReason\": ["
"            {"
"              \"LockReason\": \"LockReason\""
"            }"
"          ]"
"        },"
"        \"RegionId\": \"RegionId\","
"        \"IpAddress\": \"IpAddress\","
"        \"AllocationId\": \"AllocationId\","
"        \"Status\": \"Status\","
"        \"InstanceId\": \"InstanceId\","
"        \"Bandwidth\": \"Bandwidth\","
"        \"InternetChargeType\": \"InternetChargeType\","
"        \"AllocationTime\": \"AllocationTime\","
"        \"InstanceType\": \"InstanceType\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_eip_addresses() {
  EcsDescribeEipAddressesRequestType req;
  EcsDescribeEipAddressesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_eip_addresses_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.status = "Status";
  req.eip_address = "EipAddress";
  req.allocation_id = "AllocationId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  req.filter1_key = "Filter.1.Key";
  req.filter2_key = "Filter.2.Key";
  req.filter1_value = "Filter.1.Value";
  req.filter2_value = "Filter.2.Value";
  req.lock_reason = "LockReason";
  req.associated_instance_type = "AssociatedInstanceType";
  req.associated_instance_id = "AssociatedInstanceId";
  int ret = ecs->DescribeEipAddresses(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_eip_monitor_data_response = "{"
"  \"EipMonitorDatas\": {"
"    \"EipMonitorData\": ["
"      {"
"        \"EipRX\": 0,"
"        \"EipTX\": 0,"
"        \"EipFlow\": 0,"
"        \"EipBandwidth\": 0,"
"        \"EipPackets\": 0,"
"        \"TimeStamp\": \"TimeStamp\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_eip_monitor_data() {
  EcsDescribeEipMonitorDataRequestType req;
  EcsDescribeEipMonitorDataResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_eip_monitor_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.allocation_id = "AllocationId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.period = "Period";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeEipMonitorData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_ha_vips_response = "{"
"  \"HaVips\": {"
"    \"HaVip\": ["
"      {"
"        \"AssociatedInstances\": {"
"          \"associatedInstance\": ["
"            \"associatedInstance\""
"          ]"
"        },"
"        \"AssociatedEipAddresses\": {"
"          \"associatedEipAddresse\": ["
"            \"associatedEipAddresse\""
"          ]"
"        },"
"        \"HaVipId\": \"HaVipId\","
"        \"RegionId\": \"RegionId\","
"        \"VpcId\": \"VpcId\","
"        \"VSwitchId\": \"VSwitchId\","
"        \"IpAddress\": \"IpAddress\","
"        \"Status\": \"Status\","
"        \"MasterInstanceId\": \"MasterInstanceId\","
"        \"Description\": \"Description\","
"        \"CreateTime\": \"CreateTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_ha_vips() {
  EcsDescribeHaVipsRequestType req;
  EcsDescribeHaVipsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_ha_vips_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.filter = "Filter";
  int ret = ecs->DescribeHaVips(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_images_response = "{"
"  \"Images\": {"
"    \"Image\": ["
"      {"
"        \"DiskDeviceMappings\": {"
"          \"DiskDeviceMapping\": ["
"            {"
"              \"SnapshotId\": \"SnapshotId\","
"              \"Size\": \"Size\","
"              \"Device\": \"Device\""
"            }"
"          ]"
"        },"
"        \"Tags\": {"
"          \"Tag\": ["
"            {"
"              \"TagKey\": \"TagKey\","
"              \"TagValue\": \"TagValue\""
"            }"
"          ]"
"        },"
"        \"Progress\": \"Progress\","
"        \"ImageId\": \"ImageId\","
"        \"ImageName\": \"ImageName\","
"        \"ImageVersion\": \"ImageVersion\","
"        \"Description\": \"Description\","
"        \"Size\": 0,"
"        \"ImageOwnerAlias\": \"ImageOwnerAlias\","
"        \"OSName\": \"OSName\","
"        \"Architecture\": \"Architecture\","
"        \"Status\": \"Status\","
"        \"ProductCode\": \"ProductCode\","
"        \"IsSubscribed\": 0,"
"        \"CreationTime\": \"CreationTime\","
"        \"IsSelfShared\": \"IsSelfShared\","
"        \"OSType\": \"OSType\","
"        \"Platform\": \"Platform\","
"        \"Usage\": \"Usage\","
"        \"IsCopied\": 0"
"      }"
"    ]"
"  },"
"  \"RegionId\": \"RegionId\","
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_images() {
  EcsDescribeImagesRequestType req;
  EcsDescribeImagesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_images_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.status = "Status";
  req.image_id = "ImageId";
  req.show_expired = "ShowExpired";
  req.snapshot_id = "SnapshotId";
  req.image_name = "ImageName";
  req.image_owner_alias = "ImageOwnerAlias";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  req.filter1_key = "Filter.1.Key";
  req.filter2_key = "Filter.2.Key";
  req.filter1_value = "Filter.1.Value";
  req.filter2_value = "Filter.2.Value";
  req.usage = "Usage";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->DescribeImages(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_image_share_permission_response = "{"
"  \"ShareGroups\": {"
"    \"ShareGroup\": ["
"      {"
"        \"Group\": \"Group\""
"      }"
"    ]"
"  },"
"  \"Accounts\": {"
"    \"Account\": ["
"      {"
"        \"AliyunId\": \"AliyunId\""
"      }"
"    ]"
"  },"
"  \"RegionId\": \"RegionId\","
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"ImageId\": \"ImageId\""
"}";
static int test_describe_image_share_permission() {
  EcsDescribeImageSharePermissionRequestType req;
  EcsDescribeImageSharePermissionResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_image_share_permission_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeImageSharePermission(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instance_attribute_response = "{"
"  \"OperationLocks\": {"
"    \"LockReason\": ["
"      {"
"        \"LockReason\": \"LockReason\""
"      }"
"    ]"
"  },"
"  \"VpcAttributes\": {"
"    \"PrivateIpAddress\": {"
"      \"IpAddress\": ["
"        \"IpAddress\""
"      ]"
"    },"
"    \"VpcId\": \"VpcId\","
"    \"VSwitchId\": \"VSwitchId\","
"    \"NatIpAddress\": \"NatIpAddress\""
"  },"
"  \"EipAddress\": {"
"    \"AllocationId\": \"AllocationId\","
"    \"IpAddress\": \"IpAddress\","
"    \"Bandwidth\": 0,"
"    \"InternetChargeType\": \"InternetChargeType\""
"  },"
"  \"SecurityGroupIds\": {"
"    \"SecurityGroupId\": ["
"      \"SecurityGroupId\""
"    ]"
"  },"
"  \"PublicIpAddress\": {"
"    \"IpAddress\": ["
"      \"IpAddress\""
"    ]"
"  },"
"  \"InnerIpAddress\": {"
"    \"IpAddress\": ["
"      \"IpAddress\""
"    ]"
"  },"
"  \"InstanceId\": \"InstanceId\","
"  \"InstanceName\": \"InstanceName\","
"  \"ImageId\": \"ImageId\","
"  \"RegionId\": \"RegionId\","
"  \"ZoneId\": \"ZoneId\","
"  \"ClusterId\": \"ClusterId\","
"  \"InstanceType\": \"InstanceType\","
"  \"HostName\": \"HostName\","
"  \"Status\": \"Status\","
"  \"InternetChargeType\": \"InternetChargeType\","
"  \"InternetMaxBandwidthIn\": 0,"
"  \"InternetMaxBandwidthOut\": 0,"
"  \"VlanId\": \"VlanId\","
"  \"SerialNumber\": \"SerialNumber\","
"  \"CreationTime\": \"CreationTime\","
"  \"Description\": \"Description\","
"  \"InstanceNetworkType\": \"InstanceNetworkType\","
"  \"IoOptimized\": \"IoOptimized\","
"  \"InstanceChargeType\": \"InstanceChargeType\","
"  \"ExpiredTime\": \"ExpiredTime\""
"}";
static int test_describe_instance_attribute() {
  EcsDescribeInstanceAttributeRequestType req;
  EcsDescribeInstanceAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeInstanceAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instance_monitor_data_response = "{"
"  \"MonitorData\": {"
"    \"InstanceMonitorData\": ["
"      {"
"        \"InstanceId\": \"InstanceId\","
"        \"CPU\": 0,"
"        \"IntranetRX\": 0,"
"        \"IntranetTX\": 0,"
"        \"IntranetBandwidth\": 0,"
"        \"InternetRX\": 0,"
"        \"InternetTX\": 0,"
"        \"InternetBandwidth\": 0,"
"        \"IOPSRead\": 0,"
"        \"IOPSWrite\": 0,"
"        \"BPSRead\": 0,"
"        \"BPSWrite\": 0,"
"        \"TimeStamp\": \"TimeStamp\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_instance_monitor_data() {
  EcsDescribeInstanceMonitorDataRequestType req;
  EcsDescribeInstanceMonitorDataResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_monitor_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.period = "Period";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeInstanceMonitorData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instances_response = "{"
"  \"Instances\": {"
"    \"Instance\": ["
"      {"
"        \"OperationLocks\": {"
"          \"LockReason\": ["
"            {"
"              \"LockReason\": \"LockReason\""
"            }"
"          ]"
"        },"
"        \"Tags\": {"
"          \"Tag\": ["
"            {"
"              \"TagKey\": \"TagKey\","
"              \"TagValue\": \"TagValue\""
"            }"
"          ]"
"        },"
"        \"VpcAttributes\": {"
"          \"PrivateIpAddress\": {"
"            \"IpAddress\": ["
"              \"IpAddress\""
"            ]"
"          },"
"          \"VpcId\": \"VpcId\","
"          \"VSwitchId\": \"VSwitchId\","
"          \"NatIpAddress\": \"NatIpAddress\""
"        },"
"        \"EipAddress\": {"
"          \"AllocationId\": \"AllocationId\","
"          \"IpAddress\": \"IpAddress\","
"          \"Bandwidth\": 0,"
"          \"InternetChargeType\": \"InternetChargeType\""
"        },"
"        \"SecurityGroupIds\": {"
"          \"SecurityGroupId\": ["
"            \"SecurityGroupId\""
"          ]"
"        },"
"        \"PublicIpAddress\": {"
"          \"IpAddress\": ["
"            \"IpAddress\""
"          ]"
"        },"
"        \"InnerIpAddress\": {"
"          \"IpAddress\": ["
"            \"IpAddress\""
"          ]"
"        },"
"        \"InstanceId\": \"InstanceId\","
"        \"InstanceName\": \"InstanceName\","
"        \"Description\": \"Description\","
"        \"ImageId\": \"ImageId\","
"        \"RegionId\": \"RegionId\","
"        \"ZoneId\": \"ZoneId\","
"        \"ClusterId\": \"ClusterId\","
"        \"InstanceType\": \"InstanceType\","
"        \"HostName\": \"HostName\","
"        \"Status\": \"Status\","
"        \"SerialNumber\": \"SerialNumber\","
"        \"InternetChargeType\": \"InternetChargeType\","
"        \"InternetMaxBandwidthIn\": 0,"
"        \"InternetMaxBandwidthOut\": 0,"
"        \"VlanId\": \"VlanId\","
"        \"CreationTime\": \"CreationTime\","
"        \"InstanceNetworkType\": \"InstanceNetworkType\","
"        \"InstanceChargeType\": \"InstanceChargeType\","
"        \"ExpiredTime\": \"ExpiredTime\","
"        \"IoOptimized\": 0,"
"        \"DeviceAvailable\": 0"
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_instances() {
  EcsDescribeInstancesRequestType req;
  EcsDescribeInstancesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VSwitchId";
  req.zone_id = "ZoneId";
  req.instance_network_type = "InstanceNetworkType";
  req.security_group_id = "SecurityGroupId";
  req.instance_ids = "InstanceIds";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.inner_ip_addresses = "InnerIpAddresses";
  req.private_ip_addresses = "PrivateIpAddresses";
  req.public_ip_addresses = "PublicIpAddresses";
  req.owner_account = "OwnerAccount";
  req.instance_charge_type = "InstanceChargeType";
  req.internet_charge_type = "InternetChargeType";
  req.instance_name = "InstanceName";
  req.image_id = "ImageId";
  req.status = "Status";
  req.lock_reason = "LockReason";
  req.filter1_key = "Filter.1.Key";
  req.filter2_key = "Filter.2.Key";
  req.filter3_key = "Filter.3.Key";
  req.filter4_key = "Filter.4.Key";
  req.filter1_value = "Filter.1.Value";
  req.filter2_value = "Filter.2.Value";
  req.filter3_value = "Filter.3.Value";
  req.filter4_value = "Filter.4.Value";
  req.device_available = "DeviceAvailable";
  req.io_optimized = "IoOptimized";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->DescribeInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instance_status_response = "{"
"  \"InstanceStatuses\": {"
"    \"InstanceStatus\": ["
"      {"
"        \"InstanceId\": \"InstanceId\","
"        \"Status\": \"Status\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_instance_status() {
  EcsDescribeInstanceStatusRequestType req;
  EcsDescribeInstanceStatusResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_status_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.zone_id = "ZoneId";
  req.cluster_id = "ClusterId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeInstanceStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instance_types_response = "{"
"  \"InstanceTypes\": {"
"    \"InstanceType\": ["
"      {"
"        \"InstanceTypeId\": \"InstanceTypeId\","
"        \"CpuCoreCount\": 0,"
"        \"MemorySize\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_describe_instance_types() {
  EcsDescribeInstanceTypesRequestType req;
  EcsDescribeInstanceTypesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_types_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeInstanceTypes(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instance_vnc_passwd_response = "{"
"  \"VncPasswd\": \"VncPasswd\""
"}";
static int test_describe_instance_vnc_passwd() {
  EcsDescribeInstanceVncPasswdRequestType req;
  EcsDescribeInstanceVncPasswdResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_vnc_passwd_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeInstanceVncPasswd(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_instance_vnc_url_response = "{"
"  \"VncUrl\": \"VncUrl\""
"}";
static int test_describe_instance_vnc_url() {
  EcsDescribeInstanceVncUrlRequestType req;
  EcsDescribeInstanceVncUrlResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_vnc_url_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeInstanceVncUrl(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_limitation_response = "{"
"  \"Limitation\": \"Limitation\","
"  \"Value\": \"Value\""
"}";
static int test_describe_limitation() {
  EcsDescribeLimitationRequestType req;
  EcsDescribeLimitationResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_limitation_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.limitation = "Limitation";
  int ret = ecs->DescribeLimitation(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_regions_response = "{"
"  \"Regions\": {"
"    \"Region\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions() {
  EcsDescribeRegionsRequestType req;
  EcsDescribeRegionsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_resource_by_tags_response = "{"
"  \"Resources\": {"
"    \"Resource\": ["
"      {"
"        \"ResourceId\": \"ResourceId\","
"        \"ResourceType\": \"ResourceType\","
"        \"RegionId\": \"RegionId\""
"      }"
"    ]"
"  },"
"  \"PageSize\": 0,"
"  \"PageNumber\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_describe_resource_by_tags() {
  EcsDescribeResourceByTagsRequestType req;
  EcsDescribeResourceByTagsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_resource_by_tags_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.resource_type = "ResourceType";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->DescribeResourceByTags(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_route_tables_response = "{"
"  \"RouteTables\": {"
"    \"RouteTable\": ["
"      {"
"        \"RouteEntrys\": {"
"          \"RouteEntry\": ["
"            {"
"              \"RouteTableId\": \"RouteTableId\","
"              \"DestinationCidrBlock\": \"DestinationCidrBlock\","
"              \"Type\": \"Type\","
"              \"Status\": \"Status\","
"              \"InstanceId\": \"InstanceId\","
"              \"NextHopType\": \"NextHopType\""
"            }"
"          ]"
"        },"
"        \"VRouterId\": \"VRouterId\","
"        \"RouteTableId\": \"RouteTableId\","
"        \"RouteTableType\": \"RouteTableType\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_route_tables() {
  EcsDescribeRouteTablesRequestType req;
  EcsDescribeRouteTablesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_route_tables_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vrouter_id = "VRouterId";
  req.route_table_id = "RouteTableId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeRouteTables(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_security_group_attribute_response = "{"
"  \"Permissions\": {"
"    \"Permission\": ["
"      {"
"        \"IpProtocol\": \"IpProtocol\","
"        \"PortRange\": \"PortRange\","
"        \"SourceGroupId\": \"SourceGroupId\","
"        \"SourceCidrIp\": \"SourceCidrIp\","
"        \"Policy\": \"Policy\","
"        \"NicType\": \"NicType\","
"        \"SourceGroupOwnerAccount\": \"SourceGroupOwnerAccount\","
"        \"DestGroupId\": \"DestGroupId\","
"        \"DestCidrIp\": \"DestCidrIp\","
"        \"DestGroupOwnerAccount\": \"DestGroupOwnerAccount\","
"        \"Priority\": \"Priority\","
"        \"Direction\": \"Direction\""
"      }"
"    ]"
"  },"
"  \"RegionId\": \"RegionId\","
"  \"SecurityGroupId\": \"SecurityGroupId\","
"  \"Description\": \"Description\","
"  \"SecurityGroupName\": \"SecurityGroupName\","
"  \"VpcId\": \"VpcId\""
"}";
static int test_describe_security_group_attribute() {
  EcsDescribeSecurityGroupAttributeRequestType req;
  EcsDescribeSecurityGroupAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_security_group_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.nic_type = "NicType";
  req.owner_account = "OwnerAccount";
  req.direction = "Direction";
  int ret = ecs->DescribeSecurityGroupAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_security_groups_response = "{"
"  \"SecurityGroups\": {"
"    \"SecurityGroup\": ["
"      {"
"        \"SecurityGroupId\": \"SecurityGroupId\","
"        \"Description\": \"Description\","
"        \"SecurityGroupName\": \"SecurityGroupName\","
"        \"VpcId\": \"VpcId\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"RegionId\": \"RegionId\","
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_security_groups() {
  EcsDescribeSecurityGroupsRequestType req;
  EcsDescribeSecurityGroupsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_security_groups_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vpc_id = "VpcId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  req.security_group_ids = "SecurityGroupIds";
  int ret = ecs->DescribeSecurityGroups(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_snapshots_response = "{"
"  \"Snapshots\": {"
"    \"Snapshot\": ["
"      {"
"        \"Tags\": {"
"          \"Tag\": ["
"            {"
"              \"TagKey\": \"TagKey\","
"              \"TagValue\": \"TagValue\""
"            }"
"          ]"
"        },"
"        \"SnapshotId\": \"SnapshotId\","
"        \"SnapshotName\": \"SnapshotName\","
"        \"Progress\": \"Progress\","
"        \"ProductCode\": \"ProductCode\","
"        \"SourceDiskId\": \"SourceDiskId\","
"        \"SourceDiskType\": \"SourceDiskType\","
"        \"SourceDiskSize\": \"SourceDiskSize\","
"        \"Description\": \"Description\","
"        \"CreationTime\": \"CreationTime\","
"        \"Status\": \"Status\","
"        \"Usage\": \"Usage\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_snapshots() {
  EcsDescribeSnapshotsRequestType req;
  EcsDescribeSnapshotsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_snapshots_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.disk_id = "DiskId";
  req.snapshot_ids = "SnapshotIds";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  req.snapshot_name = "SnapshotName";
  req.status = "Status";
  req.snapshot_type = "SnapshotType";
  req.filter1_key = "Filter.1.Key";
  req.filter2_key = "Filter.2.Key";
  req.filter1_value = "Filter.1.Value";
  req.filter2_value = "Filter.2.Value";
  req.usage = "Usage";
  req.source_disk_type = "SourceDiskType";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->DescribeSnapshots(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_tag_keys_response = "{"
"  \"TagKeys\": {"
"    \"TagKey\": ["
"      \"TagKey\""
"    ]"
"  },"
"  \"PageSize\": 0,"
"  \"PageNumber\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_describe_tag_keys() {
  EcsDescribeTagKeysRequestType req;
  EcsDescribeTagKeysResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_tag_keys_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.resource_type = "ResourceType";
  req.resource_id = "ResourceId";
  int ret = ecs->DescribeTagKeys(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_tags_response = "{"
"  \"Tags\": {"
"    \"Tag\": ["
"      {"
"        \"TagKey\": \"TagKey\","
"        \"TagValue\": \"TagValue\""
"      }"
"    ]"
"  },"
"  \"PageSize\": 0,"
"  \"PageNumber\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_describe_tags() {
  EcsDescribeTagsRequestType req;
  EcsDescribeTagsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_tags_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.resource_type = "ResourceType";
  req.resource_id = "ResourceId";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->DescribeTags(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_vpcs_response = "{"
"  \"Vpcs\": {"
"    \"Vpc\": ["
"      {"
"        \"VSwitchIds\": {"
"          \"VSwitchId\": ["
"            \"VSwitchId\""
"          ]"
"        },"
"        \"UserCidrs\": {"
"          \"UserCidr\": ["
"            \"UserCidr\""
"          ]"
"        },"
"        \"VpcId\": \"VpcId\","
"        \"RegionId\": \"RegionId\","
"        \"Status\": \"Status\","
"        \"VpcName\": \"VpcName\","
"        \"CreationTime\": \"CreationTime\","
"        \"CidrBlock\": \"CidrBlock\","
"        \"VRouterId\": \"VRouterId\","
"        \"Description\": \"Description\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_vpcs() {
  EcsDescribeVpcsRequestType req;
  EcsDescribeVpcsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_vpcs_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vpc_id = "VpcId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeVpcs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_vrouters_response = "{"
"  \"VRouters\": {"
"    \"VRouter\": ["
"      {"
"        \"RouteTableIds\": {"
"          \"RouteTableId\": ["
"            \"RouteTableId\""
"          ]"
"        },"
"        \"RegionId\": \"RegionId\","
"        \"VpcId\": \"VpcId\","
"        \"VRouterName\": \"VRouterName\","
"        \"Description\": \"Description\","
"        \"VRouterId\": \"VRouterId\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_vrouters() {
  EcsDescribeVRoutersRequestType req;
  EcsDescribeVRoutersResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_vrouters_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vrouter_id = "VRouterId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeVRouters(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_vswitches_response = "{"
"  \"VSwitches\": {"
"    \"VSwitch\": ["
"      {"
"        \"VSwitchId\": \"VSwitchId\","
"        \"VpcId\": \"VpcId\","
"        \"Status\": \"Status\","
"        \"CidrBlock\": \"CidrBlock\","
"        \"ZoneId\": \"ZoneId\","
"        \"AvailableIpAddressCount\": 0,"
"        \"Description\": \"Description\","
"        \"VSwitchName\": \"VSwitchName\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_vswitches() {
  EcsDescribeVSwitchesRequestType req;
  EcsDescribeVSwitchesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_vswitches_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VSwitchId";
  req.zone_id = "ZoneId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeVSwitches(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_describe_zones_response = "{"
"  \"Zones\": {"
"    \"Zone\": ["
"      {"
"        \"AvailableResourceCreation\": {"
"          \"ResourceTypes\": ["
"            \"ResourceTypes\""
"          ]"
"        },"
"        \"AvailableDiskCategories\": {"
"          \"DiskCategories\": ["
"            \"DiskCategories\""
"          ]"
"        },"
"        \"ZoneId\": \"ZoneId\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_zones() {
  EcsDescribeZonesRequestType req;
  EcsDescribeZonesResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_zones_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DescribeZones(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_detach_disk_response = "{}";
static int test_detach_disk() {
  EcsDetachDiskRequestType req;
  EcsDetachDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detach_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.disk_id = "DiskId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->DetachDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_join_security_group_response = "{}";
static int test_join_security_group() {
  EcsJoinSecurityGroupRequestType req;
  EcsJoinSecurityGroupResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_join_security_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->JoinSecurityGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_leave_security_group_response = "{}";
static int test_leave_security_group() {
  EcsLeaveSecurityGroupRequestType req;
  EcsLeaveSecurityGroupResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_leave_security_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->LeaveSecurityGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_auto_snapshot_policy_response = "{}";
static int test_modify_auto_snapshot_policy() {
  EcsModifyAutoSnapshotPolicyRequestType req;
  EcsModifyAutoSnapshotPolicyResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_auto_snapshot_policy_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.system_disk_policy_enabled = "SystemDiskPolicyEnabled";
  req.system_disk_policy_time_period = "SystemDiskPolicyTimePeriod";
  req.system_disk_policy_retention_days = "SystemDiskPolicyRetentionDays";
  req.system_disk_policy_retention_last_week = "SystemDiskPolicyRetentionLastWeek";
  req.data_disk_policy_enabled = "DataDiskPolicyEnabled";
  req.data_disk_policy_time_period = "DataDiskPolicyTimePeriod";
  req.data_disk_policy_retention_days = "DataDiskPolicyRetentionDays";
  req.data_disk_policy_retention_last_week = "DataDiskPolicyRetentionLastWeek";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyAutoSnapshotPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_disk_attribute_response = "{}";
static int test_modify_disk_attribute() {
  EcsModifyDiskAttributeRequestType req;
  EcsModifyDiskAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_disk_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.disk_name = "DiskName";
  req.description = "Description";
  req.delete_with_instance = "DeleteWithInstance";
  req.delete_auto_snapshot = "DeleteAutoSnapshot";
  req.enable_auto_snapshot = "EnableAutoSnapshot";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyDiskAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_eip_address_attribute_response = "{}";
static int test_modify_eip_address_attribute() {
  EcsModifyEipAddressAttributeRequestType req;
  EcsModifyEipAddressAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_eip_address_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.allocation_id = "AllocationId";
  req.bandwidth = "Bandwidth";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyEipAddressAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_ha_vip_attribute_response = "{}";
static int test_modify_ha_vip_attribute() {
  EcsModifyHaVipAttributeRequestType req;
  EcsModifyHaVipAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_ha_vip_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.client_token = "ClientToken";
  req.ha_vip_id = "HaVipId";
  req.description = "Description";
  int ret = ecs->ModifyHaVipAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_image_attribute_response = "{}";
static int test_modify_image_attribute() {
  EcsModifyImageAttributeRequestType req;
  EcsModifyImageAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_image_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.image_name = "ImageName";
  req.description = "Description";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyImageAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_image_share_group_permission_response = "{}";
static int test_modify_image_share_group_permission() {
  EcsModifyImageShareGroupPermissionRequestType req;
  EcsModifyImageShareGroupPermissionResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_image_share_group_permission_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.add_group1 = "AddGroup.1";
  req.remove_group1 = "RemoveGroup.1";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyImageShareGroupPermission(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_image_share_permission_response = "{}";
static int test_modify_image_share_permission() {
  EcsModifyImageSharePermissionRequestType req;
  EcsModifyImageSharePermissionResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_image_share_permission_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.image_id = "ImageId";
  req.add_account1 = "AddAccount.1";
  req.add_account2 = "AddAccount.2";
  req.add_account3 = "AddAccount.3";
  req.add_account4 = "AddAccount.4";
  req.add_account5 = "AddAccount.5";
  req.add_account6 = "AddAccount.6";
  req.add_account7 = "AddAccount.7";
  req.add_account8 = "AddAccount.8";
  req.add_account9 = "AddAccount.9";
  req.add_account10 = "AddAccount.10";
  req.remove_account1 = "RemoveAccount.1";
  req.remove_account2 = "RemoveAccount.2";
  req.remove_account3 = "RemoveAccount.3";
  req.remove_account4 = "RemoveAccount.4";
  req.remove_account5 = "RemoveAccount.5";
  req.remove_account6 = "RemoveAccount.6";
  req.remove_account7 = "RemoveAccount.7";
  req.remove_account8 = "RemoveAccount.8";
  req.remove_account9 = "RemoveAccount.9";
  req.remove_account10 = "RemoveAccount.10";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyImageSharePermission(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_instance_attribute_response = "{}";
static int test_modify_instance_attribute() {
  EcsModifyInstanceAttributeRequestType req;
  EcsModifyInstanceAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.password = "Password";
  req.host_name = "HostName";
  req.instance_name = "InstanceName";
  req.description = "Description";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyInstanceAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_instance_network_spec_response = "{}";
static int test_modify_instance_network_spec() {
  EcsModifyInstanceNetworkSpecRequestType req;
  EcsModifyInstanceNetworkSpecResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_network_spec_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.internet_max_bandwidth_out = "InternetMaxBandwidthOut";
  req.internet_max_bandwidth_in = "InternetMaxBandwidthIn";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyInstanceNetworkSpec(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_instance_vnc_passwd_response = "{}";
static int test_modify_instance_vnc_passwd() {
  EcsModifyInstanceVncPasswdRequestType req;
  EcsModifyInstanceVncPasswdResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_vnc_passwd_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.vnc_password = "VncPassword";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyInstanceVncPasswd(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_instance_vpc_attribute_response = "{}";
static int test_modify_instance_vpc_attribute() {
  EcsModifyInstanceVpcAttributeRequestType req;
  EcsModifyInstanceVpcAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_vpc_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.vswitch_id = "VSwitchId";
  req.private_ip_address = "PrivateIpAddress";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyInstanceVpcAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_security_group_attribute_response = "{}";
static int test_modify_security_group_attribute() {
  EcsModifySecurityGroupAttributeRequestType req;
  EcsModifySecurityGroupAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_security_group_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.description = "Description";
  req.security_group_name = "SecurityGroupName";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifySecurityGroupAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_snapshot_attribute_response = "{}";
static int test_modify_snapshot_attribute() {
  EcsModifySnapshotAttributeRequestType req;
  EcsModifySnapshotAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_snapshot_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.snapshot_id = "SnapshotId";
  req.snapshot_name = "SnapshotName";
  req.description = "Description";
  int ret = ecs->ModifySnapshotAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_vpc_attribute_response = "{}";
static int test_modify_vpc_attribute() {
  EcsModifyVpcAttributeRequestType req;
  EcsModifyVpcAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_vpc_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vpc_id = "VpcId";
  req.description = "Description";
  req.vpc_name = "VpcName";
  req.owner_account = "OwnerAccount";
  req.user_cidr = "UserCidr";
  int ret = ecs->ModifyVpcAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_vrouter_attribute_response = "{}";
static int test_modify_vrouter_attribute() {
  EcsModifyVRouterAttributeRequestType req;
  EcsModifyVRouterAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_vrouter_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vrouter_id = "VRouterId";
  req.vrouter_name = "VRouterName";
  req.description = "Description";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyVRouterAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_modify_vswitch_attribute_response = "{}";
static int test_modify_vswitch_attribute() {
  EcsModifyVSwitchAttributeRequestType req;
  EcsModifyVSwitchAttributeResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_vswitch_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.vswitch_id = "VSwitchId";
  req.vswitch_name = "VSwitchName";
  req.description = "Description";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ModifyVSwitchAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_reboot_instance_response = "{}";
static int test_reboot_instance() {
  EcsRebootInstanceRequestType req;
  EcsRebootInstanceResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_reboot_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.force_stop = "ForceStop";
  req.owner_account = "OwnerAccount";
  int ret = ecs->RebootInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_re_init_disk_response = "{}";
static int test_re_init_disk() {
  EcsReInitDiskRequestType req;
  EcsReInitDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_re_init_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ReInitDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_release_eip_address_response = "{}";
static int test_release_eip_address() {
  EcsReleaseEipAddressRequestType req;
  EcsReleaseEipAddressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_release_eip_address_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.allocation_id = "AllocationId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ReleaseEipAddress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_remove_tags_response = "{}";
static int test_remove_tags() {
  EcsRemoveTagsRequestType req;
  EcsRemoveTagsResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_tags_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.resource_type = "ResourceType";
  req.resource_id = "ResourceId";
  req.tag1_key = "Tag.1.Key";
  req.tag2_key = "Tag.2.Key";
  req.tag3_key = "Tag.3.Key";
  req.tag4_key = "Tag.4.Key";
  req.tag5_key = "Tag.5.Key";
  req.tag1_value = "Tag.1.Value";
  req.tag2_value = "Tag.2.Value";
  req.tag3_value = "Tag.3.Value";
  req.tag4_value = "Tag.4.Value";
  req.tag5_value = "Tag.5.Value";
  int ret = ecs->RemoveTags(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_renew_instance_response = "{}";
static int test_renew_instance() {
  EcsRenewInstanceRequestType req;
  EcsRenewInstanceResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_renew_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  req.internet_max_bandwidth_out = "InternetMaxBandwidthOut";
  req.internet_charge_type = "InternetChargeType";
  req.period = "Period";
  req.reboot_time = "RebootTime";
  req.covert_disk_portable1_disk_id = "CovertDiskPortable.1.DiskId";
  req.covert_disk_portable2_disk_id = "CovertDiskPortable.2.DiskId";
  req.covert_disk_portable3_disk_id = "CovertDiskPortable.3.DiskId";
  req.covert_disk_portable4_disk_id = "CovertDiskPortable.4.DiskId";
  int ret = ecs->RenewInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_replace_system_disk_response = "{"
"  \"DiskId\": \"DiskId\""
"}";
static int test_replace_system_disk() {
  EcsReplaceSystemDiskRequestType req;
  EcsReplaceSystemDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_replace_system_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.image_id = "ImageId";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  req.use_additional_service = "UseAdditionalService";
  int ret = ecs->ReplaceSystemDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_reset_disk_response = "{}";
static int test_reset_disk() {
  EcsResetDiskRequestType req;
  EcsResetDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_reset_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.snapshot_id = "SnapshotId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ResetDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_resize_disk_response = "{}";
static int test_resize_disk() {
  EcsResizeDiskRequestType req;
  EcsResizeDiskResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_resize_disk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.disk_id = "DiskId";
  req.new_size = "NewSize";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ecs->ResizeDisk(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_revoke_security_group_response = "{}";
static int test_revoke_security_group() {
  EcsRevokeSecurityGroupRequestType req;
  EcsRevokeSecurityGroupResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_revoke_security_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.ip_protocol = "IpProtocol";
  req.port_range = "PortRange";
  req.source_group_id = "SourceGroupId";
  req.source_group_owner_account = "SourceGroupOwnerAccount";
  req.source_cidr_ip = "SourceCidrIp";
  req.policy = "Policy";
  req.nic_type = "NicType";
  req.owner_account = "OwnerAccount";
  int ret = ecs->RevokeSecurityGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_revoke_security_group_egress_response = "{}";
static int test_revoke_security_group_egress() {
  EcsRevokeSecurityGroupEgressRequestType req;
  EcsRevokeSecurityGroupEgressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_revoke_security_group_egress_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.security_group_id = "SecurityGroupId";
  req.ip_protocol = "IpProtocol";
  req.port_range = "PortRange";
  req.dest_group_id = "DestGroupId";
  req.dest_group_owner_account = "DestGroupOwnerAccount";
  req.dest_cidr_ip = "DestCidrIp";
  req.policy = "Policy";
  req.nic_type = "NicType";
  req.owner_account = "OwnerAccount";
  int ret = ecs->RevokeSecurityGroupEgress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_start_instance_response = "{}";
static int test_start_instance() {
  EcsStartInstanceRequestType req;
  EcsStartInstanceResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_start_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  int ret = ecs->StartInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_stop_instance_response = "{}";
static int test_stop_instance() {
  EcsStopInstanceRequestType req;
  EcsStopInstanceResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.instance_id = "InstanceId";
  req.force_stop = "ForceStop";
  req.owner_account = "OwnerAccount";
  int ret = ecs->StopInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_unassociate_eip_address_response = "{}";
static int test_unassociate_eip_address() {
  EcsUnassociateEipAddressRequestType req;
  EcsUnassociateEipAddressResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_unassociate_eip_address_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.allocation_id = "AllocationId";
  req.instance_id = "InstanceId";
  req.owner_account = "OwnerAccount";
  req.instance_type = "InstanceType";
  int ret = ecs->UnassociateEipAddress(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
static const char* test_unassociate_ha_vip_response = "{}";
static int test_unassociate_ha_vip() {
  EcsUnassociateHaVipRequestType req;
  EcsUnassociateHaVipResponseType resp;
  Ecs* ecs = Ecs::CreateEcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ecs) return 0;
  ecs->SetProxyHost("127.0.0.1:12234");
  ecs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_unassociate_ha_vip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.client_token = "ClientToken";
  req.ha_vip_id = "HaVipId";
  req.instance_id = "InstanceId";
  req.force = "Force";
  int ret = ecs->UnassociateHaVip(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ecs;
}
int main() {
  test_add_tags();
  test_allocate_eip_address();
  test_allocate_public_ip_address();
  test_associate_eip_address();
  test_associate_ha_vip();
  test_attach_disk();
  test_authorize_security_group();
  test_authorize_security_group_egress();
  test_cancel_copy_image();
  test_check_auto_snapshot_policy();
  test_check_disk_enable_auto_snapshot_validation();
  test_copy_image();
  test_create_disk();
  test_create_ha_vip();
  test_create_image();
  test_create_instance();
  test_create_route_entry();
  test_create_security_group();
  test_create_snapshot();
  test_create_vpc();
  test_create_vswitch();
  test_delete_disk();
  test_delete_ha_vip();
  test_delete_image();
  test_delete_instance();
  test_delete_route_entry();
  test_delete_security_group();
  test_delete_snapshot();
  test_delete_vpc();
  test_delete_vswitch();
  test_describe_auto_snapshot_policy();
  test_describe_disk_monitor_data();
  test_describe_disks();
  test_describe_eip_addresses();
  test_describe_eip_monitor_data();
  test_describe_ha_vips();
  test_describe_images();
  test_describe_image_share_permission();
  test_describe_instance_attribute();
  test_describe_instance_monitor_data();
  test_describe_instances();
  test_describe_instance_status();
  test_describe_instance_types();
  test_describe_instance_vnc_passwd();
  test_describe_instance_vnc_url();
  test_describe_limitation();
  test_describe_regions();
  test_describe_resource_by_tags();
  test_describe_route_tables();
  test_describe_security_group_attribute();
  test_describe_security_groups();
  test_describe_snapshots();
  test_describe_tag_keys();
  test_describe_tags();
  test_describe_vpcs();
  test_describe_vrouters();
  test_describe_vswitches();
  test_describe_zones();
  test_detach_disk();
  test_join_security_group();
  test_leave_security_group();
  test_modify_auto_snapshot_policy();
  test_modify_disk_attribute();
  test_modify_eip_address_attribute();
  test_modify_ha_vip_attribute();
  test_modify_image_attribute();
  test_modify_image_share_group_permission();
  test_modify_image_share_permission();
  test_modify_instance_attribute();
  test_modify_instance_network_spec();
  test_modify_instance_vnc_passwd();
  test_modify_instance_vpc_attribute();
  test_modify_security_group_attribute();
  test_modify_snapshot_attribute();
  test_modify_vpc_attribute();
  test_modify_vrouter_attribute();
  test_modify_vswitch_attribute();
  test_reboot_instance();
  test_re_init_disk();
  test_release_eip_address();
  test_remove_tags();
  test_renew_instance();
  test_replace_system_disk();
  test_reset_disk();
  test_resize_disk();
  test_revoke_security_group();
  test_revoke_security_group_egress();
  test_start_instance();
  test_stop_instance();
  test_unassociate_eip_address();
  test_unassociate_ha_vip();
}
