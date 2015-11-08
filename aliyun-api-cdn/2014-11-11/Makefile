TARGET = aliyun_api_cdn.so
DEPS = \
  src/ali_cdn.o \
  src/ali_add_cdn_domain.o \
  src/ali_delete_cdn_domain.o \
  src/ali_describe_cdn_domain_base_detail.o \
  src/ali_describe_cdn_domain_detail.o \
  src/ali_describe_cdn_domain_logs.o \
  src/ali_describe_cdn_monitor_data.o \
  src/ali_describe_cdn_service.o \
  src/ali_describe_one_minute_data.o \
  src/ali_describe_refresh_tasks.o \
  src/ali_describe_user_domains.o \
  src/ali_modify_cdn_service.o \
  src/ali_open_cdn_service.o \
  src/ali_push_object_cache.o \
  src/ali_refresh_object_caches.o \
  src/ali_start_cdn_domain.o \
  src/ali_stop_cdn_domain.o \

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
