DYNAMIC_TARGET = libaliyun_api_yundun.so
STATIC_TARGET = libaliyun_api_yundun.a
DEPS = \
  src/ali_yundun.o \
  src/ali_all_malware_num.o \
  src/ali_current_ddos_attack_num.o \
  src/ali_today_aegis_online_rate.o \
  src/ali_today_allkbps.o \
  src/ali_today_allpps.o \
  src/ali_today_backdoor.o \
  src/ali_today_crack_intercept.o \
  src/ali_today_malware_num.o \
  src/ali_todayqps_by_region.o \
  src/ali_web_attack_num.o \

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
