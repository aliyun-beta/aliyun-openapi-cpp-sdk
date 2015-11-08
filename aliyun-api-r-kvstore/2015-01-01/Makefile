TARGET = aliyun_api_rkvstore.so
DEPS = \
  src/ali_rkvstore.o \
  src/ali_activate_instance.o \
  src/ali_create_instance.o \
  src/ali_create_instances.o \
  src/ali_data_operate.o \
  src/ali_deactivate_instance.o \
  src/ali_delete_instance.o \
  src/ali_describe_commodity.o \
  src/ali_describe_connection_domain.o \
  src/ali_describe_history_monitor_values.o \
  src/ali_describe_instance_config.o \
  src/ali_describe_instance_count.o \
  src/ali_describe_instances.o \
  src/ali_describe_monitor_items.o \
  src/ali_describe_monitor_values.o \
  src/ali_describe_price.o \
  src/ali_describe_regions.o \
  src/ali_describe_user_info.o \
  src/ali_flush_instance.o \
  src/ali_modify_instance_attribute.o \
  src/ali_modify_instance_capacity.o \
  src/ali_modify_instance_config.o \
  src/ali_renew_instance.o \
  src/ali_transform_to_pre_paid.o \
  src/ali_verify_password.o \

INCLUDES= \
  -Iinclude/ \
  -I../../aliyun_api_core/ \
  -I../../aliyun_api_core/http/ \
  -I../../aliyun_api_core/utils/ \
  -I../../aliyun_api_core/third_party/jsoncpp/include/

CXXFLAGS = $(INCLUDES)

SHARED_LIBS = ../../aliyun_api_core/libaliyun_core.a

$(TARGET): $(DEPS) $(SHARED_LIBS)
	g++ --shared -o $(TARGET) $(DEPS) $(SHARED_LIBS)

../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
