TARGET = aliyun_api_ram.so
DEPS = \
  src/ali_ram.o \
  src/ali_activate_service.o \
  src/ali_add_user_to_group.o \
  src/ali_attach_policy_to_group.o \
  src/ali_attach_policy_to_role.o \
  src/ali_attach_policy_to_user.o \
  src/ali_bind_mf_adevice.o \
  src/ali_clear_account_alias.o \
  src/ali_create_access_key.o \
  src/ali_create_group.o \
  src/ali_create_login_profile.o \
  src/ali_create_policy.o \
  src/ali_create_policy_version.o \
  src/ali_create_role.o \
  src/ali_create_user.o \
  src/ali_create_virtual_mf_adevice.o \
  src/ali_deactivate_service.o \
  src/ali_delete_access_key.o \
  src/ali_delete_group.o \
  src/ali_delete_login_profile.o \
  src/ali_delete_policy.o \
  src/ali_delete_policy_version.o \
  src/ali_delete_role.o \
  src/ali_delete_user.o \
  src/ali_delete_virtual_mf_adevice.o \
  src/ali_detach_policy_from_group.o \
  src/ali_detach_policy_from_role.o \
  src/ali_detach_policy_from_user.o \
  src/ali_get_account_alias.o \
  src/ali_get_account_summary.o \
  src/ali_get_group.o \
  src/ali_get_login_profile.o \
  src/ali_get_password_policy.o \
  src/ali_get_policy.o \
  src/ali_get_policy_version.o \
  src/ali_get_role.o \
  src/ali_get_security_preference.o \
  src/ali_get_service_status.o \
  src/ali_get_user.o \
  src/ali_get_user_mf_ainfo.o \
  src/ali_list_access_keys.o \
  src/ali_list_entities_for_policy.o \
  src/ali_list_groups.o \
  src/ali_list_groups_for_user.o \
  src/ali_list_policies.o \
  src/ali_list_policies_for_group.o \
  src/ali_list_policies_for_role.o \
  src/ali_list_policies_for_user.o \
  src/ali_list_policy_versions.o \
  src/ali_list_roles.o \
  src/ali_list_users.o \
  src/ali_list_users_for_group.o \
  src/ali_list_virtual_mf_adevices.o \
  src/ali_remove_user_from_group.o \
  src/ali_set_account_alias.o \
  src/ali_set_default_policy_version.o \
  src/ali_set_password_policy.o \
  src/ali_set_security_preference.o \
  src/ali_unbind_mf_adevice.o \
  src/ali_update_access_key.o \
  src/ali_update_group.o \
  src/ali_update_login_profile.o \
  src/ali_update_role.o \
  src/ali_update_user.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = -fPIC $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

$(TARGET): $(DEPS) $(SHARED_LIBS)
	g++ --shared -fPIC -o $(TARGET) $(DEPS) $(SHARED_LIBS)

../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
