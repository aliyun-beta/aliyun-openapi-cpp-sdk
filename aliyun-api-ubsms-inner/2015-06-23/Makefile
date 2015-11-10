DYNAMIC_TARGET = libaliyun_api_ubsmsinner.so
STATIC_TARGET = libaliyun_api_ubsmsinner.a
DEPS = \
  src/ali_ubsmsinner.o \
  src/ali_ubsmsinner_describe_business_status.o \
  src/ali_ubsmsinner_describe_user_business_status.o \
  src/ali_ubsmsinner_notify_user_business_command.o \
  src/ali_ubsmsinner_set_user_business_statuses.o \
  src/ali_ubsmsinner_set_user_security_status.o \

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
