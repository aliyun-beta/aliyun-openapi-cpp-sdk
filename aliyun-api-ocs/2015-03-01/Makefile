TARGET = aliyun_api_ocs.so
DEPS = \
  src/ali_ocs.o \
  src/ali_activate_instance.o \
  src/ali_add_authentic_ip.o \
  src/ali_create_instance.o \
  src/ali_data_operate.o \
  src/ali_deactivate_instance.o \
  src/ali_delete_instance.o \
  src/ali_describe_authentic_ip.o \
  src/ali_describe_history_monitor_values.o \
  src/ali_describe_instances.o \
  src/ali_describe_monitor_items.o \
  src/ali_describe_monitor_values.o \
  src/ali_describe_regions.o \
  src/ali_describe_security_ips.o \
  src/ali_describe_zones.o \
  src/ali_flush_instance.o \
  src/ali_modify_instance_attribute.o \
  src/ali_modify_instance_capacity.o \
  src/ali_modify_security_ips.o \
  src/ali_remove_authentic_ip.o \
  src/ali_replace_authentic_ip.o \
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
