DYNAMIC_TARGET = libaliyun_api_ram.so
STATIC_TARGET = libaliyun_api_ram.a
DEPS = \
  src/ali_ram.o \
  src/ali_ram_activate_service.o \
  src/ali_ram_add_user_to_group.o \
  src/ali_ram_attach_policy_to_group.o \
  src/ali_ram_attach_policy_to_role.o \
  src/ali_ram_attach_policy_to_user.o \
  src/ali_ram_bind_mf_adevice.o \
  src/ali_ram_clear_account_alias.o \
  src/ali_ram_create_access_key.o \
  src/ali_ram_create_group.o \
  src/ali_ram_create_login_profile.o \
  src/ali_ram_create_policy.o \
  src/ali_ram_create_policy_version.o \
  src/ali_ram_create_role.o \
  src/ali_ram_create_user.o \
  src/ali_ram_create_virtual_mf_adevice.o \
  src/ali_ram_deactivate_service.o \
  src/ali_ram_delete_access_key.o \
  src/ali_ram_delete_group.o \
  src/ali_ram_delete_login_profile.o \
  src/ali_ram_delete_policy.o \
  src/ali_ram_delete_policy_version.o \
  src/ali_ram_delete_role.o \
  src/ali_ram_delete_user.o \
  src/ali_ram_delete_virtual_mf_adevice.o \
  src/ali_ram_detach_policy_from_group.o \
  src/ali_ram_detach_policy_from_role.o \
  src/ali_ram_detach_policy_from_user.o \
  src/ali_ram_get_account_alias.o \
  src/ali_ram_get_account_summary.o \
  src/ali_ram_get_group.o \
  src/ali_ram_get_login_profile.o \
  src/ali_ram_get_password_policy.o \
  src/ali_ram_get_policy.o \
  src/ali_ram_get_policy_version.o \
  src/ali_ram_get_role.o \
  src/ali_ram_get_security_preference.o \
  src/ali_ram_get_service_status.o \
  src/ali_ram_get_user.o \
  src/ali_ram_get_user_mf_ainfo.o \
  src/ali_ram_list_access_keys.o \
  src/ali_ram_list_entities_for_policy.o \
  src/ali_ram_list_groups.o \
  src/ali_ram_list_groups_for_user.o \
  src/ali_ram_list_policies.o \
  src/ali_ram_list_policies_for_group.o \
  src/ali_ram_list_policies_for_role.o \
  src/ali_ram_list_policies_for_user.o \
  src/ali_ram_list_policy_versions.o \
  src/ali_ram_list_roles.o \
  src/ali_ram_list_users.o \
  src/ali_ram_list_users_for_group.o \
  src/ali_ram_list_virtual_mf_adevices.o \
  src/ali_ram_remove_user_from_group.o \
  src/ali_ram_set_account_alias.o \
  src/ali_ram_set_default_policy_version.o \
  src/ali_ram_set_password_policy.o \
  src/ali_ram_set_security_preference.o \
  src/ali_ram_unbind_mf_adevice.o \
  src/ali_ram_update_access_key.o \
  src/ali_ram_update_group.o \
  src/ali_ram_update_login_profile.o \
  src/ali_ram_update_role.o \
  src/ali_ram_update_user.o \

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
