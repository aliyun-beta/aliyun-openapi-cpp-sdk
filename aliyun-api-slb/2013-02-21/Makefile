TARGET = aliyun_api_slb.so
DEPS = \
  src/ali_slb.o \
  src/ali_add_backend_servers.o \
  src/ali_create_load_balancer.o \
  src/ali_create_load_balancer_ht_tp_listener.o \
  src/ali_create_load_balancer_tc_plistener.o \
  src/ali_delete_load_balancer.o \
  src/ali_delete_load_balancer_listener.o \
  src/ali_describe_backend_servers.o \
  src/ali_describe_load_balancer_attribute.o \
  src/ali_describe_load_balancer_ht_tp_listener_attribute.o \
  src/ali_describe_load_balancers.o \
  src/ali_describe_load_balancer_tc_plistener_attribute.o \
  src/ali_describe_regions.o \
  src/ali_remove_backend_servers.o \
  src/ali_set_load_balancer_ht_tp_listener_attribute.o \
  src/ali_set_load_balancer_listener_status.o \
  src/ali_set_load_balancer_name.o \
  src/ali_set_load_balancer_status.o \
  src/ali_set_load_balancer_tc_plistener_attribute.o \
  src/ali_set_load_banancer_listener_status.o \

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
