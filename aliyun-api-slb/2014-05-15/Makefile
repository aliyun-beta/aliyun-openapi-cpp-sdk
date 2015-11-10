DYNAMIC_TARGET = libaliyun_api_slb.so
STATIC_TARGET = libaliyun_api_slb.a
DEPS = \
  src/ali_slb.o \
  src/ali_slb_add_backend_servers.o \
  src/ali_slb_add_listener_white_list_item.o \
  src/ali_slb_create_load_balancer.o \
  src/ali_slb_create_load_balancer_ht_tp_listener.o \
  src/ali_slb_create_load_balancer_ht_tp_slistener.o \
  src/ali_slb_create_load_balancer_tc_plistener.o \
  src/ali_slb_create_load_balancer_ud_plistener.o \
  src/ali_slb_delete_load_balancer.o \
  src/ali_slb_delete_load_balancer_listener.o \
  src/ali_slb_delete_server_certificate.o \
  src/ali_slb_describe_health_status.o \
  src/ali_slb_describe_listener_access_control_attribute.o \
  src/ali_slb_describe_load_balancer_attribute.o \
  src/ali_slb_describe_load_balancer_ht_tp_listener_attribute.o \
  src/ali_slb_describe_load_balancer_ht_tp_slistener_attribute.o \
  src/ali_slb_describe_load_balancers.o \
  src/ali_slb_describe_load_balancer_tc_plistener_attribute.o \
  src/ali_slb_describe_load_balancer_ud_plistener_attribute.o \
  src/ali_slb_describe_locations.o \
  src/ali_slb_describe_regions.o \
  src/ali_slb_describe_regions4_location.o \
  src/ali_slb_describe_server_certificate.o \
  src/ali_slb_describe_server_certificates.o \
  src/ali_slb_describe_zones.o \
  src/ali_slb_modify_load_balancer_internet_spec.o \
  src/ali_slb_remove_backend_servers.o \
  src/ali_slb_remove_listener_white_list_item.o \
  src/ali_slb_set_backend_servers.o \
  src/ali_slb_set_listener_access_control_status.o \
  src/ali_slb_set_load_balancer_ht_tp_listener_attribute.o \
  src/ali_slb_set_load_balancer_ht_tp_slistener_attribute.o \
  src/ali_slb_set_load_balancer_name.o \
  src/ali_slb_set_load_balancer_status.o \
  src/ali_slb_set_load_balancer_tc_plistener_attribute.o \
  src/ali_slb_set_load_balancer_ud_plistener_attribute.o \
  src/ali_slb_set_server_certificate_name.o \
  src/ali_slb_start_load_balancer_listener.o \
  src/ali_slb_stop_load_balancer_listener.o \
  src/ali_slb_upload_server_certificate.o \

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
