DYNAMIC_TARGET = libaliyun_api_ecs.so
STATIC_TARGET = libaliyun_api_ecs.a
DEPS = \
  src/ali_ecs.o \
  src/ali_ecs_add_tags.o \
  src/ali_ecs_allocate_eip_address.o \
  src/ali_ecs_allocate_public_ip_address.o \
  src/ali_ecs_associate_eip_address.o \
  src/ali_ecs_associate_ha_vip.o \
  src/ali_ecs_attach_disk.o \
  src/ali_ecs_authorize_security_group.o \
  src/ali_ecs_authorize_security_group_egress.o \
  src/ali_ecs_cancel_copy_image.o \
  src/ali_ecs_check_auto_snapshot_policy.o \
  src/ali_ecs_check_disk_enable_auto_snapshot_validation.o \
  src/ali_ecs_copy_image.o \
  src/ali_ecs_create_disk.o \
  src/ali_ecs_create_ha_vip.o \
  src/ali_ecs_create_image.o \
  src/ali_ecs_create_instance.o \
  src/ali_ecs_create_route_entry.o \
  src/ali_ecs_create_security_group.o \
  src/ali_ecs_create_snapshot.o \
  src/ali_ecs_create_vpc.o \
  src/ali_ecs_create_vswitch.o \
  src/ali_ecs_delete_disk.o \
  src/ali_ecs_delete_ha_vip.o \
  src/ali_ecs_delete_image.o \
  src/ali_ecs_delete_instance.o \
  src/ali_ecs_delete_route_entry.o \
  src/ali_ecs_delete_security_group.o \
  src/ali_ecs_delete_snapshot.o \
  src/ali_ecs_delete_vpc.o \
  src/ali_ecs_delete_vswitch.o \
  src/ali_ecs_describe_auto_snapshot_policy.o \
  src/ali_ecs_describe_disk_monitor_data.o \
  src/ali_ecs_describe_disks.o \
  src/ali_ecs_describe_eip_addresses.o \
  src/ali_ecs_describe_eip_monitor_data.o \
  src/ali_ecs_describe_ha_vips.o \
  src/ali_ecs_describe_images.o \
  src/ali_ecs_describe_image_share_permission.o \
  src/ali_ecs_describe_instance_attribute.o \
  src/ali_ecs_describe_instance_monitor_data.o \
  src/ali_ecs_describe_instances.o \
  src/ali_ecs_describe_instance_status.o \
  src/ali_ecs_describe_instance_types.o \
  src/ali_ecs_describe_instance_vnc_passwd.o \
  src/ali_ecs_describe_instance_vnc_url.o \
  src/ali_ecs_describe_limitation.o \
  src/ali_ecs_describe_regions.o \
  src/ali_ecs_describe_resource_by_tags.o \
  src/ali_ecs_describe_route_tables.o \
  src/ali_ecs_describe_security_group_attribute.o \
  src/ali_ecs_describe_security_groups.o \
  src/ali_ecs_describe_snapshots.o \
  src/ali_ecs_describe_tag_keys.o \
  src/ali_ecs_describe_tags.o \
  src/ali_ecs_describe_vpcs.o \
  src/ali_ecs_describe_vrouters.o \
  src/ali_ecs_describe_vswitches.o \
  src/ali_ecs_describe_zones.o \
  src/ali_ecs_detach_disk.o \
  src/ali_ecs_join_security_group.o \
  src/ali_ecs_leave_security_group.o \
  src/ali_ecs_modify_auto_snapshot_policy.o \
  src/ali_ecs_modify_disk_attribute.o \
  src/ali_ecs_modify_eip_address_attribute.o \
  src/ali_ecs_modify_ha_vip_attribute.o \
  src/ali_ecs_modify_image_attribute.o \
  src/ali_ecs_modify_image_share_group_permission.o \
  src/ali_ecs_modify_image_share_permission.o \
  src/ali_ecs_modify_instance_attribute.o \
  src/ali_ecs_modify_instance_network_spec.o \
  src/ali_ecs_modify_instance_vnc_passwd.o \
  src/ali_ecs_modify_instance_vpc_attribute.o \
  src/ali_ecs_modify_security_group_attribute.o \
  src/ali_ecs_modify_snapshot_attribute.o \
  src/ali_ecs_modify_vpc_attribute.o \
  src/ali_ecs_modify_vrouter_attribute.o \
  src/ali_ecs_modify_vswitch_attribute.o \
  src/ali_ecs_reboot_instance.o \
  src/ali_ecs_re_init_disk.o \
  src/ali_ecs_release_eip_address.o \
  src/ali_ecs_remove_tags.o \
  src/ali_ecs_renew_instance.o \
  src/ali_ecs_replace_system_disk.o \
  src/ali_ecs_reset_disk.o \
  src/ali_ecs_resize_disk.o \
  src/ali_ecs_revoke_security_group.o \
  src/ali_ecs_revoke_security_group_egress.o \
  src/ali_ecs_start_instance.o \
  src/ali_ecs_stop_instance.o \
  src/ali_ecs_unassociate_eip_address.o \
  src/ali_ecs_unassociate_ha_vip.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = -fPIC $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

.PHONY:all
all: $(DYNAMIC_TARGET) $(STATIC_TARGET)

$(DYNAMIC_TARGET): $(DEPS) $(SHARED_LIBS)
	g++ -fPIC --shared -o $(DYNAMIC_TARGET) $(DEPS) $(SHARED_LIBS)

$(STATIC_TARGET): $(DEPS)
	$(AR) rcs $(STATIC_TARGET) $(DEPS)
../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DYNAMIC_TARGET) $(STATIC_TARGET) $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
