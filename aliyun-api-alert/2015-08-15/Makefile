DYNAMIC_TARGET = libaliyun_api_alert.so
STATIC_TARGET = libaliyun_api_alert.a
DEPS = \
  src/ali_alert.o \
  src/ali_alert_batch_query_project.o \
  src/ali_alert_create_alert.o \
  src/ali_alert_create_contact.o \
  src/ali_alert_create_contact_group.o \
  src/ali_alert_create_db_metric.o \
  src/ali_alert_create_db_source.o \
  src/ali_alert_create_dimensions.o \
  src/ali_alert_create_level_channel.o \
  src/ali_alert_create_log_hub_metric.o \
  src/ali_alert_create_project.o \
  src/ali_alert_delete_alert.o \
  src/ali_alert_delete_contact.o \
  src/ali_alert_delete_contact_group.o \
  src/ali_alert_delete_db_metric.o \
  src/ali_alert_delete_db_source.o \
  src/ali_alert_delete_dimensions.o \
  src/ali_alert_delete_level_channel.o \
  src/ali_alert_delete_log_hub_metric.o \
  src/ali_alert_delete_project.o \
  src/ali_alert_disable_alert.o \
  src/ali_alert_enable_alert.o \
  src/ali_alert_get_alert.o \
  src/ali_alert_get_contact.o \
  src/ali_alert_get_contact_group.o \
  src/ali_alert_get_db_metric.o \
  src/ali_alert_get_db_source.o \
  src/ali_alert_get_dimensions.o \
  src/ali_alert_get_level_channel.o \
  src/ali_alert_get_log_hub_metric.o \
  src/ali_alert_get_project.o \
  src/ali_alert_grant_project_owner.o \
  src/ali_alert_list_alert.o \
  src/ali_alert_list_alert_state.o \
  src/ali_alert_list_contact.o \
  src/ali_alert_list_contact_group.o \
  src/ali_alert_list_db_metric.o \
  src/ali_alert_list_db_source.o \
  src/ali_alert_list_dimensions.o \
  src/ali_alert_list_level_channel.o \
  src/ali_alert_list_log_hub_metric.o \
  src/ali_alert_list_notify_history.o \
  src/ali_alert_list_project.o \
  src/ali_alert_remove_project_owner.o \
  src/ali_alert_update_alert.o \
  src/ali_alert_update_contact.o \
  src/ali_alert_update_contact_group.o \
  src/ali_alert_update_db_metric.o \
  src/ali_alert_update_db_source.o \
  src/ali_alert_update_dimensions.o \
  src/ali_alert_update_level_channel.o \
  src/ali_alert_update_log_hub_metric.o \
  src/ali_alert_update_project.o \

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
