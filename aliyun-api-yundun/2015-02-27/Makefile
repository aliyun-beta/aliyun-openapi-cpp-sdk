TARGET = aliyun_api_yundun.so
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

$(TARGET): $(DEPS) $(SHARED_LIBS)
	g++ --shared -fPIC -o $(TARGET) $(DEPS) $(SHARED_LIBS)

../../aliyun_api_core/libaliyun_core.a:
	make -C ../../aliyun_api_core/ libaliyun_core.a

clean:
	rm -f $(DEPS) $(SHARED_LIBS)
	make -C ../../aliyun_api_core/ clean
