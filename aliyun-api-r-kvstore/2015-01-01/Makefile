DYNAMIC_TARGET = libaliyun_api_rkvstore.so
STATIC_TARGET = libaliyun_api_rkvstore.a
DEPS = \
  src/ali_rkvstore.o \
  src/ali_rkvstore_activate_instance.o \
  src/ali_rkvstore_create_instance.o \
  src/ali_rkvstore_create_instances.o \
  src/ali_rkvstore_data_operate.o \
  src/ali_rkvstore_deactivate_instance.o \
  src/ali_rkvstore_delete_instance.o \
  src/ali_rkvstore_describe_commodity.o \
  src/ali_rkvstore_describe_connection_domain.o \
  src/ali_rkvstore_describe_history_monitor_values.o \
  src/ali_rkvstore_describe_instance_config.o \
  src/ali_rkvstore_describe_instance_count.o \
  src/ali_rkvstore_describe_instances.o \
  src/ali_rkvstore_describe_monitor_items.o \
  src/ali_rkvstore_describe_monitor_values.o \
  src/ali_rkvstore_describe_price.o \
  src/ali_rkvstore_describe_regions.o \
  src/ali_rkvstore_describe_user_info.o \
  src/ali_rkvstore_flush_instance.o \
  src/ali_rkvstore_modify_instance_attribute.o \
  src/ali_rkvstore_modify_instance_capacity.o \
  src/ali_rkvstore_modify_instance_config.o \
  src/ali_rkvstore_renew_instance.o \
  src/ali_rkvstore_transform_to_pre_paid.o \
  src/ali_rkvstore_verify_password.o \

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
