DYNAMIC_TARGET = libaliyun_api_yundun.so
STATIC_TARGET = libaliyun_api_yundun.a
DEPS = \
  src/ali_yundun.o \
  src/ali_yundun_add_cname_waf.o \
  src/ali_yundun_bruteforce_log.o \
  src/ali_yundun_close_cc_protect.o \
  src/ali_yundun_close_port_scan.o \
  src/ali_yundun_close_vul_scan.o \
  src/ali_yundun_config_ddos.o \
  src/ali_yundun_confirm_login.o \
  src/ali_yundun_ddos_flow_graph.o \
  src/ali_yundun_ddos_log.o \
  src/ali_yundun_delete_back_door_file.o \
  src/ali_yundun_delete_cname_waf.o \
  src/ali_yundun_detect_vul_by_id.o \
  src/ali_yundun_detect_vul_by_ip.o \
  src/ali_yundun_get_ddos_config_options.o \
  src/ali_yundun_list_instance_infos.o \
  src/ali_yundun_loginevent_log.o \
  src/ali_yundun_open_cc_protect.o \
  src/ali_yundun_open_port_scan.o \
  src/ali_yundun_open_vul_scan.o \
  src/ali_yundun_query_ddos_config.o \
  src/ali_yundun_secure_check.o \
  src/ali_yundun_service_status.o \
  src/ali_yundun_set_ddos_auto.o \
  src/ali_yundun_set_ddos_qps.o \
  src/ali_yundun_summary.o \
  src/ali_yundun_vul_scan_log.o \
  src/ali_yundun_waf_info.o \
  src/ali_yundun_waf_log.o \
  src/ali_yundun_webshell_log.o \

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
